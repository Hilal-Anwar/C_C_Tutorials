#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    cout << "Enter 2 numbers : \n";
    int a, b;
    cin >> a >> b;
    while (a < b)
    {
        if (a % 2 == 0)
            cout << a << endl;
        a = a + 1;
    }

    return 0;
}
