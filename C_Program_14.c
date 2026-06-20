#include <stdio.h>
void disp_interchange_first_last_digit()
{
    int a, b, c=0,d, g, m, p=1,i=1,w;
    printf("Enter the Number : ");
    scanf("%d",&a);
    m=a/10;
    b=a%10;
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
    while(i<c)
    {
    p=p*10;
    i++;
    }
    w=m%p;
    d=a/(p*10);
    printf("%d%d%d",b,w,d);
}

int main()
{
    disp_interchange_first_last_digit();
}
