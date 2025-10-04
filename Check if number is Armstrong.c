
#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, d, temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0){d=temp%10; sum+=d*d*d; temp/=10;}
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}