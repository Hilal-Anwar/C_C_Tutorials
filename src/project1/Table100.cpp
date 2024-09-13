#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout<<"\n";
    }

    return 0;
}