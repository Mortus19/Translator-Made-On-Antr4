#include <iostream>
#include <string>
#include "gramUserVisitor.h"
using namespace std;

int main() {
    
    std::string expression = "a = 10+20; b = 20 + a; print(b); print(c); print(c)";
    //std::string expression = "20 + 30; 30 + 22;55 - 33";
    gramUserVisitor visitor(expression);
    std::cout << "Result :" << std::endl;
    int i = 0;
    for (auto var : visitor.res)
    {
        std::cout << i << ":" << var << std::endl;
        i++;
    }
    
    for (auto var : visitor.value_var)
    {
        std::cout << var.first << ":" << var.second << std::endl;
    }
    
    
    return 0;
}