#include <stdio.h>

int main() {
    int n, a[50][50];
    
    do {
        printf("Nhap kich thuoc ma tran vuong n (3 <= n <= 10): ");
        scanf("%d", &n);
    } while(n < 3 || n > 10);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Ma tran vuong da nhap: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]); 
        }
        printf("\n"); 
    }
    
    printf("\nMa tran chan (le in *):\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] % 2 == 0) {
                printf("%d\t", a[i][j]);
            } else {
                printf("*\t");
            }
        }
        printf("\n");
    }

    printf("\nCac so tu duong cheo chinh tro len:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) { 
                printf("%d\t", a[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}
