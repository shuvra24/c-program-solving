//Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int num;
    printf("enter month number(1-12):");
    scanf("%d",&num);
    if(num == 1){
        printf("31 days");
    }
    else if(num == 2){
        printf("28 or 29 days");
    }
    else if(num == 3){
        printf("31 days");
    }
    else if(num == 4){
        printf("30 days");
    }
    else if(num == 5){
        printf("31 days");
    }
    else if(num == 6){
        printf("30 days");
    }
    else if(num == 7){
        printf("31 days");
    }
    else if(num == 8){
        printf("31 days");
    }
    else if(num == 9){
        printf("30 days");
    }
    else if(num == 10){
        printf("31 days");
    }
    else if(num == 11){
        printf("30 days");
    }
    else if(num == 12){
        printf("31 days");
    }
    return 0;
}
