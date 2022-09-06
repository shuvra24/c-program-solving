//Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
    int  cp, sp, amt;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter sell price:");
    scanf("%d",&sp);

    if(sp>cp){
        amt = sp-cp;
        printf("profit = %d",amt);
    }
    else if(cp>sp){
        amt = cp-sp;
        printf("loss = %d",amt);
    }
    else{
        printf("no profit, no loss");
    }
    return 0;
}
