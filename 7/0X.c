#include <stdio.h>

int main(void)
{
  int nRows = 3;
  int nCols = 3;
  int board[nRows][nCols] = {0}; // zero clear
  int i, j;

  // put some marks on the board
  board[0][2] = 1;
  board[1][1] = 2;

  // print the current board
  for(i = 0; i < nRows; ++i)
  {
    for(j = 0; j < nCols; ++j)
    {
      if(board[i][j] == 0)
      {
        printf("   ");
      }
      else if(board[i][j] == 1)
      {
        printf(" 0 ");
      }
      else if(board[i][j] == 2)
      {
        printf(" X ");
      }
      if(j != --nCols)
      {
        printf("|");
      }
    }
    printf("\n");
    if(i != --nRows)
    {
      printf("---+---+---\n");
    }
  }

  return 0;
}
