#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10];
    int b[10][5];
    cout<<"Enter 10 numbers in array :\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the "<<(i+1)<<"th "<<"element\n";
        cin>>a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
