#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a word \n";
    string word;
    cin >> word;
    int k = 0;
    int l = word.length();
    for (int i = 0; i < l; i++)
    {
        char c = word.at(i);
        if (c == 'a' || c == 'A' || c == 'e' 
        || c == 'E' || c == 'i' || c == 'I' 
        || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            k++;
        }
    }
    
     cout << "Number of vowels in your word is = " 
        << k << endl;

    return 0;
}
