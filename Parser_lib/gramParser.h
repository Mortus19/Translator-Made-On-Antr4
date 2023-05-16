
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, INT = 3, DEF = 4, SEP = 5, SEP_FOR_FUNCTIONS = 6, 
    MUL = 7, DIV = 8, PT = 9, ADD = 10, SUB = 11, EQUAL = 12, RET = 13, 
    PRINT = 14, OPEN_BRAKET = 15, CLOSE_BRAKET = 16, NAME = 17, WS = 18
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleCreate_function = 2, RuleLine = 3, 
    RuleCall_function = 4, RulePrint_any = 5, RuleArguments = 6, RuleParametrs = 7, 
    RuleAssign = 8, RuleExpr = 9, RuleVar = 10, RuleDbl = 11
  };

  explicit gramParser(antlr4::TokenStream *input);

  gramParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~gramParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class Create_functionContext;
  class LineContext;
  class Call_functionContext;
  class Print_anyContext;
  class ArgumentsContext;
  class ParametrsContext;
  class AssignContext;
  class ExprContext;
  class VarContext;
  class DblContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MainContext : public ProgContext {
  public:
    MainContext(ProgContext *ctx);

    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultLineProgContext : public StatementContext {
  public:
    MultLineProgContext(StatementContext *ctx);

    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  Create_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Create_functionContext() = default;
    void copyFrom(Create_functionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateFunctionContext : public Create_functionContext {
  public:
    CreateFunctionContext(Create_functionContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    ParametrsContext *parametrs();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();
    StatementContext *statement();
    antlr4::tree::TerminalNode *RET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Create_functionContext* create_function();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LineContext() = default;
    void copyFrom(LineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintContext : public LineContext {
  public:
    PrintContext(LineContext *ctx);

    Print_anyContext *print_any();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneLineProgAssignContext : public LineContext {
  public:
    OneLineProgAssignContext(LineContext *ctx);

    AssignContext *assign();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneLineProgContext : public LineContext {
  public:
    OneLineProgContext(LineContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateSomeFunctionContext : public LineContext {
  public:
    CreateSomeFunctionContext(LineContext *ctx);

    Create_functionContext *create_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LineContext* line();

  class  Call_functionContext : public antlr4::ParserRuleContext {
  public:
    Call_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Call_functionContext() = default;
    void copyFrom(Call_functionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CallFunctionContext : public Call_functionContext {
  public:
    CallFunctionContext(Call_functionContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Call_functionContext* call_function();

  class  Print_anyContext : public antlr4::ParserRuleContext {
  public:
    Print_anyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_anyContext() = default;
    void copyFrom(Print_anyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintVariableContext : public Print_anyContext {
  public:
    PrintVariableContext(Print_anyContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_anyContext* print_any();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArgumentsContext() = default;
    void copyFrom(ArgumentsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OnlyArgContext : public ArgumentsContext {
  public:
    OnlyArgContext(ArgumentsContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP_FOR_FUNCTIONS();
    antlr4::tree::TerminalNode* SEP_FOR_FUNCTIONS(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArgumentsContext* arguments();

  class  ParametrsContext : public antlr4::ParserRuleContext {
  public:
    ParametrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametrsContext() = default;
    void copyFrom(ParametrsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OnlyParamContext : public ParametrsContext {
  public:
    OnlyParamContext(ParametrsContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP_FOR_FUNCTIONS();
    antlr4::tree::TerminalNode* SEP_FOR_FUNCTIONS(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametrsContext* parametrs();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignContext() = default;
    void copyFrom(AssignContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignedContext : public AssignContext {
  public:
    AssignedContext(AssignContext *ctx);

    VarContext *var();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignContext* assign();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OnlyVarContext : public ExprContext {
  public:
    OnlyVarContext(ExprContext *ctx);

    VarContext *var();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativeExprContext : public ExprContext {
  public:
    NegativeExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_BRAKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public ExprContext {
  public:
    MulDivContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public ExprContext {
  public:
    AddSubContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncInExprContext : public ExprContext {
  public:
    FuncInExprContext(ExprContext *ctx);

    Call_functionContext *call_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleContext : public ExprContext {
  public:
    DoubleContext(ExprContext *ctx);

    DblContext *dbl();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarContext() = default;
    void copyFrom(VarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InitVarContext : public VarContext {
  public:
    InitVarContext(VarContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarContext* var();

  class  DblContext : public antlr4::ParserRuleContext {
  public:
    DblContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DblContext() = default;
    void copyFrom(DblContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoubleRule3Context : public DblContext {
  public:
    DoubleRule3Context(DblContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *PT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleRule1Context : public DblContext {
  public:
    DoubleRule1Context(DblContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleRule2Context : public DblContext {
  public:
    DoubleRule2Context(DblContext *ctx);

    antlr4::tree::TerminalNode *PT();
    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DblContext* dbl();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

