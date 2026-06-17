#include <stdio.h>
void disp_sum()
{
    int a=5,b=0;
    while(a>0)
    {
    b=b+a;
    a--;
    }
    printf("%d",b);
    
}
int main()
{
    disp_sum();
}
