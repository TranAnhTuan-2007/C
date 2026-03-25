#include <stdio.h>

void nhapMaTran(float a[][15], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void xuatMaTran(float a[][15], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

void tbcDuongCheoChinh(float a[][15], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    printf("TBC tren duong cheo chinh: %.2f\n", sum / n);
}

int kiemTraToanDuong(float a[][15], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] <= 0) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int n;
    float a[15][15];

    do {
        printf("Nhap ma tran vuong n (2 <= n <= 10): ");
        scanf("%d", &n);
    } while(n < 2 || n > 10);

    nhapMaTran(a, n);
    
    printf("\nMa tran vua nhap:\n");
    xuatMaTran(a, n);

    printf("\n");
    tbcDuongCheoChinh(a, n);

    if(kiemTraToanDuong(a, n) == 1) {
        printf("Ma tran toan so duong\n");
    } else {
        printf("Ma tran ko phai toan so duong\n");
    }

    return 0;
}
