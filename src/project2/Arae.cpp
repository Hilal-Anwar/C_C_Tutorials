#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int a, b;
    cout << "Enter the length and breadth" << endl;
    cin >> a;
    cin >> b;
    int ar, pe;
    pe = 2 * (a + b);
    ar = a * b;
    cout << "Perimeter is = " << pe << endl;
    cout << "Area is = " << ar;
    return 0;
}