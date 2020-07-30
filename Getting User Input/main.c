#include<stdio.h>
#include<stdlib.h>

int main(void) {

    //[20] indicates 20 indexes in the array for data of the char type.
    char name[20];

    printf("Enter your name: \n");
    
    fgets(name, 20, stdin);

    printf("Your name is %s\n", name);

    double gpa;

    printf("Enter your GPA: \n");

    scanf("%lf", &gpa);

    printf("Your GPA is %f\n", gpa);

    return 0;
}
