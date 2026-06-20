#include <stdio.h>
void check_prime_and_sum_14()
{
    int a,i,prime, m, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if(a<2)
    {
    printf("Not prime");
    printf(" but sum of digits is %d",a);
    return ;
    }
    m=a;
    while(m!=0)
    {
    b=m%10;
    c=c+b;
    m=m/10;
    }
    prime=1;
    i=2;
    while(i<a)
    {
    if(a%i==0)
    {
    prime=0;
    }
    i++;
    }
    
    if(prime==1)
    {
    printf("Prime");
    printf(" but sum of digits is %d",c);
    }
    else
    {
    printf("Not prime");
    printf(" but sum of digits is %d",c);
    }
}

int main()
{
    check_prime_and_sum_14();
}
