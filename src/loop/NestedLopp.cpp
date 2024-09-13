#include <iostream>
#include <conio.h>
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "██"<<" ";
        }
        cout << "\n";
    }

    return 0;
}
