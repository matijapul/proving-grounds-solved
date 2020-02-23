cc_library(
    name = "ValidSudokuLib",
    hdrs = ["valid_sudoku.hpp"],
)

cc_test(
    name = "ValidSudokuTest",
    srcs = glob(["**/*.cpp"]),
    deps = [
        ":ValidSudokuLib",
        "@googletest//:gtest_main",
    ],
)