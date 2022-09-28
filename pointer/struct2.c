#include<stdio.h>
void main()
{
FILE *fptr;
int id;
char name[30];
float salary;
fptr=fopen("emp.txt","w+");
/*openforwriting*/
if(fptr==NULL)
{
printf("Filedoesnotexists\n");
return;
}
printf("Entertheid\n");
scanf("%d",&id);
fprintf(fptr,"Id=%d\n",id);
printf("Enterthename\n");
scanf("%s",name);
fprintf(fptr,"Name=%s\n",name);
printf("Enterthesalary\n");
scanf("%f",&salary);
fprintf(fptr,"Salary=%.2f\n",salary);
fclose(fptr);
}
