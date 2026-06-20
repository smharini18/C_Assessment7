#include <stdio.h>
void middle_2digits_prime()
{
    int a, b, c, d, i,prime;
    printf("Enter the 4 digit Number : ");
    scanf("%d",&a);
    b=(a/10)%10;
    c=(a/100)%10;
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
    middle_2digits_prime();
}
