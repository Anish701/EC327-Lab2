#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int width;
    int height;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter Height: ";
    cin >> height;

    int total = width * height;

    for (int i = 1; i <= total; i++)
    {
        cout << "*";
        if (i % width == 0)
        {
            cout << endl;
        }
    }
    return 0;
}