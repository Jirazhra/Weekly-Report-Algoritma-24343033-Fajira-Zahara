#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    for (i = 1; i < 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
