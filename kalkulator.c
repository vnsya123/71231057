// SOAL  KALKULATOR //
#include <stdio.h>

int main() {
    char operation;
    float bil1, bil2, hasil;

    printf("===========================\n");
    printf("     KALKULATOR SEDERHANA  \n");
    printf("===========================\n");

    // Input operator
    printf("Pilih Operator (+, -, *, /): ");
    scanf(" %c", &operation);  // Spasi sebelum %c untuk mengabaikan newline

    // Input bilangan
    printf("Bilangan Pertama: ");
    scanf("%f", &bil1);
    printf("Bilangan Kedua: ");
    scanf("%f", &bil2);

    // Blok switch untuk menentukan operasi
    switch (operation) {
        case '+':
            hasil = bil1 + bil2;
            printf("Hasilnya: %.2f\n", hasil);
            break;
        case '-':
            hasil = bil1 - bil2;
            printf("Hasilnya: %.2f\n", hasil);
            break;
        case '*':
            hasil = bil1 * bil2;
            printf("Hasilnya: %.2f\n", hasil);
            break;
        case '/':
            if (bil2 != 0) {
                hasil = bil1 / bil2;
                printf("Hasilnya: %.2f\n", hasil);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Operator tidak valid.\n");
            break;
    }

    return 0;
}
