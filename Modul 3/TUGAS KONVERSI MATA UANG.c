#include <stdio.h>

int main()
{
    float mata_uang_rupiah;
    const float kurs = 14250;
    float mata_uang_dollar;

    // input jumlah rupiah
    printf("masukkan jumlah mata uang rupiah: ");
    scanf("%f", &mata_uang_rupiah);

    // menghitung konversi
    mata_uang_dollar = mata_uang_rupiah / kurs;

    // menampilkan hasil konversi
    printf("mata uang dollar: %.2f", mata_uang_dollar);

    return 0;
}