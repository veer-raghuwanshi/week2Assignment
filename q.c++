#include <iostream>
using namespace std;

int main()
{
    int i, j, x;
    x = 9;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i % 2 != 0)
            {
                if (j >= 1 && j <= 9 - i)
                {
                    cout << j;
                }
                else
                {
                    cout << " ";
                }
            } 
            else
            {
                if (j >= 1 && j <= 9 - i)
                {
                    cout << (x - j);
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
        x--;
    }
    return 0;
}
