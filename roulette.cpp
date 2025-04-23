// roulette.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "roulette.h"

using namespace std;

// FUNCTION TO SIMULATE A ROUND OF ROULETTE
bool playRoulette(int& money) {
    srand(time(0));
    int bet;
    int choice;

    // GETS PLAYER BET
    cout << "\n[Roulette] How much would you like to bet? ";
    cin >> bet;

    // VALIDATES BET
    if (bet > money || bet <= 0) {
        cout << "Invalid bet.\n";
        return false;
    }

    // CHOOSE RED OR BLACK (1 = RED| 0 = BLACK)
    cout << "Bet on red (1) or black (0): ";
    cin >> choice;

    // SIMULATES A SPIN (1 = RED| 0 = BLACK)
    int result = rand() % 2;
    cout << "The ball landed on: " << (result == 1 ? "Red" : "Black") << "\n";

    // DETERMINES WIN/LOSS
    if (choice == result) {
        money += bet;
        cout << "You win! You now have $" << money << "\n";
        return true;
    } else {
        money -= bet;
        cout << "You lose! You now have $" << money << "\n";
        return false;
    }
}