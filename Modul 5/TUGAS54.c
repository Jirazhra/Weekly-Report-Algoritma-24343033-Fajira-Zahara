#include <stdio.h>

int main()
{
    float nilai_Kehadiran, nilai_tugas, nilai_UTS, nilai_UAS, nilai_akhir;
    char grade;

    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_Kehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_UTS);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_UAS);

    nilai_akhir = (nilai_Kehadiran * 0.20) + (nilai_tugas * 0.20) + (nilai_UTS * 0.25) + (nilai_UAS * 0.35);

    if (nilai_akhir >= 91)
    {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    }
    else if (nilai_akhir >= 86)
    {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    }
    else if (nilai_akhir >= 81)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilai_akhir >= 76)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilai_akhir >= 66)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilai_akhir >= 56)
    {
        grade = 'C';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    }
    else if (nilai_akhir >= 45)
    {
        grade = 'D';
        printf("Maaf, anda tidak lulus!\n");
    }
    else if (nilai_akhir >= 44)
    {
        grade = 'E';
        printf("Maaf, anda tidak lulus!\n");
    }

    printf("Nilai Akhir Anda: %.2f\n", nilai_akhir);
    printf("Grade Anda: %c\n", grade);

    return 0;
}