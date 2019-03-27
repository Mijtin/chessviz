#include <stdlib.h>
#include <stdio.h>
const int Height = 8;
const int Width=8;
char** board;
void InitBoard();
void FillBoard();
void PrintBoard();
void ClearBoard();
int main()
{
    InitBoard();
    
}
void InitBoard()
{
    board = (char**)malloc(Height * sizeof(char*));
    for (int i = 0; i < Height; i++) {
        board[i] = (char*)malloc(Width * sizeof(char));
        for (int j = 0; j < Width; j++) {
            board[i][j] = ' ';
        }; };
    FillBoard();
    PrintBoard();
    ClearBoard();
}
void PrintBoard()
{
    for (int i = 0; i < Height; i++) {
        printf(" %d ", i + 1);
        for (int j = 0; j < Width; j++) {
            printf("[ %c ]", board[i][j]);
        };
        printf("\n\n");
    };
    printf(" ");
    for (int i = 0; i < Width; i++) {
        printf("    %c", 'a' + i);
    }
    printf("\n");
}
void FillBoard()
{
    for (int j = 0; j < Width; j++) {
        board[1][j] = 'P';
    };
    for (int j = 0; j < Width; j++) {
        board[6][j] = 'p';
    };
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'Q';
    board[0][4] = 'K';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';
    board[7][0] = 'r';
    board[7][1] = 'n';
    board[7][2] = 'b';
    board[7][3] = 'q';
    board[7][4] = 'k';
    board[7][5] = 'b';
    board[7][6] = 'n';
    board[7][7] = 'r';
}
void ClearBoard()
{
    for (int i = 0; i < Height; i++) {
        free(board[i]);
    }
    free(board);
    board = NULL;
}
