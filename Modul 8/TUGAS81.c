#include <stdio.h>
#include <string.h>

int kali(int a, int b, char *hasil) {
    if (b == 0) {
        return 0;
    }

    if (strlen(hasil) == 0) {
        sprintf(hasil, "%d", a);
    } else {
        sprintf(hasil + strlen(hasil), " + %d", a);
    }

    return a + kali(a, b - 1, hasil);
}

int main() {
    int angka1, angka2;
    char hasil[100] = ""; 

    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan bilangan bulat positif kedua: ");
    scanf("%d", &angka2);

    // Menghitung hasil perkalian
    int total = kali(angka1, angka2, hasil);

    // Menampilkan hasil perkalian
    printf("%d x %d = %s\n", angka1, angka2, hasil);
    printf("Hasil: %d\n", total);

    return 0;
}
