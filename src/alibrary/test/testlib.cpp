#include "alibrary.h"
#include "gtest/gtest.h"
#include <stdio.h>

TEST(Aaa, the_answer) {
	int x = answer_to_the_question();
	ASSERT_EQ(x, 42);
}

TEST(Aaa, the_answer_43) {
	int x = answer_to_the_question();
	ASSERT_EQ(x + 1, 43);
}