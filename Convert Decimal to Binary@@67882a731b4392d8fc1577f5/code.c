#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b = 0;
    int d = 0;
    int arr[10]; 
    int i = 0;

    while(a > 0) {
        d = a % 10;
        arr[i] = d % 2;
        i++;
        a /= 10; 
    }

    a = i;
    for(int i = a - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}
