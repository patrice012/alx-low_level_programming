#!/usr/bin/python3
"""
Test for 5-island_perimeter.py
"""

import unittest
import sys
from pathlib import Path

# Get the absolute path of the parent directory of the script
script_path = Path(__file__).resolve()
parent_directory = script_path.parent

# Add the parent directory to the sys.path so that the module can be imported
sys.path.append(str(parent_directory))

# Now use the __import__ function to import the module
island_perimeter = __import__("5-island_perimeter").island_perimeter


class TestIslandPerimeter(unittest.TestCase):
    """docstring for TestIslandPerimeter"""

    def test_alx_input(self):
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0],
        ]
        self.assertEqual(12, island_perimeter(grid))

    def test_only_0_vallues(self):
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0],
        ]
        self.assertEqual(0, island_perimeter(grid))

    def test_Grid_is_not_completely_surrounded_by_water(self):
        grid = [
            [1, 1, 1, 1],
            [1, 1, 1, 1],
            [1, 1, 1, 1],
            [1, 1, 1, 1],
        ]
        self.assertEqual(16, island_perimeter(grid))

    def test_Grid_is_completely_surrounded_by_water(self):
        grid = [
            [0, 0, 0, 0, 0, 0, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 0, 0, 0, 0, 0, 0],
        ]
        self.assertEqual(18, island_perimeter(grid))

    def test_Grid_has_more_island(self):
        grid = [
            [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
            [0, 1, 1, 1, 1, 1, 0, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 1, 1, 1, 0],
            [0, 0, 0, 0, 0, 0, 1, 1, 1, 0],
            [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        ]
        self.assertEqual(38, island_perimeter(grid))


if __name__ == "__main__":
    unittest.main(verbosity=2)
