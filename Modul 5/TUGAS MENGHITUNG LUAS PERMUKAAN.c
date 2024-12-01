#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    int pilihan;
    float luas;

    // Menu utama
    printf("=== Hitung Luas Permukaan ===\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Pilih bangun ruang (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1: // Luas Permukaan Bola
    {
        float jari_jari;
        printf("Masukkan jari-jari bola: ");
        scanf("%f", &jari_jari);
        luas = 4 * PI * pow(jari_jari, 2);
        printf("Luas Permukaan Bola: %.2f\n", luas);
        break;
    }
    case 2: // Luas Permukaan Kubus
    {
        float sisi;
        printf("Masukkan panjang sisi kubus: ");
        scanf("%f", &sisi);
        luas = 6 * pow(sisi, 2);
        printf("Luas Permukaan Kubus: %.2f\n", luas);
        break;
    }
    case 3: // Luas Permukaan Balok
    {
        float panjang, lebar, tinggi;
        printf("Masukkan panjang balok: ");
        scanf("%f", &panjang);
        printf("Masukkan lebar balok: ");
        scanf("%f", &lebar);
        printf("Masukkan tinggi balok: ");
        scanf("%f", &tinggi);
        luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
        printf("Luas Permukaan Balok: %.2f\n", luas);
        break;
    }
    case 4: // Luas Permukaan Tabung
    {
        float jari_jari, tinggi;
        printf("Masukkan jari-jari alas tabung: ");
        scanf("%f", &jari_jari);
        printf("Masukkan tinggi tabung: ");
        scanf("%f", &tinggi);
        luas = 2 * PI * jari_jari * (jari_jari + tinggi);
        printf("Luas Permukaan Tabung: %.2f\n", luas);
        break;
    }
    default:
        printf("Pilihan tidak valid!\n");
        break;
    }

    return 0;
}