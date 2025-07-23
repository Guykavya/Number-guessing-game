# Number-guessing-game
🎲 Random Number Guessing Game in C

Welcome to the **Random Number Guessing Game**, a simple terminal-based game developed in **C**. The program generates a random number and challenges the user to guess it within a limited number of attempts. It’s a fun way to practice basic C programming concepts like loops, conditionals, functions, and random number generation.


🛠 Features

* Random number generation using `rand()`
* User-friendly input prompts
* Feedback for each guess (too high / too low / correct)
* Limit on the number of attempts
* Option to play again after game over

🚀 How to Run

### Prerequisites

* A C compiler like GCC
* A terminal or command prompt

📌 How It Works

1. The program generates a random number between a set range (e.g., 1 to 100).
2. The player tries to guess the number.
3. The program gives hints:

   * "Too high" if the guess is more than the number
   * "Too low" if the guess is less than the number
4. The player wins if they guess correctly within the attempt limit.
5. Option to restart the game after each round.


💡 Concepts Used

* `stdio.h` for input/output
* `stdlib.h` for random number generation
* `time.h` to seed random values
* Control flow (if-else, loops)
* Functions (optional, if used)


📚 Future Improvements

* Add difficulty levels (easy/medium/hard)
* Track and display high scores
* Add graphical interface (GUI) using libraries like GTK or with C++ support
* Multiplayer support

📌 Author

Kavya Baghel
BCA Student | Aspiring Developer
