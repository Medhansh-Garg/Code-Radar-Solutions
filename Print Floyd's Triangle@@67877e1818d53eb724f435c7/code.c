#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        k++;
        printf("%d ",k);
        }
        printf("\n");
    }
    
}