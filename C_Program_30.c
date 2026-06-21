#include <stdio.h>

void findHCF()
{
    int num1, num2;
    int larger, smaller;
    int remainder;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);

    printf("Enter Number 2 : ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        larger = num1;
        smaller = num2;
    }
    else
    {
        larger = num2;
        smaller = num1;
    }

    while(smaller != 0)
    {
        remainder = larger % smaller;
        larger = smaller;
        smaller = remainder;
    }

    printf("HCF = %d", larger);
}

int main()
{
    findHCF();
    return 0;
}
