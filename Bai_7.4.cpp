#include <stdio.h>

void nhap(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void in(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void tong_cheophu(int a[][10], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i][n - 1 - i];
    }
    printf("tong cheo phu: %d\n", tong);
}

int la_nt(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void cot_nhieu_nt(int a[][10], int n) {
    int max_nt = -1, cot = -1;
    for (int j = 0; j < n; j++) {
        int dem = 0;
        for (int i = 0; i < n; i++) {
            if (la_nt(a[i][j])) dem++;
        }
        if (dem > max_nt) {
            max_nt = dem;
            cot = j;
        }
    }
    if (max_nt > 0) printf("cot %d co nhieu so nt nhat\n", cot);
    else printf("khong co so nt\n");
}

int main() {
    int n, a[10][10];
    do {
        printf("nhap n (2 <= n <= 10): ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);
    
    nhap(a, n);
    printf("ma tran:\n");
    in(a, n);
    tong_cheophu(a, n);
    cot_nhieu_nt(a, n);
    return 0;
}
