#include <stdio.h>

int main()
{
    char nama[50];
    int nilai;
    int kehadiran;

    printf("=======================================\n");
    printf("    SELEKSI EKSTRAKULIKULER IT CLUB    \n");
    printf("=======================================\n");

    printf("\nMasukkan nama siswa       : ");
    scanf(" %49[^\n]", nama);

    printf("Masukkan nilai tes (0-100): ");
    scanf("%d", &nilai);

    printf("Masukkan kehadiran (0-100): ");
    scanf("%d", &kehadiran);

    if (nilai < 0 || nilai > 100 ||
        kehadiran)
}