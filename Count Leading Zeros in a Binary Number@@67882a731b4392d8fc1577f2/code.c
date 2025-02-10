#include <stdio.h>

int main() {
    int a;
    int lsb;
    scanf("%d",&a);
    
    for(int i=0;i<32;i++){
        lsb=(a>>i)&1;
        if(lsb==1){
            printf("%d",i);
            break;
        }

    }
    
    return 0;
}