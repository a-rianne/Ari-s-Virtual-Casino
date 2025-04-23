// blackjack.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "blackjack.h"

using namespace std;

// SIMULATING ONE ROUND OF BLACKJACK
bool playBlackjack(int& money) {
    srand(time(0));
    int bet;

    // GET PLAYER BET
    cout << "\n[Blackjack] How much would you like to bet? ";
    cin >> bet;

    // VALIDATES BET
    if (bet > money || bet <= 0) {
        cout << "Invalid bet.\n";
        return false;
    }

    // GENERATES SIMPLE RANDOM HANDS FOR (1-21)
    int playerTotal = rand() % 11 + 16;  // (16–26)
    int dealerTotal = rand() % 11 + 16;

    // DISPLAYS HAND TOTALS
    cout << "You got: " << playerTotal << "\nDealer got: " << dealerTotal << "\n";

    // DETERMINES OUTCOME
    if ((playerTotal <= 21 && playerTotal > dealerTotal) || (dealerTotal > 21 && playerTotal <= 21)) {
        money += bet;
        cout << "You win! You now have $" << money << "\n";
        return true;
    } else {
        money -= bet;
        cout << "You lose! You now have $" << money << "\n";
        return false;
    }
}