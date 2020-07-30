#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double cube(double x) {
    // return also exits the function.
    return pow(x, 3);
}

int main(void) {

    printf("%f", cube(5.4));

    return 0;
}
