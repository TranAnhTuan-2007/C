#include <stdio.h>
#include <string.h>

void nhap(char s[]) {
    printf("nhap chuoi: ");
    fgets(s, 200, stdin);
    s[strcspn(s, "\n")] = 0;
}

void in(char s[]) {
    printf("chuoi vua nhap: %s\n", s);
}

void kt_palindrome(char s[]) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            printf("khong la chuoi palindrome\n");
            return;
        }
        l++;
        r--;
    }
    printf("la chuoi palindrome\n");
}

int main() {
    char s[200];
    nhap(s);
    in(s);
    kt_palindrome(s);
    return 0;
}
