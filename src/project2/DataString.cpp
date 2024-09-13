#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string name, phone_no, email;
    cout << "Enter your name,email,phone_no" << endl;
    cin >> name >> email >> phone_no;
    cout << "Hello " << name << endl;
    cout << "email: " << email << endl;
    cout << "phone no" << phone_no << endl;
    return 0;
}