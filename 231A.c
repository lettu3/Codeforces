//gcc -Wall -std=c99 231A.c -o 231 

#include <stdlib.h>
#include <stdio.h>

void get_input_n(int * n){
    fscanf(stdin, "%i", n);
    return;
};


void get_matrix(int row, int column, unsigned int arr[row][column]){
    for (int i = 0; i < row; i++){
        fscanf(stdin,"%u %u %u", &arr[i][0], &arr[i][1], &arr[i][2]); 
    }

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
    solution = solve(n, 3, array);
    fprintf(stdout, "%i\n", solution);
    return 0;                                                                  
}