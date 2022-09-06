//Write a C program to find maximum between two numbers

#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter two integer:");
    scanf("%d %d",&num1, &num2);

    if(num1>num2){
        printf("%d is maximum",num1);
    }
    else if(num2>num1){
        printf("%d is maximum",num2);
    }
    else{
        printf("both are equal");
    }
    return 0;
}
