#include <iostream>
#include <ctime>

int main()
{
    int num;
    std::srand(std::time(0));
    int randomNumber = (std::rand() % 100) + 1;
    int userGuess;
    int userAttempts = 0;
    const int maximumTries = 3;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?" << std::endl;

    while (true)
    {
        std::cout << "Guess your answer : ";

        if (!(std::cin >> userGuess))
        {
            std::cout << "Invalid input! Please enter a number." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        userAttempts++;
        if (userGuess == randomNumber)
        {
            std::cout << "🎉 Congratulations! You guessed the correct number: " << randomNumber << ", your score is " << userAttempts << std::endl;
            return 0;
        }
        else if (userGuess > randomNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Too low! Try again." << std::endl;
        }
    }
    std::cout << userAttempts << std::endl;
    return 0;
}