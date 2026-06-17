#include <stdio.h>
void disp_2digit_ones5()
{
    int a,b, c=0;
    a=10;
    while(a<100)
    {
    b=a%10;
    if(b==5)
    {
    c=c+a;
    }
    a++;
    }
    printf("%d\n",c);
}

int main()
{
    disp_2digit_ones5();
}
