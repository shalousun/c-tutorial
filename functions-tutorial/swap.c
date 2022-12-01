//
// Created by TCLDUSER on 2022/12/1.
//

#include "stdio.h"

void interchange(int *u,int *v); //函数原型

int main(void ) {
    int x =5,y = 10;

    interchange(&x,&y);

    printf("Now x = %d, y = %d",x,y);
}

void interchange(int *u,int *v) {
    int temp = 0;
    temp = *u;
    *u = *v;
    *v = temp;
}
