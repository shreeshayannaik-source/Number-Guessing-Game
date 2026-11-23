#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    char playAgain;

    cout << "===== NUMBER GUESSING GAME =====" << endl;

    do
    {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "\nGuess a number between 1 and 100" << endl;

        do
        {
            cout << "Enter your guess: ";
            cin >> guess;

            attempts++;

            if (guess > secretNumber)
            {
                cout << "Too High! Try again." << endl;
            }
            else if (guess < secretNumber)
            {
                cout << "Too Low! Try again." << endl;
            }
            else
            {
                cout << "\nCongratulations! You guessed correctly!"
                     << endl;
                cout << "Number of attempts: " << attempts << endl;
            }

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing!" << endl;

    return 0;
}
