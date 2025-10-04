
#include <stdio.h>
int main() {
    int n, count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    do {
        count++;
        n/=10;
    } while(n!=0);
    printf("Digits = %d", count);
    return 0;
}