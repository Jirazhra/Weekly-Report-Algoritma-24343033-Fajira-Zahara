#include <stdio.h>

int main()
{
    float angka_pertama, angka_kedua, hasil;
    int pilihan;

    // main menu
    printf("===kalkulator sederhana===\n");
    printf("1.penjumlahan\n");
    printf("2.pengurangan\n");
    printf("3.perkalian\n");
    printf("4.pembagian\n");
    printf("5.hasil bagi\n");
    printf("pilih operaasi (1-5): ");
    scanf("%d", &pilihan);

    // meminta input angka
    printf("masukkan angka pertama: ");
    scanf("%f", angka_pertama);
    printf("masukkan angka kedua: ");
    scanf("%f", angka_kedua);

    switch (pilihan)
    {
    case 1: // penjumlahan
        hasil = angka_pertama + angka_kedua;
        printf("Hasil Penjumlahan: %.2f\n", hasil);
        break;
    case 2: // Pengurangan
        hasil = angka_pertama - angka_kedua;
        printf("Hasil Pengurangan: %.2f\n", hasil);
        break;
    case 3: // Perkalian
        hasil = angka_pertama * angka_kedua;
        printf("Hasil Perkalian: %.2f\n", hasil);
        break;
    case 4: // Pembagian
        if (angka_kedua != 0)
        {
            hasil = angka_pertama / angka_kedua;
            printf("Hasil Pembagian: %.2f\n", hasil);
        }
        else
        {
            printf("Error: Pembagian dengan nol!\n");
        }
        break;
    case 5: // Hasil Bagi (Pembagian Bulat)
        if (angka_kedua != 0)
        {
            int hasil_bagi = (int)angka_pertama / (int)angka_kedua; // Pembagian bulat
            printf("Hasil Bagi: %d\n", hasil_bagi);
        }
        else
        {
            printf("Error: Pembagian dengan nol!\n");
        }
        break;
    default:
        printf("pilihan tidak valid!\n");
        break;
    }

    return 0;
}