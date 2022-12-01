//
// Created by TCLDUSER on 2022/12/1.
//

#include "stdio.h"

#define SIZE 10

int sum(int ar[],int n);

int main(void ){
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer = sum(marbles,SIZE);
    printf("Sum=%d",answer);
    return 0;
}

int sum(int ar[],int n) {
    int i;
    int total = 0;
    for(i = 0;i<n;i++) {
        total += ar[i];
    }
    return total;
}