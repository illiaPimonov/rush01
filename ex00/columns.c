#include "rush01.h"

int count_col_top(int grid[SIZE][SIZE], int col)
{
 int row;
 int max_height;
 int visible;

 row = 0;
 max_height = 0;
 visible = 0;
 while (row < SIZE)
 {
  if (grid[row][col] > max_height)
  {
   max_height = grid[row][col];
   visible++;
  }
  row++;
 }
 return (visible);
}

int count_col_bottom(int grid[SIZE][SIZE], int col)
{
 int row;
 int max_height;
 int visible;

 row = SIZE - 1;
 max_height = 0;
 visible = 0;
 while (row >= 0)
 {
  if (grid[row][col] > max_height)
  {
   max_height = grid[row][col];
   visible++;
  }
  row--;
 }
 return (visible);
}

int check_col(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int col)
{
 if (count_col_top(grid, col) != clues[col])
  return (0);
 if (count_col_bottom(grid, col) != clues[4 + col])
  return (0);
 return (1);
}