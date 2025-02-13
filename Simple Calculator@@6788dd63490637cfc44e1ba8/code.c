#include<stdio.h>

int main(){
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    if(a==''+'){
        printf("%d",a+b);
    }
    else if(a=='-'){
        printf("%d",a-b);
    }
    else if(a=='*'){
        printf("%d",a*b);
    }
    else if(a=='/')
    printf("%d",a/b);


}