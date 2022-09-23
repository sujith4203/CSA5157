#include<stdio.h>
#include<string.h>
int main()
{
  char str[20]="HelloStudent", str1[10]="", str2[10]="";
  int i, cnt1=0, cnt2=0;
  printf("Rail Fence - Encryption\n\n");
  printf("Plain Text: HelloStudent\n\n");

  for(i=0; i<strlen(str); i++)
  {
    if( i%2 == 0)
    {
      str1[cnt1++]=str[i];
    }
    else
      str2[cnt2++]=str[i];
  }
  printf("Cipher Text: %s%s",str1,str2);
  return 0;
}
