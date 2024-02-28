#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Display welcome message and rules
    cout << "Welcome to Guess the Number!" << endl;
    cout << "Try to guess the number the computer has chosen." << endl;

    // Prompt the player to enter the range of numbers
    int lowerBound, upperBound;
    cout << "Enter the lower bound of the range: ";
    cin >> lowerBound;
    cout << "Enter the upper bound of the range: ";
    cin >> upperBound;

    // Generate a random number within the specified range
    srand(time(0));
    int randomNumber = lowerBound + rand() % (upperBound - lowerBound + 1);

    int guess, attempts = 0;
    const int maxAttempts = 5; // Adjust this value as needed

    // Main game loop
    while (attempts < maxAttempts) {
        // Prompt the player to guess the number
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Check if the guess is correct
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
        
        attempts++;
    }

    // Check if the player ran out of attempts
    if (attempts == maxAttempts) {
        cout << "Sorry, you ran out of attempts. The correct number was " << randomNumber << "." << endl;
    }

    // Ask the player if they want to play again

    return 0;
}
