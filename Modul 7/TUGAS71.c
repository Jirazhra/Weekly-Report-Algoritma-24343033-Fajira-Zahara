#include <stdio.h>

int main() {
    float nilai[20]; 
    float total; 
    float rataRata;
    int i;

    printf("--- Program Menghitung Rata-rata Nilai Mahasiswa ---\n");

    // Masukkan nilai untuk 20 mahasiswa
    for (i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    }

    // Menghitung rata-rata
    rataRata = total / 20;

    // Menampilkan hasil
    printf("\nTotal nilai: %.2f\n", total);
    printf("Rata-rata nilai: %.2f\n", rataRata);

    return 0;
}
