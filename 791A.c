#include <stdlib.h>
#include <stdio.h>

void print_solution(int n){
    fprintf(stdout, "%i\n", n);
    return;
}


void get_input(int * a, int *b){
    fscanf(stdin, " %i %i", a, b);
    return;
};


int solve (int a, int b){
    int s = 0;
    while (a <= b){
        a = 3 * a;
        b = 2 * b;
        s++;
    }

    return s;
};

int main(){
    int a, b;
    get_input(&a, &b);
    int solution = solve(a, b);
    print_solution(solution);
    return 0;
};