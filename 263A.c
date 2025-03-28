//gcc -Wall -std=c99 263A.c -o 263A
#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

struct position_s {
    int i;
    int j;
};

void get_matrix (int n, int m[SIZE][SIZE], struct position_s * position){
    for (int i = 0; i < n; i++){
        fscanf(stdin, " %i %i %i %i %i", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);
        for (int j = 0; j <  n; j++){
            if (m[i][j] == 1){
                position->i = i;
                position->j = j;
            }
        }
    }
};

int solve (int n, int ma[SIZE][SIZE], struct position_s * position){
    int center = 2;
    //already centered
    if (position->i == center && position->j == center) 
        return 0;
    //center column
    if (position->i == center && position->j != center) 
        return (position->j > center ? 
                position->j - center : 
                center - position->j);
    //center row
    if (position->j == center && position->i != center) 
        return (position->i > center ? 
                position->i - center : 
                center - position->i);
    //else
    int a = position->i > center ? 
            position->i - center : 
            center - position->i;
    int b = position->j > center ? 
            position->j - center : 
            center - position->j;
    return a+b;
}

int main (){
    int matrix[SIZE][SIZE];
    struct position_s position;
    get_matrix(SIZE, matrix, &position);
    int solution = solve(SIZE, matrix, &position);
    fprintf(stdout, "%i\n", solution);
    return 0;
};