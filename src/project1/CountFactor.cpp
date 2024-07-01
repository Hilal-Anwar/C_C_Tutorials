#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int n, k
    ;
    cout << "Enter a number" << endl;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            k++;
        }
    }
    cout << "Number of factors are = " << k;
    return 0;
}
