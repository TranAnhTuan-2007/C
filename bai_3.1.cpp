#include <stdio.h>

// Hàm in dãy s? ra màn hình
void inDaySo(int a[], int n) {
    printf("Day so la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {5, 7, 9, 11, 24, 10};
    int n = sizeof(a) / sizeof(a[0]);
    
    // G?i hàm in dãy s? ra màn hình
    inDaySo(a, n);
    
    return 0;
}
