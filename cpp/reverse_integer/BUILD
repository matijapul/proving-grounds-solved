cc_library(
    name = "ReverseIntegerLib",
    hdrs = ["reverse_integer.hpp"],
)

cc_test(
    name = "ReverseIntegerTest",
    srcs = glob(["**/*.cpp"]),
    deps = [
        ":ReverseIntegerLib",
        "@googletest//:gtest_main",
    ],
)