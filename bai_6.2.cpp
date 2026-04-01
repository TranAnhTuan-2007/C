#include <stdio.h>
#include <string.h>

void demVaTinhDNA(char dna[]) {
    int a = 0, t = 0, g = 0, c = 0;
    int len = strlen(dna);

    for (int i = 0; i < len; i++) {
        if (dna[i] == 'A') a++;
        else if (dna[i] == 'T') t++;
        else if (dna[i] == 'G') g++;
        else if (dna[i] == 'C') c++;
    }

    printf("\nBazo\tTan so\n");
    printf("A\t%d\n", a);
    printf("T\t%d\n", t);
    printf("G\t%d\n", g);
    printf("C\t%d\n", c);

    float ptAT = (float)(a + t)/len * 100;
    float ptGC = (float)(g + c)/len * 100;

    printf("Phan tram (AT) la: %.3f\n", ptAT);
    printf("Phan tram (GC) la: %.3f\n", ptGC);
}

int main() {
    char dna[100];
    printf("Nhap chuoi DNA: ");
    fgets(dna, 100, stdin);
    
    int len = strlen(dna);
    if (len > 0 && dna[len - 1] == '\n') {
        dna[len - 1] = '\0';
    }
    
    demVaTinhDNA(dna);
    return 0;
}
