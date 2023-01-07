#include "pch.h"
#include "../AnyType.h"
#include "../AnyType.cpp"

TEST(AnyType_constructor, AnyType)
{
	AnyType any = 135;
	EXPECT_EQ(135, any.GetValueInt());
	any = true;
	EXPECT_EQ(true, any.GetValueBool());
	any = 1.7;
	EXPECT_EQ(1.7, any.GetValueDouble());
}

TEST(AnyType_assignment, AnyType)
{
	int x = 135;
	AnyType any;
	any = x;
	EXPECT_EQ(135, any.GetValueInt());
}

TEST(AnyType_copy_constructor, AnyType)
{
	AnyType any1 = 135;
	AnyType any2 = any1;
	EXPECT_EQ(135, any1.GetValueInt());
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_assignment_operator, AnyType)
{
	AnyType any1 = 135;
	AnyType any2 = true;
	any2 = any1;
	EXPECT_EQ(135, any1.GetValueInt());
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_move_constructor, AnyType)
{
	int x = 135;
	AnyType any1(x);
	AnyType any2(std::move(any1));
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(AnyType_move_assignment_operator, AnyType)
{
	int x = 135;
	AnyType any1(x);
	AnyType any2 = true;
	any2 = std::move(any1);
	EXPECT_EQ(135, any2.GetValueInt());
}

TEST(ExceptionType, AnyType)
{
	AnyType any;
	EXPECT_THROW(any.GetValueInt(), ExceptionType);
}

TEST(AnyType_assignment_1, AnyType)
{
	AnyType any1 = 135;
	AnyType any2 = 135;
	any1 += any2;
	EXPECT_EQ(270, any1.GetValueInt());
}

TEST(AnyType_assignment_2, AnyType)
{
	AnyType any1 = 135;
	AnyType any2 = 1.5;
	EXPECT_THROW(any1 += any2, ExceptionType);
}

TEST(AnyType_assignment_3, AnyType)
{
	AnyType any1;
	AnyType any2 = 135;
	EXPECT_THROW(any1 += any2, ExceptionType);
}

TEST(AnyType_swap, AnyType)
{
	AnyType any1 = 135;
	AnyType any2 = 1.5;
	AnyType any3;

	any1.Swap(any2);
	EXPECT_EQ(1.5, any1.GetValueDouble());
	EXPECT_EQ(135, any2.GetValueInt());

	any2.Swap(any3);
	EXPECT_THROW(any2.GetValueInt(), ExceptionType);
	EXPECT_EQ(135, any3.GetValueInt());
}