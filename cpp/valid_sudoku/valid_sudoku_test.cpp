#include "valid_sudoku.hpp"
#include "gtest/gtest.h"

TEST(ValidSudoku, checkRowValid){
    ValidSudoku testObject;
    vector<char> testCase1 = {'1', '.', '1'};
    vector<char> testCase2 = {'1', '.', '2'};
    vector<char> testCase3 = {'1', '3', '3'};
    vector<char> testCase4 = {'.', '.', '.'};

    EXPECT_FALSE(testObject.isRowValid(testCase1));
    EXPECT_TRUE(testObject.isRowValid(testCase2));
    EXPECT_FALSE(testObject.isRowValid(testCase3));
    EXPECT_TRUE(testObject.isRowValid(testCase4));
}

TEST(ValidSudoku, checkGetColumn){
    ValidSudoku testObject;
    vector<vector<char>> testCase1 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    vector<char> resultCase1 = {'5','6','.','8','4','7','.','.','.'};
    vector<char> output;

    testObject.getColumn(testCase1, output, 0);

    EXPECT_EQ(output, resultCase1);
}

TEST(ValidSudoku, checkGetGrid){
    ValidSudoku testObject;
    vector<vector<char>> testCase1 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    vector<char> resultCase1 = {'.','6','.','8','.','3','.','2','.'};
    vector<char> output;

    testObject.getGrid(testCase1, output, pair<int, int>{1, 1});

    EXPECT_EQ(output, resultCase1);
}

TEST(ValidSudoku, checkSudokuValid){
    ValidSudoku testObject;
    vector<vector<char>> testCase1 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    vector<vector<char>> testCase2 = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    EXPECT_TRUE(testObject.isValidSudoku(testCase1));
    EXPECT_FALSE(testObject.isValidSudoku(testCase2));
}