#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int n;
    int max=0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a number" << endl;
        cin >> n;
        if (n > max)
        {
            max = n;
        }
    }
    cout << "Max number is = " << max;
}