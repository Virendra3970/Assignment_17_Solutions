//A c program to print a string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
 int i,index=0; char str[50];
 printf("Enter a string to print in reverse order: ");
 fgets(str,50,stdin);
 for(i=0;str[i];i++)
   index++;
 printf("\nReverse ordre of given string: ");
 for(i=index-1;i>=0;i--)
   printf("%c",str[i]);
   
 return 0;
}

