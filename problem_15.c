//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("three side of traingle");
    scanf("%d %d %d",&side1, &side2, &side3);
    if(side1+side2>side3 || side1+side3>side2 || side2+side3>side1){
        printf("triangle is valid");
    }
    else{
        printf("triangle is not valid");
        return 0;
    }
}
