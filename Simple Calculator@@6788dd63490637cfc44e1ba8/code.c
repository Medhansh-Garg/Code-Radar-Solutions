#include<stdio.h>

int main(){
    float a,b;
    char o;
    scanf("%f %f %c",&a,&b,&o);
    if(o=='+'){
        printf("%f",a+b);
    }
    else if(o=='-'){
        printf("%f",a-b);
    }
    else if(o=='*'){
        printf("%f",a*b);
    }
    else if(o=='/')
    printf("%f",a/b);
    else{
        printf("Invalid Operation");
    }


}