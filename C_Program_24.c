#include <stdio.h>
#include <math.h>
void disp_two_digit_square()
{
     int a, b, c=0,d,m, n;
     printf("Enter the Number : ");
     scanf("%d",&a);
     while(a>10)
     {
     b=a%10;
     m=(a/10)%10;
     n=m*10+b;
     d=sqrt(n);
     if(d*d==n)
     {
     c=c+1;
     }
     a=a/10;
     }
     printf("%d",c);
}

int main()
{
    disp_two_digit_square();
}
