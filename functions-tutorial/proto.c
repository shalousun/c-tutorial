//
// Created by TCLDUSER on 2022/12/1.
//

#include "stdio.h"

int imax(int, int); //函数原型

int main(void) {
    printf("The maxinum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    return 0;
}

int imax(int n, int m) {
    return (n > m ? n : m);
}