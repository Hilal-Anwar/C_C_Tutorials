#include "MyHeader.hpp"
#include <iostream>
#include <conio.h>
using namespace std;
bool isEven(int a)
{
    return (a % 2 == 0);
}
void basic()
{
    cout << "Hello world ! 😎😎\t\tMy first c++ program" << endl;
    cout << 2 + 3 << endl;
    cout << 2 - 3 << endl;
    cout << 2 * 3 << endl;
    cout << 2.0 / 3 << endl;
    cout << 2 % 3 << endl;
    int a = 5, b = 3;
    double c = 56.325;
    float e = 25.3f;
    long long f = 545786775634434;
    char g = 'A';
    string s = "Helllo world1235456@#$%^";
    cout << s << endl;
    cout << a << "\t" << b << "\t" << c << '\t' << f << endl;
    printf("%d", (2 + 3));
}
void input()
{
    int a, b;
    cout << "Input two number" << endl;
    cin >> a >> b;
    cout << "The sum of two numbers is = " << (a + b) << endl;
}
void dosomething(){
  cout<<"Hello world"<<endl;
}
