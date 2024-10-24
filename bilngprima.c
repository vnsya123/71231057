// bilangna prima //
#include <stdio.h>

int main() {
    int n, i, adalahPrima = 1; 
    
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n < 2) {
        adalahPrima = 0;
    } else {
       
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                adalahPrima = 0; 
                break;
            }
        }
    }


    if (adalahPrima == 1) {
        printf("%d adalah bilangan prima.\n", n);
    } else {
        printf("%d bukan bilangan prima.\n", n);
    }

    return 0;
}
