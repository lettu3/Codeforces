#include <stdlib.h>
#include <stdio.h>

void get_input (int * k, int * n, int * w){
    fscanf(stdin, " %i %i %i", k, n , w);
    return;
};

int solve (int k, int n, int w){
    int total_price = 0;
    for (int i = 1; i <= w; i++) total_price += (i * k);
    return (n >= total_price ? 0 : (total_price - n));
};

int main(){
    int k, n, w;
    get_input(&k, &n, &w);
    int solution = solve(k, n, w);
    fprintf(stdout, "%i\n", solution);
    return 0;
}