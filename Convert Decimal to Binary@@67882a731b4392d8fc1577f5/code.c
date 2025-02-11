#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    int d=0;
    int *arr;
    int i=0;
    int a=0;
    while(a>0){
        d=(int)a%10;
        arr[i]=d%2;
        i++;
        
}
a=i;
    for(int i=a;i>=0;i-- ){
        printf("%d",i);

    }
    return 0;
}