#include <stdio.h>

int main() {
    int a,b;
    scanf("%d,%d",&a,&b);
    int c=(a>>b)&1;
    int d;
        if(c==1){
         d=a-(1<<b);
    }
    else{
         d=a+(1<<b);
    }
    printf("%d",d);
    return 0;
}