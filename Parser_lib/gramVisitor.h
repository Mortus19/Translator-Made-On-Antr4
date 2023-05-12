
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "gramParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by gramParser.
 */
class  gramVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by gramParser.
   */
    virtual std::any visitOneLineProgAssign(gramParser::OneLineProgAssignContext *context) = 0;

    virtual std::any visitOneLineProg(gramParser::OneLineProgContext *context) = 0;

    virtual std::any visitMultLineProg(gramParser::MultLineProgContext *context) = 0;

    virtual std::any visitOnlyVar(gramParser::OnlyVarContext *context) = 0;

    virtual std::any visitNegativeExpr(gramParser::NegativeExprContext *context) = 0;

    virtual std::any visitParens(gramParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(gramParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(gramParser::AddSubContext *context) = 0;

    virtual std::any visitInt(gramParser::IntContext *context) = 0;

    virtual std::any visitAssigned(gramParser::AssignedContext *context) = 0;


};

