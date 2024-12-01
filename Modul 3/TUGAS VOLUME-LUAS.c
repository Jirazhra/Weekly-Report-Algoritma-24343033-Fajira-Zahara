#include <stdio.h>

int main()
{
    float d = 12;
    const float phi = 3.14;
    float r = d * 0.5;
    float volume = 4.0 / 3.0 * phi * r * r * r;
    float luas = 4.0 * phi * r * r;

    // menampilkan output
    printf("volume: %.2f\n", volume);
    printf("luas: %.2f\n", luas);

    return 0;
}