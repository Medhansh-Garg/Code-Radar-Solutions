#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    int d=0;
    while(a>0){
        d=(int)a%10;
        if(d%2==0){
            b=b*10;
        }
        else{
            b=b*10+1;
        }
        a=a/10;

    }
    printf("%d",b);
    return 0;
}