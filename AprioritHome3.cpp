// AprioritHome3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Задача со звездочкой : Реализовать калькулятор выражений, поддерживающий 
//операции + -*/ пример того как это может выглядеть в консоле :
//10
//+
//10
//-
//15
//*
//2
//=
//10

#include <iostream>

int main()
{
    std::cout << "\t\tCalculator\n";
    double num = 0, result = 0;
    char operation = 0;
    char const EQUAL = '=';
    int const UNKNOWN_OPERATION_ERROR = 101;
    std::cin >> num;
    result = num;
    std::cin >> operation;
    for (; operation != EQUAL; )
    {
        std::cin >> num;
        if (operation == '+')
        {
            result += num;
        }
        else if (operation == '-')
        {
            result -= num;
        }
        else if (operation == '*')
        {
            result *= num;
        }
        else if (operation == '/')
        {
            result /= num;
        }
        else
        {
            return UNKNOWN_OPERATION_ERROR;
        }
        std::cin >> operation;
    }
    std::cout << result << std::endl;
}

