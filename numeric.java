import java.io.*;
import java.util.*;
class numeric{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
String s=sc.next();
int l=s.length();
int i,count=0;
int a[]=new int[50];
char[] ch=new char[40];
for(i=0;i<l;i++)
{
ch[i]=s.charAt(i);
if(ch[i]>=65&&ch[i]<=92||ch[i]>=97&&ch[i]<=122)
{
i++;
}
else
{
a[i]=ch[i];
count++;
}
}
if(count==l)
{
System.out.print("yes");
}
else{
System.out.print("no");
}
}
}
