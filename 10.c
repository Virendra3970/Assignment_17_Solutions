// A C program to count the frequency of each character in a given string
#include<stdio.h>
#include<string.h>
int main()
{
 int i, freq[100000];
 char str[100000];
 printf("Enter a string: ");
 fgets(str,100000,stdin);
 for(i=0;str[i];i++)
     freq[str[i]]++;
 for(i=0;i<100000;i++)
 {
  if(freq[i]!=32 && freq[i]!=0)
    printf("\n %c => %d",i,freq[i]);
 }
 return 0;
}
