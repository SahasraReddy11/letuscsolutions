#include<stdio.h>
int main(){
    float salary;
    printf("Enter the salary: ");
    scanf("%f", &salary);
    float da = (40.0/100.0)*salary;
    float hr = (20/100)* salary;
    float gross = salary + da + hr;
    printf("gross salary is %0.2f ", gross);
    return 0;
}