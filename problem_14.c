//Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
   int angle1, angle2, angle3, sum;
   printf("enter three angles of triangle:");
   scanf("%d %d %d",&angle1, &angle2, &angle3);
   sum = angle1+angle2+angle3;
   if(sum == 180 && angle1>0 && angle2>0 && angle3){
    printf("triangle is valid");
   }
   else{
    printf("triangle is unvalid");
   }
   return 0;
}
