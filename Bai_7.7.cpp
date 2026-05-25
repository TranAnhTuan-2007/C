#include <stdio.h>

void nhap(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void in(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

void sapxep(float a[], int n) {
    float tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void nhieu_nhat(float a[], int n) {
    int max_dem = 0;
    float res = a[0];
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) dem++;
        }
        if (dem > max_dem) {
            max_dem = dem;
            res = a[i];
        }
    }
    printf("xuat hien nhieu nhat: %.2f\n", res);
}

float tbc_chan(float a[], int n) {
    float tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i += 2) {
        tong += a[i];
        dem++;
    }
    return tong / dem;
}

void dem_lonhon(float a[], int n, float tbc) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > tbc) dem++;
    }
    printf("so phan tu lon hon %.2f: %d\n", tbc, dem);
}

int main() {
    int n;
    float a[50];
    do {
        printf("nhap n (3 <= n <= 50): ");
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    
    nhap(a, n);
    printf("mang: ");
    in(a, n);
    sapxep(a, n);
    printf("sau khi sap xep: ");
    in(a, n);
    nhieu_nhat(a, n);
    float tbc = tbc_chan(a, n);
    printf("tbc vi tri chan: %.2f\n", tbc);
    dem_lonhon(a, n, tbc);
    return 0;
}
