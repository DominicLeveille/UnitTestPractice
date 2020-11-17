/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("RaceCar");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_hard_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("MayaMoodyBabyDoomAYam");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_descending)
{
    Practice obj;
	int a, b ,c;
	a = 1;
	b = 2;
	c = 3;
    bool actual = obj.sortDescending(a, b, c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_medium_descending)
{
    Practice obj;
    int a, b ,c;
	a = 1;
	b = 2;
	c = 3;
    bool actual = obj.sortDescending(c, b, a);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_descending)
{
    Practice obj;
    int a, b ,c;
	a = 2;
	b = 2;
	c = 2;
    bool actual = obj.sortDescending(c, b, a);
    ASSERT_FALSE(actual);
}