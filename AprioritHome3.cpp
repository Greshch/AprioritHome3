// AprioritHome3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

//Enter the first num : 10
//Enter the operation : +
//Enter the second num : 20
//Result is : 30

int main()
{
    const int UNKNOWN_OPERATION_ERROR = 404;
    const int DEV_BY_ZERO_ERROR = 101;
    const double EPSILON = .000001;
    const double ZERO = 0.0;

    std::cout << "Enter the first num : ";
    double first = 0;
    std::cin >> first;

    std::cout << "Enter the operation : ";
    char operation = 0;
    std::cin >> operation;

    std::cout << "Enter the second num : ";
    double second = 0;
    std::cin >> second;

    double result = .0;

    if (operation == '*')
    {
        result = first * second;
    }
    else if (operation == '/')
    {
        double dif = abs(second - ZERO);
        //std::cout << "dif = " << dif << std::endl;
        if (dif <= EPSILON)
        {
            std::cout << "Devision by zero ERROR!!\n";
            return DEV_BY_ZERO_ERROR;
        }
        result = first / second;
    }
    else if (operation == '+')
    {
        result = first + second;
    }
    else if (operation == '-')
    {
        result = first - second;
    }
    else
    {
        std::cout << "Unknown operation ERROR\n";
        return UNKNOWN_OPERATION_ERROR;
    }

    std::cout << "Result is : " << result << std::endl;
}

