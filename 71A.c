//gcc -Wall -std=c99 71A.c -o 71A

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define MAX_INPUT 100

//O(1) heh
int intDigits (int n){
    if (n < 0) n = (n == INT_MIN) ? INT_MAX : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    return 10;
}


void get_n(int * n){
    fscanf(stdin, "%i\n", n);
    return;
};

void get_input(int n, char input[n][MAX_INPUT+1]){
    for (int i = 0; i < n; i++){
        fscanf(stdin, " %s", &input[i][0]);
    }
    return;
}

void print_input(int n, int m, char input[n][MAX_INPUT+1]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (input[i][j] != '\0'){
                fprintf(stdout, "%c", input[i][j]);
            }
            else{
                fprintf(stdout,"\n");
                break;
            }
        }
    }
}

void solve(int n, int m, char arr[n][m]){
    int current;

    for (int i = 0; i < n; i++){
        current = 0;
        for (int j = 0; j < m; j++){
            if (arr[i][j] != '\0'){
                current++;
            }
            else{
                break;
            }
        }
        if (current > 10){
            int digits = intDigits(current - 2);
            char abbreviation[digits];
            sprintf(abbreviation, "%d", current - 2);
            for (int k = 0; k < digits; k++){
                arr[i][k+1] = abbreviation[k];
            }
            arr[i][digits+1] = arr[i][current-1];
            arr[i][digits+2] = '\0';          
        }
    }
    return;
};

int main(){
    int n;
    get_n(&n);
    char input[n][MAX_INPUT + 1];
    get_input(n, input);
    solve(n, MAX_INPUT+1, input);
    print_input(n, MAX_INPUT+1, input);
    return 0;
}
