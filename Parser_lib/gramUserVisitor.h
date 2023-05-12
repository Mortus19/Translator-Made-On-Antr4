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
    map<string, double>value_var;
    gramUserVisitor(string expression = "") {
        std::stringstream stream(expression);
        antlr4::ANTLRInputStream input(stream);
        gramLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        gramParser parser(&tokens);
        this->visit(parser.prog());
    }
    virtual std::any visitPrint(gramParser::PrintContext* ctx) override {
        visit(ctx->print_any());
        return 0;
    }
    virtual std::any visitPrintVariable(gramParser::PrintVariableContext* ctx) override {
        visit(ctx->string_for_print());
        return 0;
    }
    virtual std::any visitOneLinePrint(gramParser::OneLinePrintContext* ctx) override {
        double value = any_cast<double>(visit(ctx->expr()));
        string ans = "";
        ans += ctx->expr()->getText();
        ans += " = ";
        ans += to_string(value);
        res.push_back(ans);
        return ans;
    }

    virtual std::any visitMultLinePrint(gramParser::MultLinePrintContext* ctx) override {
        
        std::vector<gramParser::String_for_printContext*> arr_p =
            ctx->string_for_print();
        for (auto p : arr_p) {
            visit(p);
        }
        return &res;
    }

    virtual std::any visitOneLineProg(
        gramParser::OneLineProgContext* ctx)
        override {
        double val = std::any_cast<double>(visit(ctx->expr()));
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
        double value = any_cast<double>(visit(ctx->expr()));
        value_var[name_var] = value;
        return value;
    }
    virtual std::any visitOnlyVar(gramParser::OnlyVarContext* ctx) override {
        //Надо сюда добавить обработчик того, что переменная не нашлась
        //Чтобы выкидывало исключение
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
        double left = std::any_cast<double>
            (visit(ctx->expr(0)));
        double right = std::any_cast<double>
            (visit(ctx->expr(1)));
        if (ctx->op->getType() == gramParser::ADD) return left + right;
        else return left - right;
    }
    virtual std::any visitMulDiv(
        gramParser::MulDivContext* ctx) override {
        double left = std::any_cast<double>
            (visit(ctx->expr(0)));
        double right = std::any_cast<double>
            (visit(ctx->expr(1)));
        if (ctx->op->getType() == gramParser::MUL) return left * right;
        else return left / right;
    }
    virtual std::any visitParens(
        gramParser::ParensContext* ctx) override {
        double val = std::any_cast<double>
            (visit(ctx->expr()));
        return val;
    }
    virtual std::any visitNegativeExpr(gramParser::NegativeExprContext* ctx) override {
        double val = std::any_cast<double> (visit(ctx->expr()));
        return -val;
    }

    virtual std::any visitDoubleRule1(gramParser::DoubleRule1Context* ctx) override {
        double value = std::stoi(ctx->INT()->getText());;
        return value;
    }

    virtual std::any visitDoubleRule2(gramParser::DoubleRule2Context* ctx) override {
        string t = ".";
        t += ctx->INT()->getText();
        double value = stod(t);
        return value;
    }

    virtual std::any visitDoubleRule3(gramParser::DoubleRule3Context* ctx) override {
        string t = "";
        t += ctx->INT(0)->getText();
        t += ".";
        t += ctx->INT(1)->getText();
        double value = stod(t);
        return value;
    }

    virtual std::any visitDouble(gramParser::DoubleContext* ctx) override {
        return visit(ctx->dbl());
    }
};