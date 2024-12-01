#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angkaTebakan, tebakan, percobaan;
    char pilihan;

    // Inisialisasi generator angka acak
    srand(time(0));

    do {

        angkaTebakan = rand() % 20 + 1;
        percobaan = 0;

        printf("Selamat datang di permainan Tebak Nomor!\n");
        printf("Saya telah memilih nomor antara 1 dan 20. Ayo tebak!\n");

        do {
            printf("Masukkan nomor tebakan Anda: ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan < angkaTebakan) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > angkaTebakan) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat Anda benar!\n");
                printf("Anda telah menebak nomor yang benar yaitu %d dalam %d kali percobaan.\n", angkaTebakan, percobaan);
            }
        } while (tebakan != angkaTebakan);

        // Opsi untuk bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf("  %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terimakasih telah bermain!\n");
    return 0;
}