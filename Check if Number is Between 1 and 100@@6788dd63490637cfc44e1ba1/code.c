#include<stdio.h>

int main(){
    int a;
    scanf("%s",&a);
    if(a>=1 && a<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;

    
}