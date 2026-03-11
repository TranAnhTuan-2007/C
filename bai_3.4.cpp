#include <stdio.h>
#include <math.h>

void nhapDS(int a[], int *n) {
    do {
        printf("Nhap n (2 <= n <= 30): ");
        scanf("%d", n);
    } while (*n < 2 || *n > 30);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void inDS(int a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    return min;
}

int demChan(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) dem++;
    return dem;
}

int kiemTraTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i+1]) return 0;
    return 1;
}

void inSoChinhPhuong(int a[], int n) {
    printf("Cac so chinh phuong trong day: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) continue;
        int can = sqrt(a[i]);
        if (can * can == a[i]) printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[30], n;
    nhapDS(a, &n);
    inDS(a, n);
    
    printf("Phan tu nho nhat: %d\n", timMin(a, n));
    printf("So luong phan tu chan: %d\n", demChan(a, n));
    
    if (kiemTraTangDan(a, n)) printf("Day so dang tang dan.\n");
    else printf("Day so khong tang dan.\n");
    
    inSoChinhPhuong(a, n);
    return 0;
}
