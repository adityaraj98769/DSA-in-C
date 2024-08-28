#include<stdio.h>
#include<string.h>
struct Student {
       char name[50];
       float marks;
       int roll_no;

    }s1;
    
int main(){
    
    printf("Enter the Student name : ");
    gets(s1.name);
    printf("Enter the marks : ");
    scanf("%f",&s1.marks);
    printf("Enter the Roll number : ");
    scanf("%d",&s1.roll_no);

    printf("Student Details are given below: \n");
    printf("NAME = %s \n",s1.name);
    printf("MARKS = %f \n", s1.marks);
    printf("ROLL NO = %d \n", s1.roll_no);

    return 0;
}