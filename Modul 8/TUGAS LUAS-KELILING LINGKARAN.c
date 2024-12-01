#include <stdio.h>
#define PI 3.14

// Fungsi menghitung luas lingkaran
float luas(float r) {
    return PI * r * r;
}

// Fungsi menghitung keliling lingkaran
float keliling(float r) {
    return 2 * PI * r;
}

int main() {
    float jarijari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jarijari);

    // Menghitung luas dan keliling
    float luasLingkaran = luas(jarijari);
    float kelilingLingkaran = keliling(jarijari);

    // Menampilkan hasil
    printf("a. Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", jarijari, luasLingkaran);
    printf("b. Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n", jarijari, kelilingLingkaran);

    return 0;
}