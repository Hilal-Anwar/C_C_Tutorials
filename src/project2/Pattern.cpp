#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 70; i >= 65; i--)
    {
        for (int j = i; j >=65; j--)
        {
            cout << (char)j << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
1 2 4 3 8 11 16 

*/
