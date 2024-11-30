#include <stdio.h>
#include <string.h>

int main() {
    // Pertanyaan A
    int Lesley = 57082; 
    int Layla;        
    int Balmond;  

    Layla = Lesley; 
    Balmond = Layla + 1;

    // Menampilkan hasil untuk pertanyaan A
    printf("Pertanyaan A:\n");
    printf("a. Nilai Layla: %d\n", Layla);
    printf("b. Nilai Balmond: %d\n", Balmond);

    // Pertanyaan B
    int *ptrLayla;
    ptrLayla = &Lesley; 
    Balmond = *ptrLayla + 1; 

    // Menampilkan hasil untuk pertanyaan B
    printf("Pertanyaan B:\n");
    printf("a. Nilai Layla: %d\n", Layla); 
    printf("b. Nilai Balmond: %d\n", Balmond);

    return 0;
}