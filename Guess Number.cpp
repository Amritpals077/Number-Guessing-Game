#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "?? Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        } else if (guess < number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "?? Congratulations! You guessed it in " << attempts << " attempts.\n";
        }

    } while (guess != number);

    return 0;
}

