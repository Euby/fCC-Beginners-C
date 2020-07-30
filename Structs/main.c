#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{

    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(void){

    struct Student student1;
    student1.age = 18;
    student1.gpa = 3.2;
    strcpy(student1.name, "Christopher Euabanks");
    strcpy(student1.major, "Computer Science");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 3.8;
    strcpy(student2.name, "Yeetboi 2000");
    strcpy(student2.major, "Music");

    printf("%s has a %f GPA.\n", student1.name, student1.gpa);

    printf("%s has a %f GPA.\n", student2.name, student2.gpa);

    return 0;
}
