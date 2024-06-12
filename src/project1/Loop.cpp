#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]) 
{
    int c = 1;
    while (c <= 6)
    {
        if (c <= 3)
        {
            cout << "Faisal\t" << "Saif" << endl;
        }
        else
        {
            cout << "They love to code\n";
        }
        c = c + 1;
    }
    cout << "The loop has ended\n";
    return 0;
}
