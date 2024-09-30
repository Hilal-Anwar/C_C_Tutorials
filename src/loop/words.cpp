#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter a word: \n";
    string word;
    cin>>word;
    int l=word.length();
    string s1="";
    for (int  i = l-1; i >=0; i--)
    {
        char c=word.at(i);
        s1=s1+c;
    }
    cout<<s1;
    
}