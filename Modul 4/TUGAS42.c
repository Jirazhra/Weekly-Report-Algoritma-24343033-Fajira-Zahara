#include <stdio.h>

void main()
{
    char nama_pembeli[100], nama_barang[100];
    int harga_barang_satuan, jumlah_barang_yang_dibeli, harga_total;

    // input nama pembeli
    printf("masukkan nama_pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin);

    // input nama barang
    printf("masukkan nama_barang: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);

    // input harga barang
    printf("masukkan harga barang satuan: ");
    scanf("%i", &harga_barang_satuan);

    printf("masukkan jumlah barang yang dibeli: ");
    scanf("%i", &jumlah_barang_yang_dibeli);

    // tampilkan hasilnya
    printf("\n-------------------------\n");
    printf("nama pembeli: %s", nama_pembeli);
    printf("nama barang: %s", nama_barang);
    printf("harga barang satuan: %d\n", harga_barang_satuan);
    printf("jumlah barang yang dibeli: %d\n", jumlah_barang_yang_dibeli);
    printf("harga total: %d\n", harga_total, harga_total = harga_barang_satuan * jumlah_barang_yang_dibeli);

    return;
}