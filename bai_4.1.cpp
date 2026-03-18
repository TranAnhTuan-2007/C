#include <stdio.h>

void nhap(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", a + i);
    }
}

void xuat(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

int kiemTra(int *a, int n) {
    for(int i = 1; i < n; i += 2) {
        if(*(a + i) <= 0) return 0;
    }
    return 1;
}

void thayThe(int *a, int n) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) % 3 == 0) *(a + i) = 5;
    }
}

int main() {
    int n;
    do {
        printf("Nhap n: "); 
    	scanf("%d", &n);
    } while (n <= 3 || n > 40);
    
    int a[100]; 
    nhap(a, n);
    
    printf("Mang vua nhap: "); 
    xuat(a, n);
    
    if(kiemTra(a, n) == 1) {
        printf("Tat ca phan tu vi tri le la so duong\n");
    } else {
        printf("Khong dung dieu kien de bai\n");
    }
    
    thayThe(a, n);
    printf("Mang sau khi thay the: "); 
    xuat(a, n);
    
    return 0;
}
