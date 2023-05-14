#include <iostream>
#include <string>
#include "gramUserVisitor.h"
using namespace std;

int main() {
    
    std::string expression = "a = 10.2 + .5; b = 20 + a; print(a+b); def f(a,b) = a*b ; def g(x) = x*x; f(g(2),g(2)); print(a)";
    //std::string expression = "20 + 30; 30 + 22;55 - 33";
    gramUserVisitor visitor(expression);
    std::cout << "Result :" << std::endl;
    int i = 0;
    for (auto var : visitor.res)
    {
        std::cout << i << ":" << var << std::endl;
        i++;
    }

    /*
    for (auto var : visitor.value_var)
    {
        std::cout << var.first << ":" << var.second << std::endl;
    }
    */
    
    return 0;
}