#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter a number \n";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
