#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\nEnter The Value Of Numbers a and b:",a,b);
scanf("%d%d",&a,&b);
if(a>b)
{
printf("\na is greater");
}
else if(a==b)
{
printf("\nBoth the numbers are equal");
}
else
{
printf("\nb is greater");
}
getch();
}