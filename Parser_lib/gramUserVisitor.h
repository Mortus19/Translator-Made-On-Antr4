#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "gramLexer.h"
#include "gramParser.h"
#include "gramVisitor.h"
#include "gramBaseVisitor.h"

using namespace std;

class gramUserVisitor : public gramBaseVisitor {
public:
    std::vector<string>res;
    map<string, int>value_var;
    gramUserVisitor(string expression = "") {
        std::stringstream stream(expression);
        antlr4::ANTLRInputStream input(stream);
        gramLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        gramParser parser(&tokens);
        this->visit(parser.prog());
    }
    virtual std::any visitOneLineProg(
        gramParser::OneLineProgContext* ctx)
        override {
        int val = std::any_cast<int>(visit(ctx->expr()));
        res.push_back(to_string(val));
        return val;
    }
    virtual std::any visitOneLineProgAssign(gramParser::OneLineProgAssignContext* ctx) override {
        res.push_back("Sucsess assigned");
        visit(ctx->assign());
        return 0;
    }
    virtual std::any visitAssigned(gramParser::AssignedContext* ctx) override {
        string name_var = ctx->VAR()->getText();
        int value = any_cast<int>(visit(ctx->expr()));
        value_var[name_var] = value;
        return value;
    }
    virtual std::any visitOnlyVar(gramParser::OnlyVarContext* ctx) override {
        string name_var = ctx->VAR()->getText();
        return value_var[name_var];
    }
    virtual std::any visitMultLineProg(
        gramParser::MultLineProgContext* ctx)
        override {
        std::vector<gramParser::ProgContext*> arr_p =
            ctx->prog();
        for (gramParser::ProgContext* p : arr_p) {
            visit(p);
        }
        return &res;
    }
    virtual std::any visitAddSub(
        gramParser::AddSubContext* ctx) override {
        int left = std::any_cast<int>
            (visit(ctx->expr(0)));
        int right = std::any_cast<int>
            (visit(ctx->expr(1)));
        if (ctx->op->getType() == gramParser::ADD) return left + right;
        else return left - right;
    }
    virtual std::any visitMulDiv(
        gramParser::MulDivContext* ctx) override {
        int left = std::any_cast<int>
            (visit(ctx->expr(0)));
        int right = std::any_cast<int>
            (visit(ctx->expr(1)));
        if (ctx->op->getType() == gramParser::MUL) return left * right;
        else return left / right;
    }
    virtual std::any visitParens(
        gramParser::ParensContext* ctx) override {
        int val = std::any_cast<int>
            (visit(ctx->expr()));
        return val;
    }
    virtual std::any visitNegativeExpr(gramParser::NegativeExprContext* ctx) override {
        int val = std::any_cast<int> (visit(ctx->expr()));
        return -val;
    }
    virtual std::any visitInt(
        gramParser::IntContext* ctx)
        override {
        return std::stoi(ctx->INT()->getText());
    }

};