#include <stdio.h>

void nhap(float a[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void in(float a[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

void tim_max(float a[][10], int m, int n) {
    float max = a[0][0];
    int h = 0, c = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                h = i;
                c = j;
            }
        }
    }
    printf("max: %.2f o [%d][%d]\n", max, h, c);
}

void min_cot(float a[][10], int m, int n) {
    for (int j = 0; j < n; j++) {
        float min = a[0][j];
        for (int i = 1; i < m; i++) {
            if (a[i][j] < min) min = a[i][j];
        }
        printf("min cot %d: %.2f\n", j, min);
    }
}

void tong_bien(float a[][10], int m, int n) {
    float tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                tong += a[i][j];
            }
        }
    }
    printf("tong bien: %.2f\n", tong);
}

void hang_max(float a[][10], int m, int n) {
    float max_tong = 0;
    int hang = 0;
    for (int i = 0; i < m; i++) {
        float tong = 0;
        for (int j = 0; j < n; j++) {
            tong += a[i][j];
        }
        if (i == 0 || tong > max_tong) {
            max_tong = tong;
            hang = i;
        }
    }
    printf("hang %d co tong lon nhat (%.2f)\n", hang, max_tong);
}

int main() {
    int m, n;
    float a[10][10];
    do {
        printf("nhap m, n (2 <= m, n <= 10): ");
        scanf("%d %d", &m, &n);
    } while (m < 2 || m > 10 || n < 2 || n > 10);
    
    nhap(a, m, n);
    printf("ma tran:\n");
    in(a, m, n);
    tim_max(a, m, n);
    min_cot(a, m, n);
    tong_bien(a, m, n);
    hang_max(a, m, n);
    return 0;
}
