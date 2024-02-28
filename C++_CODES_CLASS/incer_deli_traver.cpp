
#include <iostream>
using namespace std;

const int i = 100;


class Array {
private:

    int arr[i];
    int size;
public:
    Array() {
        size = 0;
    }

    void insertElement(int element) {
        if (size < i) {
            arr[size++] = element;
            cout << "Element inserted successfully." << endl;
        } else {
            cout << "Array is full. Cannot insert element." << endl;
        }
    }

    void deleteElement(int element) {
        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == element) {
                found = true;
                for (int j = i; j < size - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                size--;
                cout << "Element deleted successfully." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Element not found. Cannot delete." << endl;
        }
    }

    void traverse() {
        if (size == 0) {
            cout << "Array is empty." << endl;
        } else {
            cout << "Elements in the array:" << endl;
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Array arr;
    int choice, element;
        unsigned int n, a[50], e, f = 0;

    cout << " How many elements you want to enter : ";

    cin >> n;

    cout << "\n Enter the elements \n";

    for (int i = 1; i <= n; i++)

        cin >> a[i];

    do {
        cout << "Menu:" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Traverse Array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                arr.insertElement(element);
                break;
            case 2:
                cout << "Enter the element to delete: ";
                cin >> element;
                arr.deleteElement(element);
                break;
            case 3:
                arr.traverse();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
