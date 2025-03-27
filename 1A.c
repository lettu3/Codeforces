//gcc -Wall -std=c99 1A.c -o 1A
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void get_input(int * n, int * m, int * a){
    fscanf(stdin, "%i %i %i", n, m, a);
    return;
};

int solve (int n, int m, int a){
    float x = (float)n/a;
    float y = (float)m/a;
    int res = (int)ceil(x) * (int)ceil(y);
    return res;
};

int main(){
    int n, m, a;
    get_input(&n, &m, &a);
    int solution = solve(n, m, a);
    fprintf(stdout, "%i\n", solution);
    return 0;
}