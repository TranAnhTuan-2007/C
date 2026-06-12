#include <stdio.h>

void nhapMaTran(float a[10][10], int *m, int *n) {
    printf("Nhap m, n (1 < m, n <= 10): ");
    scanf("%d %d", m, n);
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void inMaTran(float a[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

void inChuyenVi(float a[10][10], int m, int n) {
    printf("Ma tran chuyen vi:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

void xoaHang(float a[10][10], int *m, int n, int k) {
    if (k >= 0 && k < *m) {
        for (int i = k; i < *m - 1; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = a[i + 1][j];
            }
        }
        (*m)--;
    }
}

int main() {
    float a[10][10];
    int m, n, k;
    nhapMaTran(a, &m, &n);
    printf("Ma tran vua nhap:\n");
    inMaTran(a, m, n);
    inChuyenVi(a, m, n);
    printf("Nhap hang can xoa i: ");
    scanf("%d", &k);
    xoaHang(a, &m, n, k);
    printf("Ma tran sau khi xoa:\n");
    inMaTran(a, m, n);
    return 0;
}
