#include<stdio.h>

int main(){
    int a;
    int b=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
        b==1;
        }
        }
    if(b==1){
        printf("Not Prime");
    }
    else
    printf("Prime");
}