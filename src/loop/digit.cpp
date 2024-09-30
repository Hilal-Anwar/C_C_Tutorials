/*
Input :
1587

Output :
7851
*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number : \n";
    cin >> n;
    int rev = 0;
    for (int i = n; i > 0; i = i / 10)
    {
        int r = i % 10;
        rev = rev * 10 + r;
    }
    cout << rev << endl;

    return 0;
}
