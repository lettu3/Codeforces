//gcc -Wall -std=c99 50A.c -o 50A
#include <stdlib.h>
#include <stdio.h>

void get_input(int * n, int * m){
    fscanf(stdin, " %i %i", n, m);
    return;
};

int solve (int n, int m){
    int area = n * m;
    int mod = area % 2;
    if (mod != 0) area -= mod;
    return (area/2);
};

int main (){
    int n, m;
    get_input(&n, &m);
    int solution = solve(n, m);
    fprintf(stdout, "%i\n", solution);
    return 0;
};