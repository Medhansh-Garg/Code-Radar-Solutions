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
    else if(o=='/' && b!=0){
    
    int c=a/b;
    printf("%d",c);
    }
    
    else{
        printf("error");
    }


}