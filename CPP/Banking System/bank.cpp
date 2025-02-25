#include <iostream>

int bankBalance = 0;

int checkBalance();

void deposit(int amount);

void withdraw(int amount);

int main()
{
    int option;
    while (option != 4)
    {
        std::cout << "Select and option: " << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Deposite Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> option;

        int amount = 0;
        switch (option)
        {
        case 1:
            std::cout << checkBalance() << std::endl;
            break;
        case 2:
            std::cout << "Enter the amount: ";
            std::cin >> amount;
            deposit(amount);
            break;
        case 3:
            std::cout << "Enter the amount: ";
            std::cin >> amount;
            withdraw(amount);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
        }
    }
    std::cout << "Thank You!" << std::endl;
    return 0;
}

int checkBalance()
{
    return bankBalance;
}

void deposit(int amount)
{
    bankBalance += amount;
    std::cout << "Amount Deposited..." << std::endl;
    std::cout << "Current Balance: " << checkBalance() << std::endl;
    return;
}

void withdraw(int amount)
{
    if (amount < bankBalance)
    {
        bankBalance -= amount;
        std::cout << "Amount Withdrawn..." << std::endl;
        std::cout << "Current Balance: " << checkBalance() << std::endl;
    }
    else
    {
        std::cout << "Insufficient Funds" << std::endl;
    }
    return;
}