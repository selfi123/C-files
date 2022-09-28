#include<stdio.h>
int main()
{
FILE* fp;
fp=fopen("text.txt","r");
char s[500];
if(fp!=NULL)
{
 while((s=fgetc(fp))!=EOF)
 {
 printf("%c",s);
  }
 }
 else
  printf("File open unsuccesful");
fclose(fp);  
  return 0;
}
