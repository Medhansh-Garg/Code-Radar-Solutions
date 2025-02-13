#include<stdio.h>

int main(){
    float a,b;
    char o;
    scanf("%f %f %c",&a,&b,&o);
    if(o=='+'){
        printf("%d",(int)a+b);
    }
    else if(o=='-'){
        printf("%d",(int)a-b);
    }
    else if(o=='*'){
        printf("%d",(int)a*b);
    }
    else if(o=='/')
    printf("%d",(int)a/b);
    else{
        printf("Invalid Operation");
    }


}