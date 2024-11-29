#include <stdio.h>

void main()
{

    int nilai_presensi, nilai_praktek, nilai_UTS, nilai_UAS;

    // pengisian nilai dengan operator
    nilai_presensi = 85;
    nilai_praktek = 65;
    nilai_UTS = 80;
    nilai_UAS = 75;

    // konversikan nilai
    printf("nilai_presensi = %d\n", nilai_presensi);
    printf("nilai_praktek = %d\n", nilai_praktek);
    printf("nilai_UTS = %d\n", nilai_UTS);
    printf("nilai_UAS = %d\n", nilai_UAS);

    // menghitung nilai akhir
    nilai_presensi = (0.10 * nilai_presensi);
    nilai_praktek = (0.20 * nilai_praktek);
    nilai_UTS = (0.30 * nilai_UTS);
    nilai_UAS = (0.40 * nilai_UAS);

    // tampilkan hasilnya
    printf("\n-------------------------\n");
    printf("nilai presensi: %i\n", nilai_presensi);
    printf("nilai praktek: %i\n", nilai_praktek);
    printf("nilai UTS: %i\n", nilai_UTS);
    printf("nilai UAS: %i\n", nilai_UAS);

    return;
}