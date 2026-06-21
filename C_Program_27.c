#include <stdio.h>

void findCount()
{
    int number, count = 0;
    int unit, ten, hundred, thousand, tenthousand, sum;

    for(number = 1; number < 100000; number++)
    {
        unit = number % 10;
        ten = (number / 10) % 10;
        hundred = (number / 100) % 10;
        thousand = (number / 1000) % 10;
        tenthousand = (number / 10000) % 10;

        sum = unit + ten + hundred + thousand + tenthousand;

        if(sum == 14)
        {
            count++;
        }
    }

    printf("Count = %d", count);
}

int main()
{
    findCount();
    return 0;
}
