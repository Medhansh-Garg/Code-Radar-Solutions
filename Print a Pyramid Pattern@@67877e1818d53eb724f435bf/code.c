#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=(a-i);j++){
            printf(" ");
        }
        for(int j=i;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;

}