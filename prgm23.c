#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter the value of x and y");
scanf("%d %d",&x,&y);
while(x!=y)
{
if(x>y)
{
x=x-y;
}
else
{
y=y-x;
}
}
printf("%d",x);
getch();
}
