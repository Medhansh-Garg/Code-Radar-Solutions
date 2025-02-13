#include<stdio.h>

int main(){
    int a,b;
    scanf("%a,%b",&a,&b);

    if(a>b){
        printf("%s","Loss");
    }
    else(a<b){
        printf("%s","Profit");
    
    }
    else{
        printf("%s","No Profit No Loss");
    }

}