#include<stdio.h>
int main(){
    float f;
    printf("enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    float c = (f - 32.0) * (5.0/9.0);
    printf("Temperature in centigrade is %f",c);
}