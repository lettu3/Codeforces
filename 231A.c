//gcc -Wall -std=c99 231A.c -o 231 

#include <stdlib.h>
#include <stdio.h>

void get_input_n(int * n){
    fprintf(stdout, "Enter the value of n: ");
    fscanf(stdin, "%i", n);
    return;
};

void get_matrix(int row, int column, unsigned int arr[row][column]){
    for (int i = 0; i < row; i++){
        fprintf(stdout, "Enter the elements of row %i: \n", i);
        for (int j = 0; j < column; j++){
            fscanf(stdin, "%u", &arr[i][j]);
        }
    }

};

void print_matrix(int row, int column, unsigned int arr[row][column]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            fprintf(stdout, "%i ", arr[i][j]);
        }
        fprintf(stdout, "\n");
    }
    return;
};

int solve(int row, int column, unsigned int arr[row][column]){
    unsigned int solutions = 0;
    unsigned int current_line = 0;
    for (int i = 0; i < row; i++){
        current_line = 0;
        for (int j = 0; j < column; j++){
            if (arr[i][j] == 1){
                current_line += 1;
            }
        }
        if (current_line > 1){
            solutions += 1;
        }

    }
    return solutions;
};


int main (int argc, char** argv){
    int n;
    int solution;
    get_input_n(&n);

    unsigned int array[n][3];

    get_matrix(n, 3, array);
    print_matrix(n, 3, array);
    
    solution = solve(n, 3, array);
    fprintf(stdout, "%i\n", solution);
    return 0;                                                                  
}