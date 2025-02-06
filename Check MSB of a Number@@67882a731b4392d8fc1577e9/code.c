#include <stdio.h>



int main() {
    int a;
    int n;
    scanf("%d",&a);
    while(a>0){
        n=a;
        a=a/10;

    }
    if(n%2==1)
    printf("Set");
    else
    printf("Not set")

    return 0;
}