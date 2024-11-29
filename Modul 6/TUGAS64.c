#include <stdio.h>
#include <string.h>

#define SALDO_MINIMAL 50000.0 // Saldo minimal yang harus disisakan
#define NOMOR_REKENING "0123" // Nomor rekening yang valid

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    printf("\n=== ATM ===\n");
    printf("1. Cek Saldo\n");
    printf("2. Setoran\n");
    printf("3. Penarikan Tunai\n");
    printf("4. Keluar\n");
    printf("Pilih menu: ");
}

int main() {
    char inputRekening[10];
    float saldo = 175000.0; // Saldo awal
    float jumlah;
    char namaAkun[] = "Hattori";
    int pilihan;

    printf("Selamat datang di ATM!\n");

    // Verifikasi nomor rekening
    while (1) {
        printf("Masukkan nomor rekening Anda: ");
        scanf("%s", inputRekening);

        if (strcmp(inputRekening, NOMOR_REKENING) == 0) {
            printf("Nomor rekening valid. Selamat datang, %s!\n", namaAkun);
            break; // Keluar dari loop jika nomor rekening benar
        } else {
            printf("Nomor rekening salah! Silakan coba lagi.\n");
        }
    }

    while (1) {
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Cek saldo
                printf("Saldo Anda saat ini adalah: Rp %.2f\n", saldo);
                break;

            case 2:
                // Setoran
                printf("Masukkan jumlah setoran: Rp ");
                scanf("%f", &jumlah);
                if (jumlah > 0) {
                    saldo += jumlah;
                    printf("Setoran sebesar Rp %.2f berhasil.\n", jumlah, saldo);
                } else {
                    printf("Jumlah setoran tidak valid.\n");
                }
                break;

            case 3:
                // Penarikan tunai
                printf("Masukkan jumlah penarikan: Rp ");
                scanf("%f", &jumlah);
                if (jumlah > 0) {
                    if (saldo - jumlah >= SALDO_MINIMAL) {
                        saldo -= jumlah;
                        printf("Penarikan sebesar Rp %.2f berhasil.\n", jumlah, saldo);
                    } else {
                        printf("Penarikan gagal! Saldo harus disisakan minimal Rp %.2f.\n", SALDO_MINIMAL);
                    }
                } else {
                    printf("Jumlah penarikan tidak valid.\n");
                }
                break;

            case 4:
                // Keluar
                printf("Terima kasih telah menggunakan layanan ATM. Sampai jumpa!\n");
                return 0;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
