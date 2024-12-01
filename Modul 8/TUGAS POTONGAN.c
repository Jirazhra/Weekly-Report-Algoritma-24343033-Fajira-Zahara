#include <stdio.h>

// Fungsi untuk menghitung besar potongan
float potongan(float totalPembelian) {
    float diskon = 0;

    if (totalPembelian < 1000000) {
        diskon = 0; 
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        diskon = totalPembelian * 0.20; 
    } else if (totalPembelian >= 3000000) {
        diskon = totalPembelian * 0.35; 
    }
    return diskon;
}

int main() {
    float totalPembelian;

    printf("Masukkan total pembelian (Rp): ");
    scanf("%f", &totalPembelian);

    // Menghitung potongan
    float diskon = potongan(totalPembelian);
    float hargaSetelahDiskon = totalPembelian - diskon;

    // Menampilkan hasil
    printf("Besar diskon: %.2f\n", diskon);
    printf("Besar yang harus dibayarkan: %.2f\n", hargaSetelahDiskon);

    return 0;
}