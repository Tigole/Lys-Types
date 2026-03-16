#include <gtest/gtest.h>

#include <cstdint>

#include "lys-vec2-trait.hpp"

struct SimpleVec2
{
    int x;
    int y;
};

TEST(Vec2Trait, SimpleStruct)
{
    SimpleVec2 vec = lys::Vec2Trait<SimpleVec2>::Construct<int>(22, 34);

    EXPECT_EQ(vec.x, 22);
    EXPECT_EQ(vec.y, 34);
    EXPECT_EQ(lys::Vec2Trait<SimpleVec2>::x<int>(vec), 22);
    EXPECT_EQ(lys::Vec2Trait<SimpleVec2>::y<int>(vec), 34);

    lys::Vec2Trait<SimpleVec2>::x<int>(vec) = 4;
    EXPECT_EQ(vec.x, 4);
    EXPECT_EQ(lys::Vec2Trait<SimpleVec2>::x<int>(vec), 4);

    lys::Vec2Trait<SimpleVec2>::y<int>(vec) = 56;
    EXPECT_EQ(vec.y, 56);
    EXPECT_EQ(lys::Vec2Trait<SimpleVec2>::y<int>(vec), 56);
}
