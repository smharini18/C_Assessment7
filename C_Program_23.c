#include <stdio.h>
#include <math.h>
void disp_single_digit_square()
{
     int a, b, c=0,d;
     printf("Enter the Number : ");
     scanf("%d",&a);
     while(a>0)
     {
     b=a%10;
     d=sqrt(b);
     if(d*d==b)
     {
     c=c+1;
     }
     a=a/10;
     }
     printf("%d",c);
}

int main()
{
    disp_single_digit_square();
}
