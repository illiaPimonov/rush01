#include "rush01.h"

int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	clues[CLUE_COUNT];

	if (argc != 2 || !parse_input(argv[1], clues))
	{
		print_error();
		return (1);
	}
	init_grid(grid);
	if (!solve(grid, clues, 0))
	{
		print_error();
		return (1);
	}
	print_grid(grid);
	return (0);
}