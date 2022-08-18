//A C progrma to covert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char str[50];
 printf("Enter a string to convert in uppercase: ");
 fgets(str,50,stdin);
 for(i=0;str[i];i++)
 {
  if(str[i]>='a' && str[i]<='z')
     str[i]=str[i]-32;
 }
 printf("String change into uppercase: %s",str);
 return 0;
}
