// A C program to copy a string to other string
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char str[50], s[50];
 printf("Enter a string to copy in another string:  ");
 fgets(str,50,stdin);
 printf("\n%s",str);   // print the elements of str[] string
 for(i=0;str[i];i++)
 {
  s[i]=str[i];    // assigning a string from str[] to s[]
 }
 printf("\n%s",s); // After coping the elements in s[] string
 return 0;
}
