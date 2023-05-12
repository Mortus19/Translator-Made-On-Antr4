#include "pch.h"
#include "gramUserVisitor.h"



TEST(Parser, correct_oneline_computing) {
  std::string expression = "(10+3)*3 - 1*(1)*(36+28)";
  gramUserVisitor visitor(expression);
  vector<string>ans = {"-25"};
  EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, correct_oneline_computing_with_negative_numbers) {
    std::string expression = "(10+3)*3 - 1*(-1)*(36+28)";
    gramUserVisitor visitor(expression);
    vector<string>ans = {"103"};
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, correct_multyline_computing) {
    std::string expression = "10+20;20+3;10+2*3";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "30","23","16" };
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, correct_multyline_computing_with_negative_numbers) {
    std::string expression = "-(10+20)/(-1);20+3+(-3);-3-6 * (-1);-3-6";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "30","20","3","-9"};
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, variable_assign) {
    std::string expression = "a = 10 + 20";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.value_var["a"], 30);
}

TEST(Parser, variable_assign2) {
    std::string expression = "a = 10 + 20; b = -3*a + 100";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.value_var["b"], 10);
}

TEST(Parser, computing_with_variable) {
    std::string expression = "a = 10 + 20; b = -3*a + 100; (2*a + 3*b) / b";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[2], "9");
}

