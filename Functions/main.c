#include<stdio.h>
#include<stdlib.h>

void sayHi(char name[], int age) {

    printf("Hello, %s! You are %d.\n", name, age);
}

int main(void) {

    sayHi("Chris", 18);
    sayHi("Courtney", 18);
    sayHi("Trevor", 19);

    return 0;
}
