//gcc -Wall -std=c99 1A.c -o 1A
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void get_input(long long int * n, long long int * m, long long int * a){
    fscanf(stdin, "%lli %lli %lli", n, m, a);
    return;
};

long long int solve (long long int n, long long int m, long long int a){
    long long int x, y;
    x = n / a;
    y = m / a;
    if (n % a != 0){
        x++;
    }
    if (m % a != 0){
        y++;
    }
    return x * y;
};

int main(){
    long long int n, m, a;
    get_input(&n, &m, &a);
    long long int solution = solve(n, m, a);
    fprintf(stdout, "%lli\n", solution);
    return 0;
}