#include <iostream>
#include "AnyType.h"

int main()
{
	return 0;
}

/*
#include "AnyType.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
//google test class
TEST(GetTypeInt, AnyType)
{
	AnyType any = 1;
	EXPECT_EQ(1, any.GetValueInt());
}

TEST(AnyType_constructor, testing)
{
	int x = 135;
	AnyType any(x);
	EXPECT_EQ(135, any.GetValueInt());
}

TEST(AnyType_assignment, testing)
{
	int x = 135;
	AnyType any;
	any = x;
	EXPECT_EQ(135, any.GetValueInt());
}

TEST(AnyType_copy_constructor, testing)
{
	AnyType any1 = 135;
	AnyType any2 = any1;
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_assignment_operator, testing)
{
	AnyType any1 = 135;
	AnyType any2 = true;
	any2 = any1;
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_move_constructor, testing)
{
	int x = 135;
	AnyType any1(x);
	AnyType any2(std::move(any1));
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_move_assignment_operator, testing)
{
	int x = 135;
	AnyType any1(x);
	AnyType any2 = true;
	any2 = std::move(any1);
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(ExceptionType, testing)
{
	AnyType any;
	EXPECT_THROW(any.GetValueInt(), ExceptionType);
}

TEST(AnyType_assignment_1, testing)
{
	AnyType any1 = 135;
	AnyType any2 = 135;
	any1 += any2;
	EXPECT_EQ(270, any1.GetValueInt());
}

TEST(AnyType_assignment_2, testing)
{
	AnyType any1 = 135;
	AnyType any2 = 1.5;
	EXPECT_THROW(any1 += any2, ExceptionType);
}

TEST(AnyType_assignment_3, testing)
{
	AnyType any1;
	AnyType any2 = 135;
	EXPECT_THROW(any1 += any2, ExceptionType);
}

TEST(AnyType_swap_1, testing)
{
	AnyType any1 = 135;
	AnyType any2 = 1.5;
	any1.Swap(any2);
	EXPECT_EQ(1.5, any1.GetValueDouble());
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_swap_2, testing)
{
	AnyType any1 = 135;
	AnyType any2;
	any1.Swap(any2);
	EXPECT_EQ(135, any2.GetValueInt());
}
*/