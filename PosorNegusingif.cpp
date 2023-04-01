#include <stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
 
    scanf("%d",&number);
 
    if(number == 0)
        printf("Neither positive nor negative");
    else if(number < 0)
        printf("Negative");
    else
        printf("Positive");
     
    return 0;
}
