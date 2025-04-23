// craps.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "craps.h"

using namespace std;

// FUNCTION SIMULATES ROLLING A SIX SIDED DIE
int rollDie() {
    return rand() % 6 + 1;
}

// FUNCTION TO SIMULATE A ROUND OF CRAPS
bool playCraps(int& money) {
    srand(time(0));
    int bet;

    // GETS PLAYER BET
    cout << "\n[Craps] How much would you like to bet? ";
    cin >> bet;

    // VALIDATES BET
    if (bet > money || bet <= 0) {
        cout << "Invalid bet.\n";
        return false;
    }

    // FIRST ROLL
    int die1 = rollDie();
    int die2 = rollDie();
    int sum = die1 + die2;
    cout << "You rolled: " << die1 << "+" << die2 << " = " << sum << "\n";

    // CHECK WIN/LOSS CONDITIONS
    if (sum == 7 || sum == 11) {
        money += bet;
        cout << "You win! You now have $" << money << "\n";
        return true;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        money -= bet;
        cout << "You lose! You now have $" << money << "\n";
        return false;
    } else {
        // POINT PHASE
        int point = sum;
        cout << "Your point is: " << point << "\n";
        while (true) {
            die1 = rollDie();
            die2 = rollDie();
            sum = die1 + die2;
            cout << "You rolled: " << die1 << "+" << die2 << " = " << sum << "\n";
            if (sum == point) {
                money += bet;
                cout << "You hit your point! You win and now have $" << money << "\n";
                return true;
            } else if (sum == 7) {
                money -= bet;
                cout << "You rolled a 7. You lose and now have $" << money << "\n";
                return false;
            }
        }
    }
}