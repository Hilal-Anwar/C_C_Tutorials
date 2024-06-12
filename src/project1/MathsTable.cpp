#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 1;
    cout << "Enter a number\n";
    int n;
    cin >> n;
    while (i <= 10)
    {
        cout << n << " X " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}