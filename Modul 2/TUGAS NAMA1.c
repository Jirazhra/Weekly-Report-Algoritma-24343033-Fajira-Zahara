/* Membuat input nama */
#include <stdio.h>
#include <string.h>
int main()
{
    char fajirazahara[31];
    printf("Hello, siapa nama lengkap kamu? \n");
    scanf("%[^\n]s", fajirazahara);
    printf("Selamat datang %s dalam permograman c!\n", fajirazahara);
    return 0;
}