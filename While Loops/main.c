#include<stdio.h>

int main(void){

    int index = 1;

    while(index <= 5){

        printf("%d\n", index);
        index++;
    }

    do{
        
        printf("%d\n", index);
        index++;
    }while(index <= 5);

    return 0;
}
