#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int num[10];
    cout << "Enter 10 numbers in the array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    int s=0;
    for (int  i = 0; i <10; i++)
    {
        s=s+num[i];
    }
    cout<<"The sum is = "<<s;
    

    return 0;
}