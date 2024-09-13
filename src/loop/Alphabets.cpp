#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int r = 100;
    for (int y = 1; y <= 2 * r; y++)
    {
        for (int x = 1; x <= 2 * r; x++)
        {
            int k = x * x + y * y + r * r - 2 * r * (x + y);
            if (k <= 0)
                cout << "***";
            else
                cout << "   ";
        }
        cout << "\n";
    }

    return 0;
}