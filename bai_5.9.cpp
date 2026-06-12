#include <stdio.h>

void nhapMaTran(int a[10][10], int hang, int cot, char ten) {
    printf("Nhap ma tran %c:\n", ten);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[10][10], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void nhanMaTran(int a[10][10], int b[10][10], int c[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[10][10], b[10][10], c[10][10];
    int n, m;
    do {
        printf("Nhap n, m (2 <= n, m <= 10): ");
        scanf("%d %d", &n, &m);
    } while (n < 2 || m < 2 || n > 10 || m > 10);
    nhapMaTran(a, n, n, 'A');
    nhapMaTran(b, n, m, 'B');
    printf("Ma tran A:\n");
    inMaTran(a, n, n);
    printf("Ma tran B:\n");
    inMaTran(b, n, m);
    nhanMaTran(a, b, c, n, m);
    printf("Ma tran C = A * B:\n");
    inMaTran(c, n, m);
    return 0;
}
