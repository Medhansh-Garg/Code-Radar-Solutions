#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    int n=(a>>31)&1;
    

    if(a%2==1)
    printf("Set");
    else
    printf("Not Set");

    return 0;
}