#include <stdio.h>

int main() {
    int a;
    int lsb;
    scanf("%d",&a);
    int pos=-1;
    for(int i=0;i<32;i++){
        lsb=(a>>i)&1;
        if(lsb==1){
            pos=i;
    
            break;
        }

    }
    if(pos==-1){
        printf("%d",0);
    }
    else
    printf("%d",32-pos-1);
    
    return 0;
}