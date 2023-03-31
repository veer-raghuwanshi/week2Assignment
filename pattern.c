#include <stdio.h>
int main()
{
    int i, j, x;
    x = 9;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (i % 2 != 0)
            {
                if (j >= 1 && j <= 9 - i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j >= 1 && j <= 9 - i)
                {
                    printf("%d", (x - j));
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
        x--;
    }
}
