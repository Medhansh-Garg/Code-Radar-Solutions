#include <stdio.h>

int main() {
    int num;
    
    
    
    scanf("%d", &num);

    if(num==0)
    printf("%d",32) ;
    
    int count=0;
    for (int i = 31; i >=0; i--) {
    
        

        
        if (num & (i<<1)) {
            
            break;   
        }
        count+=1;
    }

    
    printf("%d",count)

    return 0;
}
