#include <stdio.h>
int main(){
    int basic_year=2001, input_year, years, leap, non_leap, total_days;
    printf("Enter your year");
    scanf("%d",&input_year);
    years = (input_year-1)-basic_year;
    leap = years/4;
    non_leap = years-leap;
    total_days = (non_leap*365) + (leap*366);
    int k = total_days%7;
    printf("%d",k);
    if (k==0){
        printf("Monday");
    }else if(k==1){
        printf("Tuesday");
    }else if(k==2){
        printf("Wednesday");
    }else if(k==3){
        printf("Thursday");
    }else if(k==4){
        printf("Friday");
    }else if(k==5){
        printf("Saturday");
    }else if(k==6){
        printf("Sunday");
    }
    return 0;
}