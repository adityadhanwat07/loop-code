
#include <stdio.h>
int main() {
    int n,d,min=9;
    scanf("%d",&n);
    while(n>0){d=n%10;if(d<min)min=d;n/=10;}
    printf("Smallest Digit = %d", min);
}