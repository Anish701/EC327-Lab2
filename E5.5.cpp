#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int first_digit(int n)
{
    int res = n;
    while (res / 10 != 0)
    {
        res /= 10;
    }
    return res;
}

int last_digit(int n)
{
    return n % 10;
}

int digits(int n)
{
    int res = 0;
    int x = n;
    while (x != 0)
    {
        x /= 10;
        res++;
    }
    return res;
}

int main()
{
    int num;
    cout << "Enter an Integer: ";
    cin >> num;
    cout << endl;
    cout << "First digit is: " << first_digit(num) << endl;
    cout << "Last digit is: " << last_digit(num) << endl;
    cout << "Number of digits is: " << digits(num) << endl;
    cout << endl;
    return 0;
}