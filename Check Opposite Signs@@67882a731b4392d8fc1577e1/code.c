#include <stdio.h>

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    if((a>0)&&(n<0)||(a<0)&&(n>0))
    printf("True");
    else
    printf("False");
    
    return 0;
}