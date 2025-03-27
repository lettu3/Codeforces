//gcc -Wall -std=c99 158A.c -o 158A
#include <stdio.h>
#include <stdlib.h>

void get_input(int * n, int * k){
    fscanf(stdin, " %i %i", n, k);
    return;
}

void get_scores(int n, int scores[n]){
    for (int i = 0; i < n; i++){
        fscanf(stdin, " %i", &scores[i]);
    }
    return;
};

//check score > 0;
int solve (int n, int k, int arr[n]){
    int count = 0;
    int k_score = arr[k-1];
    for (int i = n-1; i > -1; --i){
        if (arr[i] > 0 && arr[i] >= k_score){
            count++;
        }
    }
    return count;
};

int main (){
    int n, k;
    get_input(&n, &k);
    int scores[n];
    get_scores(n, scores);
    int solution = solve(n, k, scores);
    fprintf(stdout, "%i", solution);
    return 0;
}