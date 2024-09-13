#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    int s, p, diff, q, r;
    s = a + b;        
    diff = a - b;
    p = a * b;
    q = a / b;
    r = a % b;
    cout <<"Sum =" << s << endl;
    cout <<"Difference = "<< diff << endl;
    cout <<"Product = "<< p << endl;
    cout << q << endl;
    cout << r << endl;

    return 0;
}