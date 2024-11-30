#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int panjang, i;

    // Meminta pengguna untuk memasukkan kalimat
    printf("Kalimat Masukkan: ");
    fgets(kalimat, sizeof(kalimat), stdin); 

    panjang = strlen(kalimat);
    if (kalimat[panjang - 1] == '\n') {
        kalimat[panjang - 1] = '\0';
    }

    // Menampilkan kalimat terbalik
    printf("Kebalikannya: ");
    for (i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
    return 0;
}