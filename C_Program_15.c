#include <stdio.h>
void check_last_digit_odd()
{
    int a, b, c=0,d, g, m, p=1,i=1,w;
    printf("Enter the Number : ");
    scanf("%d",&a);
    m=a%10;
    g=a;
    while(g!=0)
    {
    g=g/10;
    if(g!=0)
    {
    c=c+1;
    }
    }
    i=1;
    while(i<=c)
    {
    p=p*10;
    i++;
    }
    w=a%p;
    d=a/p;
    if(m%2==1)
    {
    printf("%d%d",d-1,w);
    }
    else
    {
    printf("%d%d",d,w);
    }
}

int main()
{
    check_last_digit_odd();
}
