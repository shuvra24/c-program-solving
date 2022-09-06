/*Write a C program to input electricity unit charges and calculate total electricity bill
 according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()
{
    int unit;
    float amt, surcharge, total;
    printf("enter electricity unit charges:");
    scanf("%d",&unit);
    if(unit<=50){
        amt = unit * 0.50;
    }
    else if(unit<=150){
        amt = 25 + (unit-50)*0.75;
    }
    else if(unit<=250){
        amt = 100 + (unit-150)*1.20;
    }
    else{
        amt = 220 + (unit-250)*1.50;
    }
    surcharge = amt*0.2;
    total = amt + surcharge;
    printf("Total electricity bill = Rs. %.2f",total);
    return 0;
}
