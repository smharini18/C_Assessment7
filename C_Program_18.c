#include <stdio.h>
void check_first_2digits_prime()
{
    int a, b, c, d, i,prime;
    printf("Enter the Number : ");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=c*10+b;
    if(d<2)
    {
    printf("Not prime");
    return ;
    }
    i=2;
    prime=1;
    while(i<d)
    {
    if(d%i==0)
    {
    prime=0;
    }
    i++;
    }
    if(prime==1) 
    {
    printf("Prime");
    }
    else
    {
    printf("Not prime");
    }
}

int main()
{
    check_first_2digits_prime();
}
