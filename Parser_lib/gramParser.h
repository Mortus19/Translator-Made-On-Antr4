
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramParser : public antlr4::Parser {
public:
  enum {
    INT = 1, SEP = 2, SEP_FOR_FUNCTIONS = 3, WS = 4, MUL = 5, DIV = 6, DEF = 7, 
    PT = 8, ADD = 9, SUB = 10, EQUAL = 11, PRINT = 12, OPEN_BRAKET = 13, 
    CLOSE_BRAKET = 14, VAR = 15
  };

  enum {
    RuleProg = 0, RuleCreate_function = 1, RuleCall_function = 2, RuleDbl = 3, 
    RulePrint_any = 4, RuleOnly_var_parametrs = 5, RuleParametrs = 6, RuleExpr = 7, 
    RuleAssign = 8
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
  class Create_functionContext;
  class Call_functionContext;
  class DblContext;
  class Print_anyContext;
  class Only_var_parametrsContext;
  class ParametrsContext;
  class ExprContext;
  class AssignContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintContext : public ProgContext {
  public:
    PrintContext(ProgContext *ctx);

    Print_anyContext *print_any();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneLineProgAssignContext : public ProgContext {
  public:
    OneLineProgAssignContext(ProgContext *ctx);

    AssignContext *assign();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneLineProgContext : public ProgContext {
  public:
    OneLineProgContext(ProgContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultLineProgContext : public ProgContext {
  public:
    MultLineProgContext(ProgContext *ctx);

    std::vector<ProgContext *> prog();
    ProgContext* prog(size_t i);
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();
  ProgContext* prog(int precedence);
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
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    Only_var_parametrsContext *only_var_parametrs();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Create_functionContext* create_function();

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

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    ParametrsContext *parametrs();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Call_functionContext* call_function();

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
    ParametrsContext *parametrs();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_anyContext* print_any();

  class  Only_var_parametrsContext : public antlr4::ParserRuleContext {
  public:
    Only_var_parametrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Only_var_parametrsContext() = default;
    void copyFrom(Only_var_parametrsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OnlyVarParamContext : public Only_var_parametrsContext {
  public:
    OnlyVarParamContext(Only_var_parametrsContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP_FOR_FUNCTIONS();
    antlr4::tree::TerminalNode* SEP_FOR_FUNCTIONS(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Only_var_parametrsContext* only_var_parametrs();

  class  ParametrsContext : public antlr4::ParserRuleContext {
  public:
    ParametrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametrsContext() = default;
    void copyFrom(ParametrsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StringParamContext : public ParametrsContext {
  public:
    StringParamContext(ParametrsContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP_FOR_FUNCTIONS();
    antlr4::tree::TerminalNode* SEP_FOR_FUNCTIONS(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametrsContext* parametrs();

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

    antlr4::tree::TerminalNode *VAR();

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

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignContext* assign();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool progSempred(ProgContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

