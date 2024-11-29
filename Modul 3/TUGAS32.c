#include <stdio.h>

int main()
{
    float C, K, F, R;

    // input dalam celcius
    printf("suhu dalam celcius: ");
    scanf("%f", &C);

    // input hasil konversi dalam kelvin, farenheit, reamur
    K = C + 273.15;
    F = (C * 1.8) + 32;
    R = C * 0.8;

    // Output yang dihasilkan
    printf("Suhu dalam Kelvin: %.2f\n", K);
    printf("Suhu dalam Fahrenheit: %.2f\n", F);
    printf("Suhu dalam Reamur: %.2f\n", R);

    return 0;
}