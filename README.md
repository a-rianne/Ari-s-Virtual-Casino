- Ari's Virtual Mini Casino -

COMPSCI 2 - FINAL PROJECT

Arianne Dias
April 22nd, 2025

+ Project Overview +
This is a text based mini virtual casino built using C++. It allows the player to enter the casino with a fixed amount of money and choose from different games to play and bet on.
	-= Games=-
- Blackjack
- Craps
- Roulette
- Slot Machine

Each of the games involve using the starting money to place bets while winning or losing money. If the player runs out of money they're kicked removed from the casino with an option to restart.

+ Project Goals +
- Apply core concepts learned in Compsci 2 for C++ in a simulation
- Build a fun interactive game that can be added to a portfolio
- Reinforce understanding of pointers, modular design, and random number generation
- Demonstrate principles like inheritance and polymorphism

+ Features +
- Clean and interactive menu system
- Dynamic betting system with money tracking
- Player can restart after going bankrupt
- Modular code with reusable classes
- Each game has its own rules and logic
- Designed with future scalability in mind

+ Files +
- **casinomain.cpp** - Main driver of the game that initializes the casino, handles user input, and manages the game flow.
- **blackjack.cpp** - Simulates a round of Blackjack.
- **craps.cpp** - Simulates a round of Craps.
- **roulette.cpp** - Simulates a round of Roulette.
- **slots.cpp** - Simulates a round of Slot Machine.
- **blackjack.h** - Header file containing function prototypes for Blackjack.
- **craps.h** - Header file containing function prototypes for Craps.
- **roulette.h** - Header file containing function prototypes for Roulette.
- **slots.h** - Header file containing function prototypes for Slot Machine.

+ Concepts Used +
- Classes and inheritance
- Control flow
- User input handling
- Pointers
- Random number generation
- Streams
- Modular design

+ Design Decisions +
- Randomness: We used rand() to generate random results for each game, simulating the unpredictability of casino games.

- Modular Design: Each game (Blackjack, Craps, Roulette, Slot Machine) is contained within its own function, keeping the code organized and easier to maintain.

- User Interface: The user interacts with the casino via text-based prompts. The game is designed to be simple and easy to play, even for beginners.

+ Challenges +
- Handling User Input: A challenge was ensuring that user input was properly validated to prevent invalid inputs (such as betting more than the player has).

- Randomness: Implementing randomness for the dice rolls, card draws, and slot machine spins was important for making the game feel authentic.

- Game Flow: Managing the game flow and ensuring that the player’s money, stats, and win/loss records were updated correctly as they played was crucial to the user experience.

--==+ How to Compile and run +==--

+ Requirements +
- C++ compiler

+ Compile +
1. Open a terminal (or command prompt).
2. Navigate to the directory where the `.cpp` and `.h` files are saved.
3. Compile the project using the following command:
   ```bash
   g++ -o casinomain casinomain.cpp blackjack.cpp craps.cpp roulette.cpp slots.cpp
