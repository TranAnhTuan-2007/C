#include <stdio.h>

void nhapMaTran(int a[10][10], int *n) {
    do {
        printf("Nhap n (3 <= n <= 10): ");
        scanf("%d", n);
    } while (*n < 3 || *n > 10);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int ktDonVi(int a[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) return 0;
            if (i != j && a[i][j] != 0) return 0;
        }
    }
    return 1;
}

int ktMaPhuong(int a[10][10], int n) {
    int sum = 0, sumCC = 0, sumCP = 0;
    for (int j = 0; j < n; j++) sum += a[0][j];
    for (int i = 0; i < n; i++) {
        int sumH = 0, sumC = 0;
        for (int j = 0; j < n; j++) {
            sumH += a[i][j];
            sumC += a[j][i];
        }
        if (sumH != sum || sumC != sum) return 0;
        sumCC += a[i][i];
        sumCP += a[i][n - 1 - i];
    }
    if (sumCC != sum || sumCP != sum) return 0;
    return 1;
}

int ktDoiXung(int a[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) return 0;
        }
    }
    return 1;
}

int main() {
    int a[10][10], n;
    nhapMaTran(a, &n);
    inMaTran(a, n);
    if (ktDonVi(a, n)) printf("La ma tran don vi\n");
    else printf("Khong la ma tran don vi\n");
    if (ktMaPhuong(a, n)) printf("La ma phuong\n");
    else printf("Khong la ma phuong\n");
    if (ktDoiXung(a, n)) printf("La ma tran doi xung\n");
    else printf("Khong la ma tran doi xung\n");
    return 0;
}
