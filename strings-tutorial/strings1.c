//
// Created by TCLDUSER on 2023/1/13.
//

# include "stdio.h"
#define MSG "I am a symbolic string constants"
#define MAXLENGTH 81

int main(void ){
    char words[MAXLENGTH] = "I am a string in an array";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings"); // puts也属于输入输出
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    return 0;
}