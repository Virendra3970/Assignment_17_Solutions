//A C program to count the vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
 int i,count =0;
 char str[50];
 printf("Enter a string: ");
 fgets(str, 50, stdin);
 for(i=0;str[i];i++)
   if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
     count++;
 printf("Total no of vowels is %d",count);
 return 0;
}
