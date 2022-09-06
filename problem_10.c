//Write a C program to check whether a character is uppercase or lowercase alphabet
#include<stdio.h>
int main()
{
   char ch;
   printf("Enter any alphabet:");
   scanf("%c",&ch);
   if(ch>='a' && ch<='z'){
    printf("%c is lowercase",ch);
   }
   else if(ch>='A' && ch<='Z'){
    printf("%c is uppercase",ch);
   }
   return 0;
}
