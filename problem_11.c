//Write a C program to input week number and print week day.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter week number(1-7):");
    scanf("%d",&num);

    if(num == 1){
        printf("this is Sunday");
    }
    else if(num == 2){
        printf("this is Monday");
    }
    else if(num == 3){
        printf("this is Tuesday");
    }
    else if(num == 4){
        printf("this is Wednesday");
    }
    else if(num == 5){
        printf("this is Thursday");
    }
    else if(num == 6){
        printf("this is Friday");
    }
    else if(num == 7){
        printf("this is Saturday");
    }
    return 0;
}
