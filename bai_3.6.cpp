#include <stdio.h>

void nhapDS(float a[], int *n) {
    do {
        printf("Nhap n (3 < n <= 50): ");
        scanf("%d", n);
    } while (*n <= 3 || *n > 50);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void inDS(float a[], int n) {
    for (int i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");
}

void sapXepTangDan(float a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void tinhTongDacBiet(float a[], int n) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        // Vi tri le trong C la i = 1, 3, 5...
        // Boi cua 5: ep kieu ve int de kiem tra chia het
        if (i % 2 != 0) {
            int giaTriNguyen = (int)a[i];
            if (giaTriNguyen == a[i] && giaTriNguyen % 5 == 0) {
                tong += a[i];
            }
        }
    }
    printf("Tong cac phan tu la boi cua 5 o vi tri le: %.2f\n", tong);
}

int main() {
    float a[50];
    int n;
    
    nhapDS(a, &n);
    printf("Day so vua nhap: ");
    inDS(a, n);
    
    sapXepTangDan(a, n);
    printf("Day so sau khi sap xep tang dan: ");
    inDS(a, n);
    
    tinhTongDacBiet(a, n);
    
    return 0;
}
