
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "gramVisitor.h"


/**
 * This class provides an empty implementation of gramVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gramBaseVisitor : public gramVisitor {
public:

  virtual std::any visitPrint(gramParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneLineProgAssign(gramParser::OneLineProgAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneLineProg(gramParser::OneLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultLineProg(gramParser::MultLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintVariable(gramParser::PrintVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnlyVar(gramParser::OnlyVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegativeExpr(gramParser::NegativeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(gramParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(gramParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(gramParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(gramParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssigned(gramParser::AssignedContext *ctx) override {
    return visitChildren(ctx);
  }


};

