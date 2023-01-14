// 传递返回结构体
// Created by TCLDUSER on 2023/1/14.
//

#include "stdio.h"
#include "string.h"

#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void );
struct namect makeinfo(struct namect);

void showinfo(struct namect);

char * s_gets(char * st,int n);

int main(void ) {
    struct  namect person;

    person = getinfo();
    person = makeinfo(person);
    showinfo(person);
    return 0;
}

struct namect getinfo(void ) {
    struct namect temp = {
        "yu",
        "sun",
        20
    };
    return temp;
}

struct namect makeinfo(struct namect info) {
    info.letters = strlen(info.fname) + strlen(info.lname);
    return info;
}

void showinfo(struct namect info){
    printf("%s %s, your name contains %d letters.\n",info.fname,info.lname,info.letters);
}