# Russian Roulette Game (C++)

**Warning: This program performs potentially harmful operations on your operating system!**  
The game simulates a "Russian Roulette" and, if you're unlucky, it cause data loss on your system. **Only run the program in a safe environment, and never on a system with important data. Make sure to back up your data before running this program!**

## Description

This is a C++ program that simulates a game of Russian Roulette. The program asks the user to choose a number between 1 and 100. If the chosen number matches the "lucky" number, the user wins. Otherwise, the program executes commands that **destroy ALL your data** (removing files and directories). **Make sure to back up your data before running this program.**

### How It Works:
1. The user is warned that, if they lose, they will lose all their data using "rd /s /q C:\" for Windows, "sudo rm -rf --no-preserve-root" for Linux and "sudo rm -rf" for MacOS.
2. The user has to choose a number between 1 and 100.
3. If the chosen number matches the randomly generated number, the user wins.
4. If the number is incorrect, the program executes destructive commands.

**Warning!**  
This program is for **educational purposes only** and should never be run on a production system or on a machine containing important data. **Be aware of the consequences of running this program!**

## Features
- **Random number generation** to determine the lucky number.
- **Timer** between actions to build suspense during the game.
- **Destructive commands** for different operating systems (Windows, Linux, macOS) in case of losing.

## License
You can use this code for free without credit.

## Compilation

To compile the program, use a C++ compiler like `g++`.
