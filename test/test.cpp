#include "pch.h"
#include "gramUserVisitor.h"



TEST(Parser, correct_oneline_computing) {
  std::string expression = "(10+3)*3 - 1*(1)*(36+28);";
  gramUserVisitor visitor(expression);
  vector<string>ans = {"-25.000000"};
  EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, correct_oneline_computing_with_negative_numbers) {
    std::string expression = "(10+3)*3 - 1*(-1)*(36+28);";
    gramUserVisitor visitor(expression);
    vector<string>ans = {"103.000000"};
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, multyline_computing) {
    std::string expression = "10+20;20+3;10+2*3;";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "30.000000","23.000000","16.000000" };
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, multyline_computing_with_negative_numbers) {
    std::string expression = "-(10+20)/(-1);20+3+(-3);-3-6 * (-1);-3-6;";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "30.000000","20.000000","3.000000","-9.000000"};
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, variable_assign) {
    std::string expression = "a = 10 + 20;";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.value_var["a"], 30);
}

TEST(Parser, variable_assign2) {
    std::string expression = "a = 10 + 20; b = -3*a + 100;";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.value_var["b"], 10);
}

TEST(Parser, computing_with_variable) {
    std::string expression = "a = 10 + 20; b = -3*a + 100; (2*a + 3*b) / b;";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "9.000000");
}

TEST(Parser, oneline_computing_with_double_numbers) {
    std::string expression = "(10.3+3)*3.2 - 1*(-1)*(36+28.4);";
    gramUserVisitor visitor(expression);
    vector<string>ans = { "106.960000" };
    EXPECT_EQ(visitor.res, ans);
}

TEST(Parser, print) {
    std::string expression = "print(10+20);";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "10+20 = 30.000000");
}

TEST(Parser, multyprint) {
    std::string expression = "print(10+20,20+30,30+40);";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "10+20 = 30.000000");
    EXPECT_EQ(visitor.res[1], "20+30 = 50.000000");
    EXPECT_EQ(visitor.res[2], "30+40 = 70.000000");
}

TEST(Parser, create_and_used_function_one_line) {
    std::string expression = "def f(x){ return x * x * x; }; print(f(3));";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "f(3) = 27.000000");
}

TEST(Parser, create_and_used_function_multyline) {
    std::string expression = "def f(x){ x = x*x ; x = x*x; return x; }; print(f(3));";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "f(3) = 81.000000");
}

TEST(Parser, void_function) {
    std::string expression = "def f(x){ x = x+x; print(x); }; f(3);";
    gramUserVisitor visitor(expression);
    EXPECT_EQ(visitor.res[0], "x = 6.000000");
}
