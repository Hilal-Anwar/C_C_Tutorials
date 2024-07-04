#include <iostream>
#include <conio.h>
#include "Faisal.h"

using namespace std;

int main(int argc, char const *argv[])
{
    message1();
    message2();
    sum(8, 9);
    prime(11);
    return 0;
}
void message1()
{
    int a;

    cout << "Saif \n";
}
void message2()
{
    int a;
    cout << "Faisal \n";
}
void sum(int a, int b)
{
    int s = a + b;
    cout << "The sum is = " << s << endl;
}
int prime(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
           c=c+1;
        }
        
    }
    if (c==2)
    {
        return 1;
    }
    else {
        return 0;
    }
    
}