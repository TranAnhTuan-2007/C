#include <stdio.h>

void nhap(int a[], int n) {
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
}

void xuat(int a[], int n) {
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
}

void sapXep(int a[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[i] > a[j]) { int t=a[i]; a[i]=a[j]; a[j]=t; }
}

void ghep(int a1[], int n, int a2[], int m, int a[], int *k) {
    int i=0, j=0;
    *k = 0;
    while(i<n && j<m) {
        if(a1[i] < a2[j]) a[(*k)++] = a1[i++];
        else a[(*k)++] = a2[j++];
    }
    while(i<n) a[(*k)++] = a1[i++];
    while(j<m) a[(*k)++] = a2[j++];
}

void chen(int a[], int *k, int x) {
    int pos = 0;
    while(pos < *k && a[pos] <= x) pos++;
    for(int p=*k; p>pos; p--) a[p] = a[p-1];
    a[pos] = x;
    (*k)++;
}

int main() {
    int n, m, a1[100], a2[100], a[200], k, x;
    printf("Nhap n, m: "); scanf("%d%d", &n, &m);
    
    printf("Nhap mang 1:\n"); nhap(a1, n);
    printf("Nhap mang 2:\n"); nhap(a2, m);
    
    sapXep(a1, n); sapXep(a2, m);
    ghep(a1, n, a2, m, a, &k);
    
    printf("Mang sau khi ghep: "); xuat(a, k);
    
    printf("Nhap x can chen: "); scanf("%d", &x);
    chen(a, &k, x);
    printf("Mang cuoi cung: "); xuat(a, k);
    
    return 0;
}
