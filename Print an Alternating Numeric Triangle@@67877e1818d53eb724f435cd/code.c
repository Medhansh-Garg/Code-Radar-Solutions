#include<stdio.h>
int main(){
    int n;
    int k=1
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%d",k);
        if(k==0)
        k=1;
        else
        k=0;
        }
        printf("\n");
    }
    
}