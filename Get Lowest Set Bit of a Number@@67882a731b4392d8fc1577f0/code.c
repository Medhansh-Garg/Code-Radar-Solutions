#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    int lsb;
    int p=0;
    while(lsb!=0){
        lsb=(a>>p)&1;
        p++;

    }
    printf("%d",p)
    return 0;
}