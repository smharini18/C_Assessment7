#include <stdio.h>
void disp_sum_all_digits()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    c=c+b;
    }
    printf("%d",c);
}

int main()
{
    disp_sum_all_digits();
}
