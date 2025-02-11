#include <stdio.h>

void intToBin(int a) {
    int bin[32];
    int i = 0;
    if(a==0){
        printf("%d",0);
        return;
    }

    while (a > 0) {
        bin[i] = a % 2;
        a /= 2;
        i++;
    }

    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    intToBin(a);
    return 0;
}
