
#include <stdio.h>
int main() {
    int unit; float bill;
    scanf("%d",&unit);
    if(unit<=100) bill=unit*1.5;
    else if(unit<=200) bill=100*1.5+(unit-100)*2;
    else bill=100*1.5+100*2+(unit-200)*3;
    printf("Bill = %.2f", bill);
}