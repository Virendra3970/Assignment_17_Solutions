// A program in C to count the occurance of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
 int i, count=0;
 char str[40], ch;
 printf("Enter a string:  ");
 fgets(str, 40, stdin);
 printf("Enter a character to find in given string: ");
 scanf("%c",&ch);
 for(i=0;str[i];i++)
  if(str[i]==ch||str[i]==ch+32||str[i]==ch-32)
    count++;
 printf("Total no of %c is %d",ch,count);
 return 0;
}
