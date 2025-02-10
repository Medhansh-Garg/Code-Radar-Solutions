#include <stdio.h>
#include <math.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a>>b)&1;
    if(c==0){
        printf("%d",a);

    }
    if(c==1){
        int d=a-2b;
        printf("%d",b);
    }


    
    return 0;
}