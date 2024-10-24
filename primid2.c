#include <stdio.h>

int main() {
    int tinggi, i, j;

    // Input tinggi piramida dari pengguna
    printf("Masukkan tinggi piramida: ");
    scanf("%d", &tinggi);

    // Loop untuk setiap baris
    for (i = 1; i <= tinggi; i++) {
        // Loop untuk spasi
        for (j = i; j < tinggi; j++) {
            printf(" ");
        }
        // Loop untuk mencetak hash (#)
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}
