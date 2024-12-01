#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 100

typedef struct {
    char npm[50];
    char nama[100];
    char tanggalLahir[50];
    char alamat[100];
    char hp[50];
} Mahasiswa;

void inputMahasiswa(Mahasiswa *mhs) {
    printf("Masukkan NPM: ");
    scanf("%s", mhs->npm);
    
    printf("Masukkan Nama: ");
    getchar();
    fgets(mhs->nama, sizeof(mhs->nama), stdin);
    mhs->nama[strcspn(mhs->nama, "\n")] = 0; 
    
    printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
    scanf("%s", mhs->tanggalLahir);
    
    printf("Masukkan Alamat: ");
    getchar(); 
    fgets(mhs->alamat, sizeof(mhs->alamat), stdin);
    mhs->alamat[strcspn(mhs->alamat, "\n")] = 0;
    
    printf("Masukkan No HP: ");
    scanf("%s", mhs->hp);
}

void tampilkanMahasiswa(Mahasiswa mhs) {
    printf("%-6s %-6s %-6s %-6s %-6s\n", mhs.npm, mhs.nama, mhs.tanggalLahir, mhs.alamat, mhs.hp);
}

int main() {
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int count = 0;
    char pilihan;

    do {
        if (count >= MAX_MAHASISWA) {
            printf("Data mahasiswa sudah penuh!\n");
            break;
        }
        inputMahasiswa(&mahasiswa[count]);
        count++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan); 

    } while (pilihan == 'y' || pilihan == 'Y');

    // Menampilkan semua data mahasiswa yang telah dimasukkan
    for (int i = 0; i < count; i++) {
        tampilkanMahasiswa(mahasiswa[i]);
    }

    return 0;
}