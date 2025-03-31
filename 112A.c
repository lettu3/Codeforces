//gcc -Wall -std=c99 112A.c -o 112A
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define LENGTH 101

void get_input(int length, char str1[length], char str2[length]){
    fscanf(stdin, " %s", str1);
    fscanf(stdin, " %s", str2);
    return;
};

int solve (int str_len, char str1[str_len], char str2[str_len]){
    int str1_s = 0;
    int str2_s = 0;
    int solution = 0;
    unsigned char s1_a, s2_a;
    //solution
    for (int i = 0; i < str_len; i++){
        if (str1[i] == '\0') break;
        s1_a = (unsigned char)tolower(str1[i]);
        s2_a = (unsigned char)tolower(str2[i]);
        str1_s += s1_a;
        str2_s += s2_a;
        if (s1_a != s2_a) break;
    }

    if (str1_s < str2_s) solution = -1;
    else if (str1_s > str2_s) solution = 1;
    return solution;
};

int main(){
    char str1[LENGTH];
    char str2[LENGTH];
    get_input(LENGTH, str1, str2);
    int solution = solve(LENGTH, str1, str2);
    fprintf(stdout, "%i\n", solution);
    return 0;
};