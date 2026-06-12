#include <stdio.h>

void nhapMaTran(int a[10][10], int *n) {
    do {
        printf("Nhap n (2 <= n <= 10): ");
        scanf("%d", n);
    } while (*n < 2 || *n > 10);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[10][10], int n) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void trenCheoChinh(int a[10][10], int n) {
    printf("Tren cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) printf("%d\t", a[i][j]);
            else printf("\t");
        }
        printf("\n");
    }
}

void duoiCheoPhu(int a[10][10], int n) {
    printf("Duoi cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n - 1) printf("%d\t", a[i][j]);
            else printf("\t");
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], n;
    nhapMaTran(a, &n);
    inMaTran(a, n);
    trenCheoChinh(a, n);
    duoiCheoPhu(a, n);
    return 0;
}
