#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int num[10];
    cout << "Enter 10 numbers in the array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    int m = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > m)
        {
            m = num[i];
        }
    }
    cout << "Max =" << m;

    return 0;
}