#include <stdio.h>
void count_total_digits()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    c=c+1;
    }
    printf("%d",c);
}

int main()
{
    count_total_digits();
}
