#!/usr/bin/python3
"""
Conttains function `island_perimeter`
use to find island  the perimeter
"""


def island_perimeter(grid):
    """
    Return the perimiter of an island.
    Args:
        grid(list of list): grid is a list of list of integers
    Return:
        The perimeter of the island described in grid
    Raises:
        ValueError: if `grid` is not a list of list
    """
    if type(grid) is not list:
        raise TypeError("grid must be a list")
    if not all(([type(i) == list for i in grid])):
        raise TypeError("grid's elements must be a list")

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
