#include<stdio.h>


struct Student{
    char name[50];
    int roll;
    int marks;
} student;


void get_info(char *n, int r, int m){

    printf("\nstudent info:\nstudent name: %sroll id: %d\nmarks: %d\n", n, r, m);

}

int main(){

    printf("Name:\n");
    fgets(student.name, sizeof(student.name), stdin);

    printf("enter student's roll id:\n");
    scanf("%d", &student.roll);

    printf("what is your mark:\n");
    scanf("%d", &student.marks);

    get_info(student.name, student.roll, student.marks);

    return 0;
}