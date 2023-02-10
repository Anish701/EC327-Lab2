#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string reverse(string str)
{
    if (str.size() > 1)
    {
        string p = reverse(str.substr(1));
        return p + str.substr(0, 1);
    }
    else
    {
        return str;
    }
}

int main()
{
    string s;
    cout << "Input String: ";
    cin >> s;
    cout << reverse(s) << endl;
    return 0;
}