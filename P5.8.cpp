#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string distribute_spaces(string str)
{
    if (str.size() >= 40)
    {
        return str;
    }
    int spacesNeeded = 40 - str.size();
    int i = 0;
    int x = 0;
    while (x < spacesNeeded)
    {
        if (str.substr(i, 1) == " ")
        {
            str = str.substr(0, i + 1) + " " + str.substr(i + 1);
            x++;
            i++;
        }
        i++;
        if (i >= 40)
        {
            i = 0;
        }
    }
    return str;
}

string arrange(string str)
{
    if (str.size() < 40)
    {
        return str;
    }
    int i = 40;
    while (str.substr(i - 1, 1) != " ")
    {
        i--;
    }
    string res = str.substr(0, i);
    res = distribute_spaces(res);
    return res + "\n" + arrange(str.substr(i));
}

int main()
{
    string s;
    cout << "Input String: " << endl;
    getline(cin, s);
    cout << endl;
    cout << arrange(s) << endl;
    return 0;
}