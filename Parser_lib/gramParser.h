
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramParser : public antlr4::Parser {
public:
  enum {
    INT = 1, SEP = 2, SEP_FOR_FUNCTIONS = 3, WS = 4, MUL = 5, DIV = 6, PT = 7, 
    ADD = 8, SUB = 9, EQUAL = 10, PRINT = 11, OPEN_BRAKET = 12, CLOSE_BRAKET = 13, 
    VAR = 14
  };

  enum {
    RuleProg = 0, RuleDbl = 1, RulePrint_any = 2, RuleString_for_print = 3, 
    RuleExpr = 4, RuleAssign = 5
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
  class DblContext;
  class Print_anyContext;
  class String_for_printContext;
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
    String_for_printContext *string_for_print();
    antlr4::tree::TerminalNode *CLOSE_BRAKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_anyContext* print_any();

  class  String_for_printContext : public antlr4::ParserRuleContext {
  public:
    String_for_printContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    String_for_printContext() = default;
    void copyFrom(String_for_printContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OneLinePrintContext : public String_for_printContext {
  public:
    OneLinePrintContext(String_for_printContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultLinePrintContext : public String_for_printContext {
  public:
    MultLinePrintContext(String_for_printContext *ctx);

    std::vector<String_for_printContext *> string_for_print();
    String_for_printContext* string_for_print(size_t i);
    antlr4::tree::TerminalNode *SEP_FOR_FUNCTIONS();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  String_for_printContext* string_for_print();
  String_for_printContext* string_for_print(int precedence);
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
  bool string_for_printSempred(String_for_printContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

