//
// Created by TCLDUSER on 2022/12/1.
//
#include "stdio.h"
int main(void ){
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;
    int length = sizeof (days)/sizeof (days[0]);
    for (index = 0;index < length;index++){
        printf("value=%d\n",days[index]);
    }
    return 0;
}
