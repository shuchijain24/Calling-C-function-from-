#include <stdio.h>

int main()
{
int x;
printf("Enter a positive integer");
scanf("%d", &x);
if (x%2 ==0)
    {
        printf("Number is even");
    }
else 
printf("Number is odd");
return 0;
}

