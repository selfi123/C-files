#include<stdio.h>
/*Createdastructurehere.Thenameofthestructureis*StudentData.*/
struct StudentData
{
char *stu_name;
int stu_id;
int stu_age;
};
int main()
{
/*studentisthevariableofstructureStudentData*/
struct StudentData student;
/*Assigningthevaluesofeachstructmemberhere*/
student.stu_name="Steve";
student.stu_id=1234;
student.stu_age=30;
/*Displayingthevaluesofstructmembers*/
printf("StudentNameis:%s",student.stu_name);
printf("\nStudentIdis:%d",student.stu_id);
printf("\nStudentAgeis:%d",student.stu_age);
return 0;
}
