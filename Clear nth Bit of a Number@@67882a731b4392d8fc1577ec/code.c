#include<stdio.h>
#include<math.h>


int main() {
    double pow;
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a>>b)&1;
    if(c==0){
        printf("%d",a);

    }
    if(c==1){
        double d=a-pow(2,b);
        printf("%d",d);
    }


    
    return 0;
}