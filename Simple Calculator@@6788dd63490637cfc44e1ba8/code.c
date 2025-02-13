#include<stdio.h>

int main(){
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    if(o=='+'){
        printf("%d",a+b);
    }
    else if(o=='-'){
        printf("%d",a-b);
    }
    else if(o=='*'){
        printf("%d",a*b);
    }
    else if(o=='/'){
        float x=a/b;
        printf("%2f",x);
    }
    else{
        printf("Invalid Operation");
    }


}