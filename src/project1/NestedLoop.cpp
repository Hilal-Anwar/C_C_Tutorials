#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
   
   for (int i = 1; i <= 20; i = i + 1)
    {
        for (int j = 1; j <= 32; j++)
        {
         cout<<"[0;31m██";   
        }
        cout<<"\n";
    }

    return 0;
}
