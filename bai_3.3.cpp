#include <stdio.h>

void nhapDaySoThuc(float a[], int *n) {
    do {
        printf("Nhap n (3 < n <= 100): ");
        scanf("%d", n);
    } while (*n <= 3 || *n > 100);

    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void inDaySoThuc(float a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf(" %.2f", a[i]);
    }
    printf("\n");
}

float tinhTong(float a[], int n) {
    float s=0;
    for (int i= 0; i<n; i++) {
        s += a[i];
    }
    return s;
}

void tinhTBCongDuong(float a[], int n) {
    float tongDuong=0;
    int dem=0;
    for (int i=0; i<n; i++) {
        if (a[i] > 0) {
            tongDuong += a[i];
            dem++;
        }
    }
    if (dem > 0) {
    	float tbc = tongDuong / dem;
        printf("TBC phan tu duong: %.2f\n", tongDuong / dem);
    } else {
        printf("O phan tu duong.\n");
    }
}

int main() {
    float a[100];
    int n;

    nhapDaySoThuc(a, &n);
    inDaySoThuc(a, n);

    printf("Tong phan tu: %.2f\n", tinhTong(a, n));
    tinhTBCongDuong(a, n);

    return 0;
}

