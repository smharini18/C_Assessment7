#include <stdio.h>
void disp_reverse_number()
{
    int a, b;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    printf("%d",b);
    }
}

int main()
{
    disp_reverse_number();
}
