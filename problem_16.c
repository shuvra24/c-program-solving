//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("enter three side of triangle");
    scnaf("%d %d %d",&side1, &side2, &side3);
    if(side1==side2 && side2==side3){
        printf("It is equilateral triangle");
    }
    else if(side1==side2 || side2==side3 || side3==side1){
        printf("It is isosceles triangle");
    }
    else{
        printf("It is scalene triangle");
    }
    return 0;
}
