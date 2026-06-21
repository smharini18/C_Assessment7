#include <stdio.h>

void findLCMof3()
{
    int num1, num2, num3;
    int big, small, rem;
    int gcd1, lcm1;
    int gcd2, finalLCM;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);

    printf("Enter Number 2 : ");
    scanf("%d", &num2);

    printf("Enter Number 3 : ");
    scanf("%d", &num3);

    /* GCD of num1 and num2 */
    if(num1 > num2)
    {
        big = num1;
        small = num2;
    }
    else
    {
        big = num2;
        small = num1;
    }

    while(small != 0)
    {
        rem = big % small;
        big = small;
        small = rem;
    }

    gcd1 = big;
    lcm1 = (num1 * num2) / gcd1;

    /* GCD of lcm1 and num3 */
    if(lcm1 > num3)
    {
        big = lcm1;
        small = num3;
    }
    else
    {
        big = num3;
        small = lcm1;
    }

    while(small != 0)
    {
        rem = big % small;
        big = small;
        small = rem;
    }

    gcd2 = big;
    finalLCM = (lcm1 * num3) / gcd2;

    printf("LCM = %d", finalLCM);
}

int main()
{
    findLCMof3();
    return 0;
}
