#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    int half = num / 2;
    for (int i = 2; i <= half; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int input;

    cout << "Enter an Integer: ";
    cin >> input;

    for (int i = 2; i <= input; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}