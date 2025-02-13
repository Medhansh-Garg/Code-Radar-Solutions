#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("%s","Loss");
    }
    else if(a<b){
        printf("%s","Profit");
    
    }
    else{
        printf("%s","No Profit No Loss");
    }

}