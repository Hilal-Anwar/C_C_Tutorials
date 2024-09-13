/*
Faisal
F
a
i
s
a
l
*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    string word;
    cout << "Enter a word" << endl;
    cin >> word;
    int l = word.length();
    cout<<l<<endl;
    for (int i = 0; i < l; i++)
    {
        char c = word.at(i);
        cout << c << endl;
    }

    return 0;
}