#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// PART B
int sumOfSquares()
{
    int sum = 0;
    int num = 1;
    int square = 0;
    while (square <= 100)
    {
        sum = sum + square;
        square = pow(num, 2);
        num = num + 1;
    }

    return sum;
}

// PART C
int powersOf2()
{
    for (int i = 0; i < 21; i++)
    {
        cout << "2 to the power of " << i << " is: " << pow(2, i) << endl;
    }
    return 0;
}

// PART E
int sumOfOddDigits(int input)
{
    int sum = 0;
    int num = input;

    while (num != 0)
    {
        int digit = num % 10;

        if (digit % 2 == 1)
        {
            sum = sum + digit;
        }

        num = num / 10;
    }

    return sum;
}

int main()
{
    // PART B
    cout << "Sum of Squares Between 1 and 100 Inclusive: " << sumOfSquares() << endl;
    cout << endl;

    // PART C
    powersOf2();
    cout << endl;

    // PART E
    int input;
    cout << "Enter Input: ";
    cin >> input;
    cout << "Sum of All Odd Digits in this Input is: " << sumOfOddDigits(input) << endl;
    cout << endl;
    return 0;
}