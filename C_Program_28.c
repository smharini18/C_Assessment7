#include <stdio.h>

void findLCM()
{
    int num1, num2;
    int larger, smaller;
    int remainder, product, lcm;

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

    product = num1 * num2;
    lcm = product / larger;

    printf("LCM = %d", lcm);
}

int main()
{
    findLCM();
    return 0;
}
