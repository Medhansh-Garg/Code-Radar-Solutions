#include <stdio.h>

int main() {
    int a,b;
    scanf("%d,%d",a,b);
    int c=(a>>b)&1;
    if(c==1){
        int d=a-(1<<b);
    }
    else{
        int d=a+1(<<b);
    }
    printf("%d",d);
    return 0;
}