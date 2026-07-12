#include <unistd.h>
#include "rush01.h"

void init_grid(int grid[SIZE][SIZE])
{
 int row;
 int col;

 row = 0;
 while (row < SIZE)
 {
  col = 0;
  while (col < SIZE)
  {
   grid[row][col] = 0;
   col++;
  }
  row++;
 }
}

void print_grid(int grid[SIZE][SIZE])
{
 int  row;
 int  col;
 char number;

 row = 0;
 while (row < SIZE)
 {
  col = 0;
  while (col < SIZE)
  {
   number = grid[row][col] + '0';
   write(1, &number, 1);
   if (col != SIZE - 1)
    write(1, " ", 1);
   col++;
  }
  write(1, "\n", 1);
  row++;
 }
}

void print_error(void)
{
 write(1, "Error\n", 6);
}