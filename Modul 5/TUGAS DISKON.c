#include <stdio.h>

int main()
{
    char nama_pembeli[70];
    float total_pembelian;
    float diskon = 0.0;
    float total_setelah_diskon;
    float cashback = 0.0;

    // Meminta input dari pengguna
    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin);

    printf("Masukkan total pembelian: Rp ");
    scanf("%f", &total_pembelian);

    // Menghitung diskon dan cashback sesuai ketentuan
    if (total_pembelian <= 75000)
    {
        diskon = total_pembelian * 0.05; // 5% diskon
    }
    else if (total_pembelian > 75000 && total_pembelian <= 125000)
    {
        diskon = total_pembelian * 0.15; // 15% diskon
    }
    else
    {
        diskon = total_pembelian * 0.25; // 25% diskon
        cashback = 5000;                 // Cashback Rp 5.000
    }

    // Menghitung total setelah diskon dan cashback
    total_setelah_diskon = total_pembelian - diskon + cashback;

    // Menampilkan hasil
    printf("\n=== Struk Pembelian TOSERBA ===\n");
    printf("Nama Pembeli: %s", nama_pembeli);
    printf("Total Pembelian: Rp %.2f\n", total_pembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Cashback: Rp %.2f\n", cashback);
    printf("Total Setelah Diskon dan Cashback: Rp %.2f\n", total_setelah_diskon);

    return 0;
}