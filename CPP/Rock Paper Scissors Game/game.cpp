#include <iostream>
#include <ctime>

char getPlayerChoice();

char getSystemChoice();

auto chooseWinner(char playerChoice, char systemChoice) -> void;

int main()
{
    std::srand(std::time(0));
    int option;
    std::cout << "1. Play 2. Exit" << std::endl;
    std::cin >> option;
    while (option == 1)
    {
        char playerChoice = getPlayerChoice();
        char systemChoice = getSystemChoice();
        std::cout << playerChoice << " " << systemChoice << std::endl;
        chooseWinner(playerChoice, systemChoice);
        std::cout << "1. Play 2. Exit" << std::endl;
        std::cin >> option;
    }
    std::cout << "Thanks for playing!!!" << std::endl;
    return 0;
}

char getPlayerChoice()
{
    char choice;
    while (true)
    {
        std::cout << "Enter R for Rock, P for Paper, or S for Scissors: ";
        std::cin >> choice;
        choice = std::toupper(choice); // Convert to uppercase

        if (choice == 'R' || choice == 'P' || choice == 'S')
        {
            break;
        }
        else
        {
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    return choice;
}

char getSystemChoice()
{
    int randomNumber = (std::rand() % 3) + 1;
    switch (randomNumber)
    {
    case 1:
        return 'R';
    case 2:
        return 'P';
    case 3:
        return 'S';
    default:
        return 'R'; 
    }
}

void chooseWinner(char playerChoice, char systemChoice)
{
    if (playerChoice == systemChoice)
    {
        std::cout << "Draw" << std::endl;
        return;
    }
    else if ((playerChoice == 'R' && systemChoice == 'S') || (playerChoice == 'P' && systemChoice == 'R') || (playerChoice == 'S' && systemChoice == 'P'))
    {
        std::cout << "Player Won" << std::endl;
        return;
    }
    else
    {
        std::cout << "System Won" << std::endl;
        return;
    }
    return;
}