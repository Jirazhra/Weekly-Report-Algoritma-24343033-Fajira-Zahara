#include <stdio.h>

int main()
{

    int jam, menit, detik;

    // masukkan input
    printf("masukkan jumlah detik: ");
    scanf("%i", &detik);

    // konversikan detik
    jam = detik / 3600;
    menit = (detik / 60) % 60;
    detik = detik % 60;

    // tampilkan hasilnya
    printf("%ijam, %imenit, %idetik\n", jam, menit, detik);
    return 0;
}