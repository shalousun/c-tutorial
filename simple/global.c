//
// Created by TCLDUSER on 2023/1/14.
//

#include "stdio.h"
int units = 0; // 外部变量
void critic(void );
int main(void ) {
    extern int units; /*可选的重复声明*/
    printf("How many pounds to a firkin of butters\n");
    scanf("%d",&units);
    while (units != 56) {
        critic();
    }
    printf("You must have looked it up!\n");
    return 0;
}

void critic(void ) {
    printf("No luck,my friends, Try again. \n");
    scanf("%d",&units);
}