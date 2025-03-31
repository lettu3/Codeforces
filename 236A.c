//gcc -Wall -std=c99 236A.c -o 236A
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define INPUT_SIZE 101
#define MAX_CHARS 256

void get_input(char input[INPUT_SIZE]){
    fscanf(stdin, " %s", input);
};

bool solve(char arr[INPUT_SIZE]){
    bool seen[MAX_CHARS] = {false};
    int u_i = 0;
    for (int i = 0; i < INPUT_SIZE; i++){
        if (arr[i] == '\0') break;
        if (!(seen[(unsigned char)arr[i]])){ //cast char to ASCII range
            seen[(unsigned char)arr[i]] = true;
            u_i++;
        } 
    }
    return (u_i % 2 == 0);
};

int main (){
    char input[INPUT_SIZE];
    get_input(input);
    bool solution = solve(input);
    solution ? fprintf(stdout, "CHAT WITH HER!\n") : fprintf(stdout, "IGNORE HIM!\n");
    return 0;
}