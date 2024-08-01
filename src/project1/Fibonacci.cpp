#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    /*
    a b c
    0 1 1 2 3 5 8 13 .......
    */
    int n;
    cout << "Enter a number : \n";
    cin >> n;
    int a = 0, b = 1, c;
    cout << a << "," << b;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << "," << c;
        a = b;
        b = c;
    }

    return 0;
}
