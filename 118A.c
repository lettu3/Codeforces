//gcc -Wall -std=c99 118A.c -o 118A
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define STR_LEN 101
#define OUT_LEN 201
#define ASCII_RANGE 128

void get_input (char str[STR_LEN]){
    fscanf(stdin, "%s", str);
    return;
};


char to_lowercase (char c){
    return ((c >= 'A' && c <= 'Z') ? (char)c + 32 : c);
};

void solve (char str[STR_LEN], char out[OUT_LEN]){
    bool b[ASCII_RANGE];
    for (int i = 0; i < ASCII_RANGE; i++) b[i] = true;

    b['a'] = false;
    b['o'] = false;
    b['y'] = false;
    b['e'] = false;
    b['u'] = false;
    b['i'] = false;

    int j = 0;
    for (int i = 0; i  < STR_LEN; i++){
        if (str[i] == '\0') break;
        str[i] = to_lowercase(str[i]);
        if (b[str[i]]){
            out[j] = '.';
            j++;
            out[j] = str[i];
            j++;
        }
    }
    out[j] = '\0';
    return;
};

int main(){
    char str[STR_LEN];
    get_input(str);
    char out[OUT_LEN];
    solve(str, out);
    int i = 0;
    while (i < OUT_LEN && out[i] != '\0'){
        printf("%c", out[i]);
        i++;
    }
    return 0;
};