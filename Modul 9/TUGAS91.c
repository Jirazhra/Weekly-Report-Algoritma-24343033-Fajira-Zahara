#include <stdio.h>
#include <string.h>

int main() {
    char nama[] = "BORLAND";
    char *ptr = nama;

    printf("Output:\n");
    for (int i = 1; i <= strlen(nama); i++) {
        printf("%.*s\n", i, ptr);
    }

    return 0;
}