// slots.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "slots.h"

using namespace std;

// FUNCTION TO SIMULATE 1 PULL OF A SLOT MACHINE 
bool playSlots(int& money) {
    srand(time(0));
    int bet;

    // GETS PLAYER BET
    cout << "\n[Slot Machine] How much would you like to bet? ";
    cin >> bet;

    // VALIDATES BET
    if (bet > money || bet <= 0) {
        cout << "Invalid bet.\n";
        return false;
    }

    // GENERATES 3 RANDOM SYMBOLS (0-5)
    int a = rand() % 6;
    int b = rand() % 6;
    int c = rand() % 6;
    cout << "You spun: [" << a << "] [" << b << "] [" << c << "]\n";

    // CHECKS FOR MATCHES
    if (a == b && b == c) {
        money += bet * 5;  // JACKPOT
        cout << "Jackpot! You now have $" << money << "\n";
        return true;
    } else if (a == b || b == c || a == c) {
        money += bet;  // SMALL WIN
        cout << "Two match! You win your bet back and now have $" << money << "\n";
        return true;
    } else {
        money -= bet;
        cout << "No match. You lose and now have $" << money << "\n";
        return false;
    }
}