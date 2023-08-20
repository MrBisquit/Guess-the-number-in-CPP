#include <iostream>
#include "Random.h"

using namespace std;

int* picked = new int;
bool correct = false;

int main()
{
    RandomNumber r;
    cout << "How this game works:" << endl;
    cout << "- The game generates a random number between 1 and 100 and you have to guess the number." << endl;
    cout << "- The game will tell you if the number is higher or lower than your guessed number." << endl;
    cout << endl;
    *picked = r.Next();

    do {
        cout << "Your guess: ";
        int* guessed = new int;
        cin >> *guessed;

        if (*guessed > *picked) {
            cout << endl << "Lower." << endl;
        }
        else if (*guessed < *picked) {
            cout << endl << "Higher." << endl;
        }
        else if (*guessed == *picked) {
            cout << endl << "You guessed correctly! The number is " << *picked << "!" << endl;
            correct = true;
        }

        delete guessed;
    } while (!correct);

    delete picked;
    cout << endl << "End of program." << endl;
}