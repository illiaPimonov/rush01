#ifndef RUSH01_H
# define RUSH01_H

# define SIZE 4
# define CLUE_COUNT 16

int  parse_input(char *str, int clues[CLUE_COUNT]);
void init_grid(int grid[SIZE][SIZE]);
int  can_place(int grid[SIZE][SIZE], int row, int col, int value);
int  count_row_left(int grid[SIZE][SIZE], int row);
int  count_row_right(int grid[SIZE][SIZE], int row);
int  count_col_top(int grid[SIZE][SIZE], int col);
int  count_col_bottom(int grid[SIZE][SIZE], int col);
int  check_row(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int row);
int  check_col(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int col);
int  solve(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int position);
void print_grid(int grid[SIZE][SIZE]);
void print_error(void);

#endif