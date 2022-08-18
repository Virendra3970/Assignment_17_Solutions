//A c program to calculate the length of a given string.
#include<stdio.h>
#include<string.h>
int main()
{
 int i,count=0;
 char str[30];
 printf("Enter a string to calculate the length: ");
 fgets(str,30,stdin);      // fgets() is a pre-defined function which is defined in <string.h> header file.
 for(i=0;str[i];i++)
    count++;
 printf("Length of the given string is %d",count);
 return 0;
}
