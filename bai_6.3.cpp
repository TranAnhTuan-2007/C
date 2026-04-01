#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoaChuoi(char s[]) {
    int i, j = 0;
    int len = strlen(s);
    char temp[100];

    for (i = 0; i < len; i++) {
        if (s[i] != ' ' || (j > 0 && temp[j - 1] != ' ')) {
            temp[j++] = s[i];
        }
    }
    
    if (j > 0 && temp[j - 1] == ' ') {
        j--;
    }
    temp[j] = '\0'; 
    strcpy(s, temp); 
}

void vietHoaChuCaiDau(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i == 0 || s[i - 1] == ' ') {
            s[i] = toupper(s[i]); 
        } else {
            s[i] = tolower(s[i]); 
        }
    }
}

void inCacTu(char s[]) {
    int dem = 1;
    printf("%d. ", dem);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            dem++;
            printf("\n%d. ", dem);
        } else {
            printf("%c", s[i]);
        }
    }
}

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, 100, stdin);
    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    chuanHoaChuoi(s);
    printf("Chuoi chuan hoa: %s\n", s);
    
    vietHoaChuCaiDau(s);
    printf("Chuoi khi duoc viet hoa chu cai dau: %s\n",s);
    inCacTu(s);
    
    return 0;
}
