#include <stdio.h>
#include<conio.h>
int main()
{
int n, reversedInteger = 0, remainder, originalInteger;
printf("Enter an integer: ");
scanf("%d", &n);
originalInteger = n;
{
 remainder = n%10;
 reversedInteger = reversedInteger*10 + remainder;
 n /= 10;
 }
if (originalInteger == reversedInteger)
printf("%d is a palindrome.", originalInteger);
else
printf("%d is not a palindrome.", originalInteger);
return 0;
getch();
}
