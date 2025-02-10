#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    int c=0;
    while(a>0){
        if(a%2==1){
            break;
            }

        a=a/2;
        c++;
    }
    printf("%d",c);
    return 0;
}