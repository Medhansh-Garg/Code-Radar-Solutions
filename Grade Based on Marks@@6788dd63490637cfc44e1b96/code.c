#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("%c",'A');
    }
    else if(a<=90 &&a>=80){
        printf("%c",'B');
    }
    else if(a<80 && a>=70){
        printf("%c",'C');

    }
    else if(a<70 && a>=60){
        printf("%c",'D');
    }
    else{
        printf("%c",'F');
    }
}