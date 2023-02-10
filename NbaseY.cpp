#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void num_base_y(int num, int y)
{
    int i = 0;
    while (pow(y, i + 1) <= num)
    {
        i++;
    }
    int first = num / pow(y, i);
    cout << first;
    num = num - first * pow(y, i);
    for (int j = i - 1; j >= 0; j--)
    {
        if (pow(y, j) <= num)
        {
            int x = num / int(pow(y, j));
            cout << x;
            num = num - x * pow(y, j);
        }
        else
        {
            cout << 0;
        }
    }
}

int main()
{
    int N;
    int y;
    cout << "Enter Integer greater than 1: ";
    cin >> N;
    cout << "Enter Base between 1 and 10: ";
    cin >> y;
    for (int i = 1; i <= N; i++)
    {
        num_base_y(i, y);
        cout << endl;
    }

    return 0;
}