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
    map<string, pair<vector<string>,gramParser::ExprContext*>>functions;

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
    virtual std::any visitCreateFunction(gramParser::CreateFunctionContext* ctx) override {

        string name_function = ctx->VAR()->getText();
        vector<string>var_parametrs = any_cast<vector<string>>(visit(ctx->only_var_parametrs()));
        pair<vector<string>, gramParser::ExprContext*> obj = { var_parametrs, ctx->expr()};
        functions[name_function] = obj;
        res.push_back("Create function");
        return 0;
    }

    virtual std::any visitCallFunction(gramParser::CallFunctionContext* ctx) override {
        double value;
        string name_function = ctx->VAR()->getText();
        map<string, double>value_var_tmp;
        vector<pair<string, string>>parametrs = any_cast<vector<pair<string, string>>>(visit(ctx->parametrs()));
        vector<string>&all_vars = functions[name_function].first;
        if (all_vars.size() != parametrs.size()) {
            //Ошибка
        }
        swap(value_var_tmp, value_var);
        for (int i = 0; i < all_vars.size(); i++) {
            value_var[all_vars[i]] = stod(parametrs[i].second);
        }
        value = any_cast<double>(visit(functions[name_function].second));
        swap(value_var_tmp, value_var);
        return value;
    }
    virtual std::any visitOnlyVarParam(gramParser::OnlyVarParamContext* ctx) override {
        vector<antlr4::tree::TerminalNode*> arr = ctx->VAR();
        vector<string>ans;
        for (auto v : arr) {
            ans.push_back(v->getText());
        }
        return ans;
    }

    virtual std::any visitPrintVariable(gramParser::PrintVariableContext* ctx) override {
        vector<pair<string,string>> arr =  any_cast<vector<pair<string,string>>>(visit(ctx->parametrs()));
        string t;
        for (auto v : arr) {
            t = v.first + " = " + v.second;
            res.push_back(t);
        }
        return 0;
    }
    virtual std::any visitStringParam(gramParser::StringParamContext* ctx) override {    
        vector<gramParser::ExprContext*> arr = ctx->expr();
        vector<pair<string, string>>ans;
        for (auto v : arr) {
            double value = any_cast<double>(visit(v));
            ans.push_back({ v->getText(), to_string(value)});
        }
        return ans;
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