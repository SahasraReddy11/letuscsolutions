#include<stdio.h>
#include<math.h>
int main () {
   double x, ret, val;
   printf("enter the angle in degrees: ");
   scanf("%lf", &x);
   val = 3.14 / 180;
   ret = x*val;
   printf("The sin of  %lf degrees\n", sin(ret));
   printf("The cos of  %lf degrees\n", cos(ret));
   printf("The tan of  %lf degrees\n", tan(ret));
   printf("The sec of  %lf degrees\n", 1/cos(ret));
   printf("The cosec of  %lf degrees\n", 1/sin(ret));
   printf("The cot of  %lf degrees\n", 1/tan(ret));
   return 0;
}