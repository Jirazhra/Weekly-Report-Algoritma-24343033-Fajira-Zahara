#include <stdio.h>

#define MAX_MAHASISWA 100 // Maksimal jumlah mahasiswa

// Struktur untuk menyimpan biodata mahasiswa
struct Mahasiswa {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char program_studi[50];
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA]; // Array untuk menyimpan data mahasiswa
    int jumlah_mahasiswa, i;

    // Meminta pengguna untuk memasukkan jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);
    getchar(); // Membersihkan newline setelah scanf

    // Menginputkan biodata mahasiswa
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i + 1);
        
        printf("Nama: ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        // Menghapus newline yang ditambahkan oleh fgets
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = 0;

        printf("NIM: ");
        fgets(mahasiswa[i].nim, sizeof(mahasiswa[i].nim), stdin);
        mahasiswa[i].nim[strcspn(mahasiswa[i].nim, "\n")] = 0;

        printf("Jurusan: ");
        fgets(mahasiswa[i].jurusan, sizeof(mahasiswa[i].jurusan), stdin);
        mahasiswa[i].jurusan[strcspn(mahasiswa[i].jurusan, "\n")] = 0;

        printf("Program Studi: ");
        fgets(mahasiswa[i].program_studi, sizeof(mahasiswa[i].program_studi), stdin);
        mahasiswa[i].program_studi[strcspn(mahasiswa[i].program_studi, "\n")] = 0;

        printf("\n");
    }

    // Menampilkan data mahasiswa yang telah dimasukkan
    printf("Data Mahasiswa:\n");
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: %s\n", mahasiswa[i].nama);
        printf("NIM: %s\n", mahasiswa[i].nim);
        printf("Jurusan: %s\n", mahasiswa[i].jurusan);
        printf("Program Studi: %s\n", mahasiswa[i].program_studi);
        printf("\n");
    }

    return 0;
}