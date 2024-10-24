// membuat piramid //
 

 #include <stdio.h>

int main() {
    int i, j, k, tinggi;

    // Input tinggi piramida dari pengguna
    printf("Masukkan tinggi piramida: ");
    scanf("%d", &tinggi);

    // Loop untuk setiap baris
    for (i = 1; i <= tinggi; i++) {
        // Loop untuk spasi
        for (j = i; j < tinggi; j++) {
            printf(" ");
        }
        // Loop untuk mencetak bintang
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}
