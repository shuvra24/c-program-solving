//Write a C program to count total number of notes in given amount.
#include<stdio.h>
int main()
{
    int amount;
    printf("Enter amount:");
    scanf("%d",&amount);

    if(amount>=1000){
        printf("1000 = %d\n",amount/1000);
        amount = amount%1000;
    }
    if(amount>=500){
        printf("500 = %d\n",amount/500);
        amount = amount%500;
    }
    if(amount>=200){
    printf("200 = %d\n",amount/200);
    amount = amount%200;
    }
    if(amount>=100){
    printf("100 = %d\n",amount/100);
    amount = amount%100;
    }
    if(amount>=50){
    printf("50 = %d\n",amount/50);
    amount = amount%50;
    }
    if(amount>=20){
    printf("20 = %d\n",amount/20);
    amount = amount%20;
    }
    if(amount>=10){
    printf("10 = %d\n",amount/10);
    amount = amount%10;
    }
    if(amount>=5){
    printf("5 = %d\n",amount/5);
    amount = amount%5;
    }
    if(amount>=2){
    printf("2 = %d\n",amount/2);
    amount = amount%2;
    }
    else{
        printf("1 = %d\n",amount/1);
        amount = amount%1;
    }

    return 0;
}
