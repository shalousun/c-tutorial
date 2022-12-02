//
// Created by TCLDUSER on 2022/12/2.
//

# include "stdio.h"

# define LEN 20

const char *msgs[5] = {
        " Thank you for the wonderful evening,",
        "You certainly prove that a",
        "is a special kind of guy, web must get together.",
        "over a delicious",
        "and have a few laughs"
};

struct names {
    char first[LEN];
    char last[LEN]
};

struct guy {
    struct names handles;// 嵌套结构
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void) {
    struct guy fellow = { //初始化结构体
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            68112.00
    };
    printf("Dear %s,\n\n", fellow.handles.first);
    printf("Income %f\n",fellow.income);
}