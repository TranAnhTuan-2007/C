#include <stdio.h>

void xoa(float a[], int *n, int p) {
    for(int i = p; i < *n - 1; i++) a[i] = a[i + 1];
    (*n)--;
}

void xoaSo0(float a[], int *n) {
    for(int i = 0; i < *n; i++) {
        if(a[i] == 0) {
            xoa(a, n, i);
            i--;
        }
    }
}

void tachMang(float a[], int n, float b[], int *nb, float c[], int *nc) {
    *nb = 0; *nc = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            b[*nb] = a[i];
            (*nb)++;
        } else if(a[i] < 0) {
            c[*nc] = a[i];
            (*nc)++;
        }
    }
}

int main() {
    int n;
    float a[100], b[100], c[100];
    int nb = 0, nc = 0;

    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    xoaSo0(a, &n);
    printf("Sau khi xoa so 0: ");
    for(int i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");

    tachMang(a, n, b, &nb, c, &nc);
    
    printf("Mang so duong: ");
    for(int i = 0; i < nb; i++) printf("%.2f ", b[i]);
    printf("\n");

    printf("Mang so am: ");
    for(int i = 0; i < nc; i++) printf("%.2f ", c[i]);
    printf("\n");

    return 0;
}
