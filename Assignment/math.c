
#include <stdio.h>
#include "math.h"

int math(int num1, int num2, char Operator)//Math function that takes in two integer values and an operator
{
    int result = 0;//result 
    switch(Operator)//switches on the operator
    {
        case '+':
            result = num1 + num2;//Addition
            break;
        case '-':
            result = num1 - num2;//Subtraction
            break;
        case '*':
            result = num1 * num2;//multiplication
            break;
        case '/':
            result = num1 / num2;//Division
            break;
        case '%':
            result = num1 % num2;//Modulus
            break;
        default:// any other case
            break;
    }
     return result;//returns result 
}
