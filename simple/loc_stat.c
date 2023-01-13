//
// Created by TCLDUSER on 2023/1/13.
//

#include "stdio.h"
void trystat(void );

int main(void ) {
    int count;
    for (count =1;count <=3;count++) {
        printf("here comes iteration %d:\n",count);
        trystat();
    }
}

void trystat(void ){
    int fade = 1;// 每次调用都是初始化值
    static int stay = 1;// 内存中原地不动，并不是值不动
    printf("fade=%d and stay=%d\n",fade++,stay++);
}