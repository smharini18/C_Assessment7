#include<stdio.h>
void disp_descend(int);
int main()
{
    int x;
    disp_descend(5);
}
void disp_descend(int x)
{
    loop:if(x>=1)
    {
        printf("%d\n",x);
        x=x-1;
        goto loop;
    }
}
