#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nama[20];
    int mulai_hari;
    int mulai_bulan;
    int akhir_hari;
    int akhir_bulan;
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

    int tgl, bln, thn;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    // Menentukan zodiak berdasarkan tanggal lahir
    for (int i = 0; i < 12; i++) {
        if ((bln == zodiaks[i].mulai_bulan && tgl >= zodiaks[i].mulai_hari) ||
            (bln == zodiaks[i].akhir_bulan && tgl <= zodiaks[i].akhir_hari)) {
            printf("Zodiak Anda adalah : %s\n", zodiaks[i].nama);
            break;
        }
    }

    return 0;
}