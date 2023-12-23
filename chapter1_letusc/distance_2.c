#include<stdio.h>
int main(){
    float km;
    printf("enter the distance in KM: ");
    scanf("%f", &km);
    printf("distance in metres is %0.2f\n", 1000*km);
    printf("distance in feet is %0.2f\n", 3280.84*km);
    printf("distance in inches is %0.2f\n",39370.1*km);
    printf("distance in centimeters is %0.2f\n",100000*km);
    return 0;
}