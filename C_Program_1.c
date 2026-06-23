#include<stdio.h>
void disp_assend(int);
int main()
{
    int x;
    disp_assend(1);
}
void disp_assend(int x)
{
    loop:if(x<=5)
    {
        printf("%d\n",x);
        x=x+1;
        goto loop;
    }
}
