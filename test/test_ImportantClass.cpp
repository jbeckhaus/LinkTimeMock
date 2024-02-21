#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Dependency.h"
#include "ImportantClass.h"
#include "mock_Dependency.h"

using namespace ::testing;

class TestLinkTimeMock : public ::testing::Test {
public:
    TestLinkTimeMock() {
        MockDependency::setMock(&mock);
    }
protected:
    MockDependency mock{};
};

TEST(test_simple_thing, simeple_thing) {
    ASSERT_TRUE(1);
}

TEST_F(TestLinkTimeMock, test_get_special_int) {
    EXPECT_CALL(mock, Dependency(_));
    EXPECT_CALL(mock, getSpecialInt()).WillOnce(Return(72));

    auto sut{ImportantClass(22)};
    EXPECT_EQ(sut.calculateCoolStuff(), 22 + 72);
}

TEST_F(TestLinkTimeMock, test_get_special_string) {
    EXPECT_CALL(mock, Dependency(_));
    EXPECT_CALL(mock, getSpecialInt()).WillOnce(Return(72));
    EXPECT_CALL(mock, getSpecialString()).WillOnce(Return("WOW"));

    auto sut{ImportantClass(22)};
    auto result{sut.printCoolStuff()};
    EXPECT_EQ(result, std::string("WOW 94"));
}
