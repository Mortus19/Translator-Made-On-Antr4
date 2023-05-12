
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramParser : public antlr4::Parser {
public:
  enum {
    INT = 1, SEP = 2, SEP_FOR_FUNCTIONS = 3, WS = 4, MUL = 5, DIV = 6, ADD = 7, 
    SUB = 8, EQUAL = 9, PRINT = 10, OPEN_BRAKET = 11, CLOSE_BRAKET = 12, 
    VAR = 13
  };

  enum {
    RuleProg = 0, RulePrint_var = 1, RuleExpr = 2, RuleAssign = 3
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
  class Print_varContext;
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

    Print_varContext *print_var();

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
  class  Print_varContext : public antlr4::ParserRuleContext {
  public:
    Print_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_varContext() = default;
    void copyFrom(Print_varContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintVariableContext : public Print_varContext {
  public:
    PrintVariableContext(Print_varContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *OPEN_BRAKET();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_varContext* print_var();

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

  class  IntContext : public ExprContext {
  public:
    IntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

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

