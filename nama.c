#include <stdio.h>

int main() {
    char nama[50];  // Deklarasi variabel untuk menyimpan nama

    // Menanyakan nama pengguna
    printf("Siapakah namamu? ");
    scanf("%s", nama);  // Mengambil input nama pengguna

    // Menampilkan pesan sapaan
    printf("hello, %s\n", nama);

    return 0;
}
