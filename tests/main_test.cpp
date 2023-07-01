#include <gtest/gtest.h>
#include "../src/rpc_lib/rpc_lib.h"

TEST(rpc_lib, compute_choice_index_rock) {
    int rockIndex = compute_choice_index("rock");
    ASSERT_EQ(rockIndex, 0);
}

TEST(rpc_lib, compute_choice_index_paper) {
    int paperIndex = compute_choice_index("paper");
    ASSERT_EQ(paperIndex, 1);
}

TEST(rpc_lib, compute_choice_index_scissors) {
    int scissorsIndex = compute_choice_index("scissors");
    ASSERT_EQ(scissorsIndex, 2);
}

TEST(rpc_lib, compute_result_win) {
    string win;

    win = compute_result(1, 0);
    ASSERT_EQ(win, "Win!");

    win = compute_result(2, 1);
    ASSERT_EQ(win, "Win!");

    win = compute_result(0, 2);
    ASSERT_EQ(win, "Win!");
}

TEST(rpc_lib, compute_result_loss) {
    string loss;

    loss = compute_result(0, 1);
    ASSERT_EQ(loss, "Loss!");

    loss = compute_result(1, 2);
    ASSERT_EQ(loss, "Loss!");

    loss = compute_result(2, 0);
    ASSERT_EQ(loss, "Loss!");
}

TEST(rpc_lib, compute_result_draw) {
    string draw;

    draw = compute_result(0, 0);
    ASSERT_EQ(draw, "Draw!");

    draw = compute_result(1, 1);
    ASSERT_EQ(draw, "Draw!");

    draw = compute_result(2, 2);
    ASSERT_EQ(draw, "Draw!");
}
