#pragma once
#include <string>
#include <sstream> 
#include "gramLexer.h"
#include "gramParser.h"
#include "gramVisitor.h"
#include "gramBaseVisitor.h"

void init(gramUserVisitor& visitor , string expression) {
    std::stringstream stream(expression);
    antlr4::ANTLRInputStream input(stream);
    gramLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    gramParser parser(&tokens);
    visitor.visit(parser.prog());
}
