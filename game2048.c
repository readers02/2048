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

    //func for moving across array sideways
    for (int y; y<4; y++){

    }
    //func for moving across array vertically


    while (1) {
        // CODE: here we only call the functions
        // print the board in every iteration
        // create a function to check if the game is over
        // call getch_unix(), if the return is 'q' quit the game
        /// if not send it your game logic
    }
    return 0;
}

int[][] negmvmnt(int grid[][]){

}

int[][] posmvmnt(int grid[][]){

}