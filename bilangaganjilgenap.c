// bilanga gabjil genap //
#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan dari pengguna
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    // Cek apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan genap.\n", bilangan);
    } else {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    }

    return 0;
}
