//A C program to sort a given string in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,index=0;
 char str[100000],ch;
 printf("Enter a string: ");
 fgets(str,100000,stdin);
 for(i=0;str[i];i++)
    index++;
 for(i=0;i<index-1;i++)
 {
  for(j=i+1;j<index;j++)
  {
   if(str[i]<str[j])
   {
    ch=str[i];
    str[i]=str[j];
    str[j]=ch;
   }
  }
 }
 printf("\n%s",str);
 return 0;
}
