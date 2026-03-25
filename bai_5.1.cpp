#include <stdio.h>

void nhap(int a[][50], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuat(int a[][50], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]); 
        }
        printf("\n"); 
    }
}

int main() {
    int m, n, a[50][50]; 
    
    do {
        printf("Nhap so hang m, so cot n (1 < m, n <= 10): ");
        scanf("%d%d", &m, &n);
    } while(m <= 1 || m > 10 || n <= 1 || n > 10);
    
    nhap(a, m, n);
    printf("Ma tran vua nhap:\n");
    xuat(a, m, n);
    
    int sum = 0, max = a[0][0], min = a[0][0];
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += a[i][j];
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j];
        }
    }
    
    printf("Tong: %d\n", sum);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
