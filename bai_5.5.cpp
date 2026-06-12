#include <stdio.h>

void nhapMaTran(int a[10][10], int *m, int *n) {
    do {
        printf("Nhap m, n (2 < m, n <= 10): ");
        scanf("%d %d", m, n);
    } while (*m <= 2 || *n <= 2 || *m > 10 || *n > 10);
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[10][10], int m, int n) {
    printf("Ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int tongBien(int a[10][10], int m, int n) {
    int s = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                s += a[i][j];
            }
        }
    }
    return s;
}

void maxCotP(int a[10][10], int m, int p) {
    int max = a[0][p];
    for (int i = 1; i < m; i++) {
        if (a[i][p] > max) {
            max = a[i][p];
        }
    }
    printf("Phan tu lon nhat cot %d la: %d\n", p, max);
}

void hoanDoiCot(int a[10][10], int m, int j1, int j2) {
    for (int i = 0; i < m; i++) {
        int temp = a[i][j1];
        a[i][j1] = a[i][j2];
        a[i][j2] = temp;
    }
}

int main() {
    int a[10][10], m, n, p, j1, j2;
    nhapMaTran(a, &m, &n);
    inMaTran(a, m, n);
    printf("Tong bien: %d\n", tongBien(a, m, n));
    printf("Nhap cot p: ");
    scanf("%d", &p);
    maxCotP(a, m, p);
    printf("Nhap cot j1, j2: ");
    scanf("%d %d", &j1, &j2);
    hoanDoiCot(a, m, j1, j2);
    inMaTran(a, m, n);
    return 0;
}
