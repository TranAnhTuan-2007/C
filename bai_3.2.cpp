#include <stdio.h>
#define MAX 50

// Hàm nh?p dãy s? g?m n s? nguyên t? bàn phím
void nhapDS(int a[], int *n) {
    do {
        printf("Nhap so phan tu (2 < n < 50): ");
        scanf("%d", n);
    } while (*n <= 2 || *n >= 50);

    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm in dãy s? ra màn hình
void inDS(int a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

// Hàm in dãy s? ra màn hình theo th? t? d?o ngu?c
void inDaoDS(int a[], int n) {
    printf("Day so dao nguoc: ");
    for (int i = n - 1; i >= 0; i--) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[MAX], n;
    nhapDS(a, &n);
    inDS(a, n);
    inDaoDS(a, n);
    return 0;
}
