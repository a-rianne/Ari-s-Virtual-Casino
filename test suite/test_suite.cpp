#include <iostream>
#include <cassert>
#include "blackjack.h"
#include "craps.h"
#include "roulette.h"
#include "slots.h"

using namespace std;

// Function to test Blackjack logic
void testBlackjack() {
    int money = 500;
    bool result = playBlackjack(money);
    assert(money >= 0); // Asserts that the money never goes negative
    cout << "Blackjack test passed!" << endl;
}

// Function to test Craps logic
void testCraps() {
    int money = 500;
    bool result = playCraps(money);
    assert(money >= 0); // Asserts that the money never goes negative
    cout << "Craps test passed!" << endl;
}

// Function to test Roulette logic
void testRoulette() {
    int money = 500;
    bool result = playRoulette(money);
    assert(money >= 0); // Asserts that the money never goes negative
    cout << "Roulette test passed!" << endl;
}

// Function to test Slot Machine logic
void testSlots() {
    int money = 500;
    bool result = playSlots(money);
    assert(money >= 0); // Asserts that the money never goes negative
    cout << "Slots test passed!" << endl;
}

// Main test suite function
int main() {
    cout << "Running test suite..." << endl;

    // Tests each game
    testBlackjack();
    testCraps();
    testRoulette();
    testSlots();

    cout << "All tests passed!" << endl;
    return 0;
}