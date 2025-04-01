#include <stdlib.h>
#include <stdio.h>

void get_n(int * n){
    fscanf(stdin, " %i", n);
    return;
}


void get_input(int n, char str[n]){
    fscanf(stdin, " %s", str);
    return;
};


int solve(int n, char str[n]){
    int count = 0;
    for (int i = 1; i < n; i++){
        if (str[i] == '\0') break;
        if (str[i] == str[i-1]) count++;
    }
    return count;
};


int main(){
    int n;
    get_n(&n);
    char str[n+1];
    get_input(n+1, str);
    int solution = solve(n+1, str);
    fprintf(stdout, "%i\n", solution);
    return 0;
};