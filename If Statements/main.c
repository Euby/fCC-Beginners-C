#include<stdio.h>
#include<stdlib.h>

int max(int x, int y, int z) {
    int result;
    if(x >= y && x >= z) {
        result = x;
    } else if(y >= x && y >= z) {
        result = y;
    } else {
        result = z;
    }
    return result;
}

int main(void) {

    if(3 > 2 || 2 > 5) {
        printf("Yep cock");
    }

    printf("%d", max(10, 27, 5));

    return 0;
}
