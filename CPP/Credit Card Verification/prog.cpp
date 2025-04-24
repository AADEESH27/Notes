#include <iostream>

int sumOfEverySecondDigit(const int *ccNumber, const int lengthOfCcNumber);
int sumOfEveryOddDigit(const int *ccNumber, const int lengthOfCcNumber);

int main()
{
    std::cout << "Enter the length of your credit card number" << std::endl;
    int lengthOfCcNumber;
    std::cin >> lengthOfCcNumber;
    int ccNumber[lengthOfCcNumber];
    std::cout << "Enter your credit card number" << std::endl;
    for (int i = 0; i < lengthOfCcNumber; i++)
    {
        std::cin >> ccNumber[i];
    }
    int sumOfDigits = sumOfEverySecondDigit(ccNumber, lengthOfCcNumber);
    sumOfDigits += sumOfEveryOddDigit(ccNumber, lengthOfCcNumber);
    if (sumOfDigits % 10 == 0)
    {
        std::cout << "Your credit card is verified" << std::endl;
    }
    else
    {
        std::cout << "Credit card not valid" << std::endl;
    }
    return 0;
}

int sumOfEverySecondDigit(const int *ccNumber, const int lengthOfCcNumber)
{
    int sum = 0;
    for (int i = lengthOfCcNumber - 2; i >= 0; i -= 2)
    {
        int doubled = ccNumber[i] * 2;
        if (doubled / 10 != 0)
        {
            while (doubled > 0)
            {
                int remainder = doubled % 10;
                sum += remainder;
                doubled = doubled / 10;
            }
        }
        else
        {
            sum += doubled;
        }
    }
    return sum;
}

int sumOfEveryOddDigit(const int *ccNumber, const int lengthOfCcNumber)
{
    int sum = 0;
    for (int i = lengthOfCcNumber - 1; i >= 0; i -= 2)
    {
        sum += ccNumber[i];
    }
    return sum;
}
