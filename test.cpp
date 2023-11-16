#include <typeinfo>
#include <gtest/gtest.h>
#include "gs.h"

// Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.
TEST(TypeMatch, CheckTypeMatch) {
    init();
    EXPECT_EQ(typeid(F), typeid(u[0][0])) << "The types of F and u are not match";
    EXPECT_EQ(typeid(k), typeid(v[0][0])) << "The types of k and v are not match";
}

TEST(GridSizeTest, SameSize) {
    init();
    EXPECT_EQ(u.size(), v.size()) << "Col of u and v has different size";

    for (size_t i = 0; i < u.size(); ++i) {
        EXPECT_EQ(u[i].size(), v[i].size()) << "Row of u and v" << i << "has different size";
    }
}

TEST(SimulationTest, HandlesZeroInput) {
    init();
    std::vector<std::vector<double>>u(width, std::vector<double>(height, 0.0));
    std::vector<std::vector<double>>v(width, std::vector<double>(height, 0.0));


    // Run the simulation
    simulateStep();

    // Check that u and v are still zero after simulation
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            EXPECT_DOUBLE_EQ(0.0, u[i][j]) << "u[" << i << "][" << j << "] is not zero.";
            EXPECT_DOUBLE_EQ(0.0, v[i][j]) << "v[" << i << "][" << j << "] is not zero.";
        }
    }
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

