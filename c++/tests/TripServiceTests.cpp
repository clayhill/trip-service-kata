#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{
using namespace ::testing;

TEST(sample_test_case, sample_test)
{
    EXPECT_THAT(1, Eq(1));
}
}  // namespace
