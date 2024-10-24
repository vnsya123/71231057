#include <stdio.h>

// Fungsi untuk meminta input bilangan bulat positif
int inputBilanganPositif() {
    int bilangan;

    // Loop hingga mendapatkan bilangan bulat positif
    do {
        printf("Masukkan bilangan bulat positif: ");
        scanf("%d", &bilangan);
    } while (bilangan <= 0); // Pastikan bilangan positif

    return bilangan;
}

int main() {
    int bilangan;

    // Meminta input dari pengguna
    bilangan = inputBilanganPositif();

    // Cek kelipatan 11
    if (bilangan % 11 == 0) {
        printf("SPESIAL\n");
    } else {
        printf("BIASA\n");
    }

    return 0;
}
