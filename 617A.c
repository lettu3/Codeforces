#include <stdlib.h>
#include <stdio.h>

void print_solution(int n){
    fprintf(stdout, "%i\n", n);
    return;
}

void get_input(int * n){
    fscanf(stdin, " %i", n);
    return;
}

int solve (int x){
    int steps =  0;
    while (x > 0){
        if (x >= 5) x -= 5;
        else if (x >= 4) x -= 4;
        else if (x >= 3) x -= 3;
        else if (x >= 2) x -= 2;
        else if (x >= 1) x -= 1;
        steps++;
    }
    return steps;
}

int main(){
    int x;
    get_input(&x);
    int solution = solve(x);
    print_solution(solution);
    return 0;
};