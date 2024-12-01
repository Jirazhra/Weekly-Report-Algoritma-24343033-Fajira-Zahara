#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nama[20];
    int hariPertama;
    int bulanPertama;
    int hariTerakhir;
    int bulanTerakhir;
} Zodiak;

int main() {
    // Daftar zodiak
    Zodiak zodiaks[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int tanggal, bulan, tahun;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    // Menentukan zodiak berdasarkan tanggal lahir
    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiaks[i].bulanPertama && tanggal >= zodiaks[i].hariPertama) ||
            (bulan == zodiaks[i].bulanTerakhir && tanggal <= zodiaks[i].hariTerakhir)) {
            printf("Zodiak Anda adalah : %s\n", zodiaks[i].nama);
            break;
        }
    }

    return 0;
}