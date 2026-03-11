#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void taoDayBiMat(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100; 
    }
    printf("He thong da tao xong day so bi mat!\n");
}

int kiemTraDoanSo(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i; 
    }
    return -1; 
}

int main() {
    int a[30], n, x;

    do {
        printf("Nhap so luong phan tu n (2 < n <= 30): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 30);

    taoDayBiMat(a, n);

    printf("Moi ban doan mot so bat ky trong khoang [0, 100): ");
    scanf("%d", &x);

    int ketQua = kiemTraDoanSo(a, n, x);

    if (ketQua != -1) {
        printf("Chuc mung! So %d co ton tai trong day bi mat tai vi tri (index): %d\n", x, ketQua);
    } else {
        printf("Rat tiec! So %d khong co trong day bi mat.\n", x);
    }

    return 0;
}
