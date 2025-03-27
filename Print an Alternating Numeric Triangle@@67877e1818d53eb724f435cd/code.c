#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int k=1;
        }
        else{
            int k=0;
        }
       
        for(int j=1;j<=i;j++){
        printf("%d ",k);
        if(k==0)
        k=1;
        else
        k=0;
        }
        printf("\n");
    }
    
}