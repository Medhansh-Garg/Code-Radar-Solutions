#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' and a<'z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("%s","Vowel");
            
        }
        else{
            printf("%s","Consonant");
            
        }
        }
        else if(a>='0' and a<='9'){
            printf("%s","Digit");
            
        }
        else{
            printf("%s","Special Character");
        }
    

}