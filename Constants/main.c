#include<stdio.h>
#include<stdlib.h>

int main(void) {

    const int FAV_NUM = 6;

    printf("%d", FAV_NUM);

    /*
        This won't work, FAV_NUM is a constant so it can't be changed.
        error: assignment of read-only variable 'FAV_NUM'
    FAV_NUM = 8;
    
    printf("%d", FAV_NUM);
    */

    // These are also technically constants.
    printf("Hello");
    printf("%d", 90);

    return 0;
}
