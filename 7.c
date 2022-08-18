// A C progrma to count total number of alphabates, digits and special characters
#include<stdio.h>
#include<string.h>
int main()
{
 int i, Alpha_Count=0, Digit_Count=0, Special_Count=0;
 char str[50];
 printf("\nEnter a string: ");
 fgets(str,50,stdin);
 printf("\n%s",str);
 for(i=0;str[i];i++)
 {
  if(str[i]>='A' && str[i]<='Z')
     Alpha_Count++;
  else if(str[i]>='a' && str[i]<='z')
     Alpha_Count++;
  else if(str[i]>='0' && str[i]<='9')
     Digit_Count++;
  else
     Special_Count++;
 }
 printf("\nTotal no of Alphabates in given string is %d ",Alpha_Count);
 printf("\nTotal no of Digits in given string is %d ",Digit_Count);
 printf("\nTotal no of Special characters in given string is %d ",Special_Count);
 return 0;
}

