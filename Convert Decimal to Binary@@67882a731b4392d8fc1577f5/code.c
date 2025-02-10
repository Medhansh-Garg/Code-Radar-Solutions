#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    int d=0;
    while(a>0){
        d=a%10;
        

        b=b*10+(d%2);
        a=a/10;

    }
    printf("%d",a);
    return 0;
}