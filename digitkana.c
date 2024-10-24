#include <stdio.h>

// Fungsi untuk meminta input tiga bilangan
void inputTigaBilangan(int *a, int *b, int *c) {
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", a, b, c);
}

// Fungsi untuk memeriksa digit paling kanan
void cekDigitKanan(int a, int b, int c) {
    int digitA = a % 10; // Digit paling kanan dari a
    int digitB = b % 10; // Digit paling kanan dari b
    int digitC = c % 10; // Digit paling kanan dari c

    // Memeriksa apakah dua atau lebih digit paling kanan sama
    if (digitA == digitB || digitA == digitC || digitB == digitC) {
        printf("SAMA\n");
    } else {
        printf("TIDAK SAMA\n");
    }
}

int main() {
    int a, b, c;

    // Meminta input dari pengguna
    inputTigaBilangan(&a, &b, &c);
    
    // Memeriksa digit paling kanan
    cekDigitKanan(a, b, c);

    return 0;
}
