//
// Created by TCLDUSER on 2022/12/2.
//

#include "stdio.h"
#include "string.h"

char *s_gets(char *st, int n);

#define MAXTITL 41 /* 书名的最大长度 +1 */
#define MAXMUTL 31 /* 作者姓名的最大长度*/

struct book {
    char title[MAXTITL];
    char author[MAXMUTL];
    float value;
};

int main(void) {
    struct book library; /*把library声明为book类型的变量*/
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXMUTL); /*访问title部分*/
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); //
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}