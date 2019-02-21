#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,s=0,p,i;
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%10;
s=(s*10)+m;
n=n/10;
}
printf("%d",s);
return 0;
getch();
}
