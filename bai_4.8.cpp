#include <stdio.h>
#include <stdlib.h>

void nhap(float *a, int n) {
    for(int i=0; i<n; i++) scanf("%f", &a[i]);
}

void xuat(float *a, int n) {
    for(int i=0; i<n; i++) printf("%.2f ", a[i]);
    printf("\n");
}

float* themCuoi(float *a, int *n, float x) {
    a = (float*)realloc(a, (*n + 1) * sizeof(float));
    a[*n] = x;
    (*n)++;
    return a;
}

float* xoaK(float *a, int *n, float k) {
    for(int i=0; i<*n; i++) {
        if(a[i] == k) {
            for(int j=i; j<*n-1; j++) a[j] = a[j+1];
            (*n)--;
            a = (float*)realloc(a, (*n) * sizeof(float));
            i--;
        }
    }
    return a;
}

int main() {
    int n;
    float x, k;
    printf("Nhap n: "); scanf("%d", &n);
    
    float *a = (float*)malloc(n * sizeof(float));
    printf("Nhap mang: \n");
    nhap(a, n);
    printf("Mang vua nhap: "); xuat(a, n);

    printf("Nhap x them vao cuoi: "); scanf("%f", &x);
    a = themCuoi(a, &n, x);
    printf("Sau khi them: "); xuat(a, n);

    printf("Nhap k can xoa: "); scanf("%f", &k);
    a = xoaK(a, &n, k);
    printf("Mang sau cung: "); xuat(a, n);

    free(a);
    return 0;
}
