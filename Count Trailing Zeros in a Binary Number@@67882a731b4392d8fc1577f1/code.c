#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    c=0;
    while(a>0){
        if(a%2==1){
            break;
            

        }
        c++;
    }
    printf("%d",c);
    return 0;
}