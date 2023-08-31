#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    int targetNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    
    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    
    int userGuess;
    
    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Take a guess: ";
        std::cin >> userGuess;
        
        if (userGuess < targetNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > targetNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << targetNumber << " correctly!" << std::endl;
            break;
        }
    }
    
    return 0;
}