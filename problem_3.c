//Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num>0){
        printf("%d is positive",num);
    }
    else if(num<0){
        printf("%d is negative",num);
    }
    else{
        printf("This is zero");
    }
    return 0;
}
