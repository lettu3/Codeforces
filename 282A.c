//gcc -Wall -std=c99 282A.c -o 282A

#include <stdlib.h>
#include <stdio.h>

void get_input_n(int * n){
    fscanf(stdin, "%i", n);
    return;
};

int solve(int n, int initial){
    int res = initial;
    char operation[3+1];
    operation[3] = '\0';
    for (int i = 0; i < n; i++){
        fscanf(stdin," %c%c%c", &operation[0], &operation[1], &operation[2]);
        if (operation[0] == '+' || operation[2] == '+'){
            res += 1;
        }
        else{
            res -=1;
        }
    }
    return res;
}

int main (){
    int n;
    get_input_n(&n);
    int solution = 0;
    solution = solve(n, 0);
    fprintf(stdout, "%i\n", solution);
    return 0;
}