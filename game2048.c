#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// CODE: Inlcude necessary librar(y/ies)

int main() {
    srand(time(NULL)); // set seed to NULL for randomness from time.h
    // CODE: if necessary

    int grid[4][4];

    int x;
    int y;
    int num;

    for (int i; i>=1; i++){
        x = rand() % 4;
        y = rand() % 4;
        if (i == 1){
            num = (rand()%2+1)*2; //generate a 2 or a 4
        }else{
            num = 2;
        }
    }

    //loop for moving across array positively
    for (int y; y<4; y++){
        for (int x; x<4; x++){
            if (grid[x][y] == grid[x+1][y]){
                grid[x][y] = 0;
                grid[x+1][y] = (grid[x+1][y])*2;
                x+1;
            }
        }
        //loop to push everything to positive side
        for (int x; x<4 ; x++){
            if(grid[x][y] != 0 && grid[x+1][y] == 0){
                grid[x+1][y] = grid[x][y];
                grid[x][y] = 0;
            }
        }
    }
    //loop for moving across array negatively
    for (int y=3; y>=0; y--){
        for (int x=3; x>=0; x--){
            if (grid[x][y] == grid[x-1][y]){
                grid[x][y] = 0;
                grid[x-1][y] = (grid[x-1][y])*2;
                x-1;
            }
        }
        //loop to push everything to negative side
        for (int x = 3; x>=0 ; x--){
            if(grid[x][y] != 0 && grid[x-1][y] == 0){
                grid[x-1][y] = grid[x][y];
                grid[x][y] = 0;
            }
        }
    }

    while (1) {
        // CODE: here we only call the functions
        // print the board in every iteration
        // create a function to check if the game is over
        // call getch_unix(), if the return is 'q' quit the game
        /// if not send it your game logic
    }
    return 0;
}

int[][] negmvmnt(int grid[][],int direc1, int direc2){
    for (direc1; direc1<4; direc1++){
        for (direc2; direc2<4; direc2++){
            if (grid[direc2][direc1] == grid[direc2][direc1+1]){
                grid[direc2][direc1] = 0;
                grid[direc2][direc1+1] = (grid[direc2][y+1])*2;
            }
        }
    }
}

int[][] posmvmnt(int grid[][]){
    for (direc1; direc1<3; direc1--){
        for (direc2; direc2<3; direc2--){
            if (grid[direc2][direc1] == grid[direc2][direc1-1]){
                grid[direc2][direc1] = 0;
                grid[direc2][direc1-1] = (grid[direc2][y-1])*2;
            }
        }
    }
}