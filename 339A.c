//gcc -Wall -std=c99 339A.c -o 339A
#include <stdlib.h>
#include <stdio.h>

void get_input(int length, char arr[length]){
    fscanf(stdin, " %s", arr);
    return;
};

void print_solution(int length, char arr[length]){
    for (int i=0; i<length; i++){
        if (arr[i] == '\0') break;
        fprintf(stdout, "%c", arr[i]);
    }
    fprintf(stdout, "\n");
    return;
};

// O(n log n) complexity merge
void merge(int length, char in[length], int left, int mid, int right){
    char aux[length];
    int j = left;
    int k = mid + 1;
    for (int i = left; i <= mid; i++){
        aux[i] = in[i];
    }
    for (int i = left; i <= right; i++){
        if (j <= mid && (k > right || aux[j] <= in[k])){
            in[i] = aux[j];
            j++;
        }
        else{
            in[i] = in[k];
            k++;
        } 
    }
};

void merge_sort_rec(int length, char in[length], int left, int right){
    int mid;
    if (right > left){
        mid = (right + left)/2;
        merge_sort_rec(length, in, left, mid);
        merge_sort_rec(length, in, mid+1, right);
        merge(length, in, left, mid, right);
    }
};

void merge_sort(int length, char in[length]){
    merge_sort_rec(length, in, 0, length-1);
};

void solve(int length, char in[length], char out[length]){
    char aux[length];
    int a_i = 0;
    for (int i = 0; i< length; i++){
        if (in[i] == '\0') break;
        if (in[i] != '+'){
            aux[a_i] = in[i];
            a_i++;
        }
    }
    char aux2[a_i];
    for (int i = 0; i < a_i; i++) aux2[i] = aux[i];
    merge_sort(a_i, aux2);

    int j = 0;
    for (int i = 0; i < length; i++){
        if (j >= a_i){
            out[i] = '\0';
            break;
        }
        if (i % 2 == 0){
            out[i] = aux2[j];
            j++;
        }
        else{
            out[i] = '+';
        }
    }
    return;
};



int main(){
    char input[101];
    char output[101];
    get_input(101, input);
    solve(101, input, output);
    print_solution(101, output);
    return 0;
}