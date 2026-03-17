#include <stdio.h>

void nhap(float a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n) {
    for(int i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");
}

void them(float a[], int *n, float x, int k) {
    for(int i = *n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    (*n)++;
}

void xoa(float a[], int *n, int p) {
    for(int i = p; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main() {
    int n;
    float a[100];
    
    printf("Nhap n: "); scanf("%d", &n);
    nhap(a, n);
    
    float x; int k;
    printf("Nhap x va vt k can them: "); 
    scanf("%f%d", &x, &k);
    them(a, &n, x, k);
    printf("Mang sau khi them: "); xuat(a, n);

    int p;
    printf("Nhap vt p can xoa: "); 
    scanf("%d", &p);
    xoa(a, &n, p);
    printf("Mang sau khi xoa: "); xuat(a, n);

    return 0;
}
