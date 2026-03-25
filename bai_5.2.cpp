#include <stdio.h>

void hoanDoi(float a[][50], int n, int h1, int h2) {
    for(int j = 0; j < n; j++) {
        float temp = a[h1][j];
        a[h1][j] = a[h2][j];
        a[h2][j] = temp;
    }
}

int main() {
    int m, n;
    float a[50][50];

    do {
        printf("Nhap so hang m, so cot n (1 < m, n <= 10): ");
        scanf("%d%d", &m, &n);
    } while(m <= 1 || m > 10 || n <= 1 || n > 10);
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]); 
        }
        printf("\n"); 
    }

    float x;
    int dem = 0;
    printf("Nhap so x can dem: ");
    scanf("%f", &x);
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == x) dem++;
        }
    }
    printf("Co %d so %.2f trong ma tran\n", dem, x);

    int h1, h2;
    printf("Nhap 2 hang can doi (tu 0 den %d): ", m - 1);
    scanf("%d%d", &h1, &h2);
    
    hoanDoi(a, n, h1, h2);
    
    printf("Sau khi doi hang:\n");
    for(int i = 0; i < m; i++) {
        float tongHang = 0;
        for(int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]);
            tongHang += a[i][j];
        }
        printf("  -> Tong hang %d: %.2f\n", i, tongHang);
    }

    return 0;
}
