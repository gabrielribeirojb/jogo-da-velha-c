#include "jogo_da_velha_header.h"

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
char checkWinner();
char printWinner(char);

int main(){
    char winner = ' ';
    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        playerMove();
        winner = checkWinner();

        if(winner != ' ' || checkFreeSpaces() == 0){
            break;
        }

        computerMove();
        winner = checkWinner();

        if(winner != ' ' || checkFreeSpaces() == 0){
            break;
        }
    }

   printBoard();
   printWinner(winner);

    return 0;
}
