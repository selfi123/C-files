#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("data.txt","w");
char c;
printf("\nEnter your data and press 0 when finished");
while((c=getchar())!='0')
putc(c,fp);
fclose(fp);
fp=fopen("data.txt","r");
c=getc(fp);
while(c!=EOF)
{
c=getc(fp);
putchar(c);
}

return 0;


}
