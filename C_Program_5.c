#include <stdio.h>
void disp_odd()
{
    int a=1,b=0;
    while(a<10)
    {
    if(a%2==1)
    {
    printf("%d\n",a);
    }
    a++;;
    }
    
}
int main()
{
    disp_odd();
}
