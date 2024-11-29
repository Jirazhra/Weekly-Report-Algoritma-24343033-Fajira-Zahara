#include <stdio.h>

int main()
{
    printf("Deret angka bilangan genap: ");
    for (int i = 0; i <= 50; i += 2)
    {
        printf("%d ", i);
    }
    printf("Deret angka bilangan ganjil: ");
    for (int i = 1; i < 50; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}
