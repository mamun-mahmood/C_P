#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    if (n>0)
    {
        printf("The number is positive");
    }
    else if(n<0)
    {
        printf("The number is negative");
    }
    else{printf("The number is zero");}
    return 0;
}
