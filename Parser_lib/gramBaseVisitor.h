
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

  virtual std::any visitCreateSomeFunction(gramParser::CreateSomeFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateFunction(gramParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallFunction(gramParser::CallFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintVariable(gramParser::PrintVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnlyArg(gramParser::OnlyArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnlyParam(gramParser::OnlyParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssigned(gramParser::AssignedContext *ctx) override {
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

  virtual std::any visitFuncInExpr(gramParser::FuncInExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDouble(gramParser::DoubleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVar(gramParser::InitVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleRule1(gramParser::DoubleRule1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleRule2(gramParser::DoubleRule2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleRule3(gramParser::DoubleRule3Context *ctx) override {
    return visitChildren(ctx);
  }


};

