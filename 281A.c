#include <stdlib.h>
#include <stdio.h>

#define STR_LEN 1001

void print_str(char str[STR_LEN]){
    for (int i = 0; i < STR_LEN; i++){
        if (str[i] == '\0') break;
        fprintf(stdout, "%c", str[i]);
    }
    fprintf(stdout, "\n");
};


void get_input(char str[STR_LEN]){
    fscanf(stdin, " %s", str);
};


void solve(char str[STR_LEN]){
    str[0] = (str[0] >= 'a' && str[0] <= 'z') ? (str[0] - 32) : str[0];
    return;
};


int main(){
    char str[STR_LEN];
    get_input(str);
    solve(str);
    print_str(str);
    return 0;
}