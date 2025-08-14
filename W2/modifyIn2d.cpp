#include <iostream>
using namespace std;

#define SIZE 3

void modify2D(int matrix[SIZE][SIZE], int row, int col, int newValue) {
    matrix[row][col] = newValue;
}

int main() {
    int matrix[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin>> matrix[i][j];
        }
    }

    int row; 
    int col;
    int newValue;
    cin>>row;
    cin>>col;
    cin>>newValue;

    modify2D(matrix, row, col, newValue);
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

}