#include "rush01.h"

int	can_place(int grid[SIZE][SIZE], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == value)
			return (0);
		if (grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

static int	try_value(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int position, int value)
{
	int	row;
	int	col;

	row = position / SIZE;
	col = position % SIZE;
	if (!can_place(grid, row, col, value))
		return (0);
	grid[row][col] = value;
	if (col == SIZE - 1 && !check_row(grid, clues, row))
	{
		grid[row][col] = 0;
		return (0);
	}
	if (row == SIZE - 1 && !check_col(grid, clues, col))
	{
		grid[row][col] = 0;
		return (0);
	}
	if (solve(grid, clues, position + 1))
		return (1);
	grid[row][col] = 0;
	return (0);
}

int	solve(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int position)
{
	int	value;

	if (position == SIZE * SIZE)
		return (1);
	value = 1;
	while (value <= SIZE)
	{
		if (try_value(grid, clues, position, value))
			return (1);
		value++;
	}
	return (0);
}