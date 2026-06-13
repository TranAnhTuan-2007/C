#include <stdio.h>

void nhap(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("a[%d]= ", i); scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
}

void themDau(int a[], int *n, int y) {
    for(int i=*n; i>0; i--) a[i] = a[i-1];
    a[0] = y;
    (*n)++;
}

void xoaTrung(int a[], int *n) {
    for(int i=0; i<*n-1; i++) {
        for(int j=i+1; j<*n; j++) {
            if(a[i] == a[j]) {
                for(int k=j; k<*n-1; k++) a[k] = a[k+1];
                (*n)--;
                j--;
            }
        }
    }
}

int main() {
    int n, a[100], y;
    printf("Nhap n: "); scanf("%d", &n);
    nhap(a, n);
    
    printf("Nhap y: "); scanf("%d", &y);
    themDau(a, &n, y);
    printf("Sau khi them: "); xuat(a, n);
    
    xoaTrung(a, &n);
    printf("Sau khi xoa trung: "); xuat(a, n);
    return 0;
}
