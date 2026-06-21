#include <stdio.h>
void disp_biggest_4digit_div7_9()
{
    int a=1000, b;
    while(a<10000)
    {
    if(a%7==0 && a%9==0)
    {
    b=a;
    }
    a++;
    }
    printf("%d",b);
}

int main()
{
    disp_biggest_4digit_div7_9();
}
