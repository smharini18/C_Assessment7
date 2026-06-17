#include <stdio.h>
void disp_rsum()
{
    int a=6,b=0;
    while(a>0)
    {
    b=b+a;
    a--;
    }
    printf("%d",b);
    
}
int main()
{
    disp_rsum();
}
