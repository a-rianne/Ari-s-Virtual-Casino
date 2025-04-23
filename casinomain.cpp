/* casinomain.cpp
    ARI'S VIRTUAL CASINO!
    
    Arianne Dias
    COMPSCI-2-40364
    4/22/25
*/ 

// casinomain.cpp
#include <iostream>
#include <string>
#include "blackjack.h"
#include "craps.h"
#include "roulette.h"
#include "slots.h"

using namespace std;

int main() {
    string name;
    int money, gamesPlayed, gamesLost, gamesWon;
    char choice;

    // WELCOMES PLAYER TO CASINO AND GETS THEIR NAME
    cout << "Welcome to Ari's Virtual Casino! Your name please?"
    cin >> name;

startOver:
    // RESETS THE GAME STATS
    money = 500;
    gamesPlayed = gamesWon = gamesLost = 0;

    // MAIN GAME LOOP, PLAYER CONTINUES TO PLAY UNTIL PLAYER MONEY RUNS OUT
    while (money > 0) {
        cout << "\nHi! " << name << "You have $" << money << "remaining. Choose a game to play:\n";
        cout << "1. Blackjack\n2. Craps\n3. Roulette\n4. Slot Machine\nChoice: ";
        cin >> choice;

        gamesPlayed++;
        bool win = false;

        // PLAYER SELECTS GAME TO PLAY
        switch (choice) {
            case '1': win = playBlackjack(money); break;
            case '2': win = playCraps(money); break;
            case '3': win = playRoulette(money); break;
            case '4': win = playSlots(money); break; 
            default: 
                cout << "Invalid choice!\n";
                gamesPlayed--;
                continue;
        }

        // UPDATES GAME STATS
        if (win) gamesWon++;
        else gamesLost++;
    }

    // GAME OVER SUMMARY
    cout << "\nYou’ve run out of money :( " << name << "! Here's how you did:\n";
    cout << "Games played: " << gamesPlayed << "\nGames won: " << gamesWon;
    cout << "\nGames lost: " << gamesLost << "\nTotal money lost: $500\n";

    // OPTION TO RESTART GAME
    cout << "\nWould you like to start over? (y/n): ";
    char again;
    cin >> again;
    if (again == 'y' || again == 'Y') goto startOver;

    cout << "Thanks for playing at Ari's Virtual Casino!\n";
    return 0;
}