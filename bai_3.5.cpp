#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sinhDS(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100; 
    }
}

void inDS(int a[], int n){
int i;
for(i=0; i<n;i++)
    printf("%.2f",a[i]);
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
        printf("Nhap n (2 < n <= 30): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 30);

    sinhDS(a, n);
    printf("Doan so bat ky [0, 100): ");
    scanf("%d", &x);
    int ketQua = kiemTraDoanSo(a, n, x);
    if (ketQua != -1) {
        printf("so co trong day: %d\n", x, ketQua);
    } else {
        printf("so khong co trong day.\n", x);
    }

    return 0;
}


