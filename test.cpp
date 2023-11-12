#include <typeinfo>
#include <gtest/gtest.h>
#include "gs.h"

// Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.
TEST(TypeMatch, CheckTypeMatch) {
    EXPECT_EQ(typeid(F), typeid(u[0][0])) << "The types of F and u are not match";
    EXPECT_EQ(typeid(k), typeid(v[0][0])) << "The types of k and v are not match";
}

TEST(GridSizeTest, SameSize) {
    bool rows = (u.size(), v.size());

    // If the number of rows is the same, check each row's size is right.
    if(rows)
    {
        for (size_t i = 0; i < u.size(); ++i) {
            EXPECT_EQ(u[i].size(), v[i].size()) << "Row" << i << "has different sizes in u and v.";
        }
    }
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

