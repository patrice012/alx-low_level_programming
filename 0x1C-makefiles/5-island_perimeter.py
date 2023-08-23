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
    for idx, row in enumerate(grid):
        for idx_2, value in enumerate(row):
            if value == 1:
                if idx_2 + 1 < len(row) and grid[idx][idx_2 + 1] == 0:
                    perimeter += 1

                if idx_2 - 1 >= 0 and grid[idx][idx_2 - 1] == 0:
                    perimeter += 1

                if idx - 1 >= 0 and grid[idx - 1][idx_2] == 0:
                    perimeter += 1

                if idx + 1 < len(grid) and grid[idx + 1][idx_2] == 0:
                    perimeter += 1
    return perimeter
