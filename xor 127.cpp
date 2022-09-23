#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char str[]="Hello World";
char str1[1];
char str2[2];
char str3[3];
int i,len;
len = strlen(str);
for(i=0;i<len;i++)
{
str1[i] = str[i]&127;
printf("%c",str1[i]);
}
printf("\n");
for(i=0;i<len;i++)
{
str3[i] = str2[i]^127;
printf("%c",str3[i]);
}
printf("\n");
return 0;
} 
