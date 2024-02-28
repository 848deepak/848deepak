#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure for the book
struct Book {
    string title;
    string author;
    int year;
};

// Function to add a book to the library
void addBook(vector<Book> &library) {
    Book newBook;
    cout << "Enter title of the book: ";
    getline(cin, newBook.title);
    cout << "Enter author of the book: ";
    getline(cin, newBook.author);
    cout << "Enter publication year of the book: ";
    cin >> newBook.year;
    cin.ignore(); // Clear input buffer
    library.push_back(newBook);
    cout << "Book added successfully.\n";
}

// Function to search for a book by title
void searchByTitle(const vector<Book> &library, const string &title) {
    bool found = false;
    for (const auto &book : library) {
        if (book.title == title) {
            cout << "Book found:\n";
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Year: " << book.year << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Book not found.\n";
}

// Function to display all books in the library
void displayLibrary(const vector<Book> &library) {
    cout << "Library Contents:\n";
    for (const auto &book : library) {
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "Year: " << book.year << endl;
        cout << "-------------------------\n";
    }
}

int main() {
    vector<Book> library; // Vector to store books in the library
    int choice;
    string title;

    do {
        cout << "Library Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Search by Title\n";
        cout << "3. Display All Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch(choice) {
            case 1:
                addBook(library);
                break;
            case 2:
                cout << "Enter title to search: ";
                getline(cin, title);
                searchByTitle(library, title);
                break;
            case 3:
                displayLibrary(library);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
