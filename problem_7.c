//Write a C program to check whether a character is alphabet or not
#include<stdio.h>
int main()
{
    char c;
    printf("Enter an charecter:");
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is a alphabet",c);
    }

    else{
        printf("%c is not a alphabet",c);
    }
    return 0;
}
