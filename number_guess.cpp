#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number, guess, attempts;
    char playAgain;

    do {
        number = rand() % 100 + 1;
        attempts = 0;

        cout << "\n==========NUMBER GUESSING GAME===========\n";
        cout << "Guess a number between 1 and 100\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) {
                cout << "Too High!, Try again\n";
            }
            else if (guess < number) {
                cout << "Too low!, Try again\n";
            }
            else {
                cout << "\nCorrect!, your guess is right\n";
                cout << "Total attempts: " << attempts << endl;
                cout << "Your score: " << 100 - attempts << endl;
            }
        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing\n";
    return 0;
}