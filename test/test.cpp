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
    std::string expression = "-(10+20)/(-1);20+3-(-3);-3-6";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "30","26","-9" };
    EXPECT_EQ(visitor.res, ans);
}