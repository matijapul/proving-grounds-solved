cc_library (
    name = "TwoSumLib",
    hdrs = ["two_sum.hpp"],
)

cc_test(
    name = "TwoSumTest",
    srcs = glob(["**/*.cpp"]),
    deps = [
        ":TwoSumLib",
        "@googletest//:gtest_main",
    ],
)