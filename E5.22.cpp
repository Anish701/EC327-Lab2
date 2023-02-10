#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_palindrome(string str)
{
    int length = str.size();
    if (str.size() == 0 || str.size() == 1)
    {
        return true;
    }
    else if (str.substr(0, 1) == str.substr(length - 1, 1))
    {
        is_palindrome(str.substr(1, length - 2));
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout << "Enter Word: ";
    cin >> s;
    if (is_palindrome(s))
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is NOT a palindrome." << endl;
    }
    return 0;
}