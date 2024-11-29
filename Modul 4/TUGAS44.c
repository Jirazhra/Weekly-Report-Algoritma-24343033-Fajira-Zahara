#include <stdio.h>

void main()
{

    int jam_sewa;
    int jam_sewa = 3;
    float tarif_awal = 15000;
    float tarif_berikutnya = tarif_awal * 0.50;
    float tarif_akhir;

    // konversikan tarif
    tarif_akhir = tarif_awal + (jam_sewa - 1) * tarif_berikutnya;

    // tampilkan hasilnya
    printf("total yang harus dibayar: Rp %.2f\n", tarif_akhir);
    return;
}