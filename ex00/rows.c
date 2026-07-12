#include "rush01.h"

int count_row_left(int grid[SIZE][SIZE], int row)
{
 int col;
 int max_height;
 int visible;

 col = 0;
 max_height = 0;
 visible = 0;
 while (col < SIZE)
 {
  if (grid[row][col] > max_height)
  {
   max_height = grid[row][col];
   visible++;
  }
  col++;
 }
 return (visible);
}

int count_row_right(int grid[SIZE][SIZE], int row)
{
 int col;
 int max_height;
 int visible;

 col = SIZE - 1;
 max_height = 0;
 visible = 0;
 while (col >= 0)
 {
  if (grid[row][col] > max_height)
  {
   max_height = grid[row][col];
   visible++;
  }
  col--;
 }
 return (visible);
}

int check_row(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int row)
{
 if (count_row_left(grid, row) != clues[8 + row])
  return (0);
 if (count_row_right(grid, row) != clues[12 + row])
  return (0);
 return (1);
}