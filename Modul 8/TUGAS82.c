#include <stdio.h>

// Fungsi untuk penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float bagi(float a, float b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0; 
    }
    return a / b;
}

int main() {
    float angka1, angka2, hasil;
    int pilihan;
    char ulang;

    do {
        // Menampilkan menu operasi
        printf("Pilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("Masukkan pilihan (1/2/3/4): ");
        scanf("%d", &pilihan);

        // Meminta input dari pengguna
        printf("Masukkan bilangan pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &angka2);

        // Melakukan operasi berdasarkan pilihan pengguna
        switch (pilihan) {
            case 1:
                hasil = tambah(angka1, angka2);
                printf("Hasil: %.2f + %.2f = %.2f\n", angka1, angka2, hasil);
                break;
            case 2:
                hasil = kurang(angka1, angka2);
                printf("Hasil: %.2f - %.2f = %.2f\n", angka1, angka2, hasil);
                break;
            case 3:
                hasil = kali(angka1, angka2);
                printf("Hasil: %.2f * %.2f = %.2f\n", angka1, angka2, hasil);
                break;
            case 4:
                hasil = bagi(angka1, angka2);
                if (angka2 != 0) {
                    printf("Hasil: %.2f / %.2f = %.2f\n", angka1, angka2, hasil);
                }
                break;
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }

        // Menanyakan apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &ulang); // Memastikan spasi di depan %c untuk menangani newline sebelumnya
    } while (ulang == 'y' || ulang == 'Y');

    printf("Terima kasih telah bermain!\n");
    return 0;
}
