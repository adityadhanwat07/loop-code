#include <stdio.h>
int main() {
    int sensor1_reading, sensor2_reading, sum_readings;
    printf("enter reading from sensor 1: ");
    scanf("%d",&sensor1_reading);
    printf("enter reading from sensor 2: ");
    scanf("%d",&sensor2_reading);
    sum_readings = sensor1_reading + sensor2_reading;
    printf("sum of sensor readings = %d\n", sum_readings);
    return 0;
    
}