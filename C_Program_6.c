#include <stdio.h>
void disp_2digit_odd_below20()
{
    int a ;
    a=10;
    while(a<20)
    {
    if(a%2==1)
    {
    printf("%d\n",a);
    }
    a++;
    }
}
int main()
{
    disp_2digit_odd_below20();
}
