#include<stdio.h>
void disp_assend(int);
int main()
{
disp_assend(1);
}
void disp_assend(int x)
{
int sum=0;
loop:
if(x<=5)
{
sum=sum+x;
x=x+1;
goto loop;
}
printf("%d",sum);
}
