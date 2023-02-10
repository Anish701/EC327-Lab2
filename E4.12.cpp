#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string word;
    cout << "Enter Word: ";
    cin >> word;
    int length = word.size();
    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j <= length - i; j++)
        {
            string str = word.substr(j, i);
            cout << str << endl;
        }
    }

    return 0;
}