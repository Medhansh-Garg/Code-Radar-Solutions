#include <stdio.h>



int main() {
    char a;
    if(a>"a"&&a<"z")
    printf("%s","Lowercase");
    else if(a>"A"&&a<"Z")
    printf("%s","Uppercase");
    else
    printf("%s","Not an alphabet");


    return 0;
}