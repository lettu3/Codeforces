//gcc -Wall -std=c99 4A.c -o 4A
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void get_input(int * n){
    fscanf(stdin,"%i", n);
    return;
};

bool solve(int w){
    return ((w != 2) && (w % 2 == 0));
};

int main(){
    int w;
    get_input(&w);
    bool solution = solve(w);
    if (solution){
        fprintf(stdout,"YES\n");
    }
    else{
        fprintf(stdout, "NO\n");
    }
    return 0;
};

