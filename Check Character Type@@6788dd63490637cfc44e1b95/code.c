#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='O'||a=='I'||a=='U'){
            printf("%s","Vowel");
            
        }
        else{
            printf("%s","Consonant");
            
        }
        }
        else if(a>='0' && a<='9'){
            printf("%s","Digit");
            
        }
        else{
            printf("%s","Special Character");
        }
        return 0;

}