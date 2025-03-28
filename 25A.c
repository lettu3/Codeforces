//gcc -Wall -std=c99 25A.c -o 25A
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void get_arr(int n, int arr[n]){
    for (int i = 0; i < n; i++){
        fscanf(stdin, " %i", &arr[i]);
    }
    return;
};

bool is_even (int a){
    return (a % 2 == 0);
}

bool not_even(int a){
    return (!is_even(a));
}

/*Complexity: O(n^2), could be improved if we sort the array first 
  (O(n log(n) with QuickSort) then just iterate over the array to find the
  unique different element (O(n)) => O(2n log(n)) = O(n log(n)))
*/
int solve(int n, int arr[n]){
    int solution = 0;
    int count = 0;

    for (int i = 0; i < n; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if (count > 1){
                break;
            }
            if (i != j){
                if (   (is_even(arr[i]) && is_even(arr[j])) 
                    || (!is_even(arr[i]) && !is_even(arr[j]))
                ) 
                count++;
            }
        }
        if (count == 0){
            solution = i+1;
        }
    }
    return solution;
};

int main(){
    int n;
    fscanf(stdin, " %i", &n);
    int arr[n];
    get_arr(n, arr);
    int solution = solve(n, arr);
    fprintf(stdout, "%i\n", solution);
    return 0;
};
