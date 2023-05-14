
// Generated from gram.g4 by ANTLR 4.12.0


#include "gramVisitor.h"

#include "gramParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GramParserStaticData final {
  GramParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramParserStaticData(const GramParserStaticData&) = delete;
  GramParserStaticData(GramParserStaticData&&) = delete;
  GramParserStaticData& operator=(const GramParserStaticData&) = delete;
  GramParserStaticData& operator=(GramParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramParserOnceFlag;
GramParserStaticData *gramParserStaticData = nullptr;

void gramParserInitialize() {
  assert(gramParserStaticData == nullptr);
  auto staticData = std::make_unique<GramParserStaticData>(
    std::vector<std::string>{
      "prog", "create_function", "call_function", "print_any", "arguments", 
      "parametrs", "assign", "expr", "var", "dbl"
    },
    std::vector<std::string>{
      "", "", "';'", "','", "'*'", "'/'", "'def'", "'.'", "'+'", "'-'", 
      "'='", "'print'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "SEP", "SEP_FOR_FUNCTIONS", "MUL", "DIV", "DEF", "PT", 
      "ADD", "SUB", "EQUAL", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", "NAME", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,15,110,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,0,3,0,26,8,0,1,0,1,0,1,0,1,0,
  	3,0,32,8,0,5,0,34,8,0,10,0,12,0,37,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,5,4,60,8,4,10,4,
  	12,4,63,9,4,1,5,1,5,1,5,5,5,68,8,5,10,5,12,5,71,9,5,1,6,1,6,1,6,1,6,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,87,8,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,5,7,95,8,7,10,7,12,7,98,9,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,108,
  	8,9,1,9,0,2,0,14,10,0,2,4,6,8,10,12,14,16,18,0,2,1,0,4,5,1,0,8,9,114,
  	0,25,1,0,0,0,2,38,1,0,0,0,4,46,1,0,0,0,6,51,1,0,0,0,8,56,1,0,0,0,10,64,
  	1,0,0,0,12,72,1,0,0,0,14,86,1,0,0,0,16,99,1,0,0,0,18,107,1,0,0,0,20,21,
  	6,0,-1,0,21,26,3,14,7,0,22,26,3,12,6,0,23,26,3,6,3,0,24,26,3,2,1,0,25,
  	20,1,0,0,0,25,22,1,0,0,0,25,23,1,0,0,0,25,24,1,0,0,0,26,35,1,0,0,0,27,
  	28,10,1,0,0,28,29,5,2,0,0,29,31,3,0,0,0,30,32,5,0,0,1,31,30,1,0,0,0,31,
  	32,1,0,0,0,32,34,1,0,0,0,33,27,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,
  	36,1,0,0,0,36,1,1,0,0,0,37,35,1,0,0,0,38,39,5,6,0,0,39,40,5,14,0,0,40,
  	41,5,12,0,0,41,42,3,10,5,0,42,43,5,13,0,0,43,44,5,10,0,0,44,45,3,14,7,
  	0,45,3,1,0,0,0,46,47,5,14,0,0,47,48,5,12,0,0,48,49,3,8,4,0,49,50,5,13,
  	0,0,50,5,1,0,0,0,51,52,5,11,0,0,52,53,5,12,0,0,53,54,3,8,4,0,54,55,5,
  	13,0,0,55,7,1,0,0,0,56,61,3,14,7,0,57,58,5,3,0,0,58,60,3,14,7,0,59,57,
  	1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,9,1,0,0,0,63,61,
  	1,0,0,0,64,69,5,14,0,0,65,66,5,3,0,0,66,68,5,14,0,0,67,65,1,0,0,0,68,
  	71,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,11,1,0,0,0,71,69,1,0,0,0,72,
  	73,3,16,8,0,73,74,5,10,0,0,74,75,3,14,7,0,75,13,1,0,0,0,76,77,6,7,-1,
  	0,77,78,5,9,0,0,78,87,3,14,7,7,79,87,3,16,8,0,80,87,3,18,9,0,81,87,3,
  	4,2,0,82,83,5,12,0,0,83,84,3,14,7,0,84,85,5,13,0,0,85,87,1,0,0,0,86,76,
  	1,0,0,0,86,79,1,0,0,0,86,80,1,0,0,0,86,81,1,0,0,0,86,82,1,0,0,0,87,96,
  	1,0,0,0,88,89,10,5,0,0,89,90,7,0,0,0,90,95,3,14,7,6,91,92,10,4,0,0,92,
  	93,7,1,0,0,93,95,3,14,7,5,94,88,1,0,0,0,94,91,1,0,0,0,95,98,1,0,0,0,96,
  	94,1,0,0,0,96,97,1,0,0,0,97,15,1,0,0,0,98,96,1,0,0,0,99,100,5,14,0,0,
  	100,17,1,0,0,0,101,108,5,1,0,0,102,103,5,7,0,0,103,108,5,1,0,0,104,105,
  	5,1,0,0,105,106,5,7,0,0,106,108,5,1,0,0,107,101,1,0,0,0,107,102,1,0,0,
  	0,107,104,1,0,0,0,108,19,1,0,0,0,9,25,31,35,61,69,86,94,96,107
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramParserStaticData = staticData.release();
}

}

gramParser::gramParser(TokenStream *input) : gramParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

gramParser::gramParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  gramParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gramParserStaticData->atn, gramParserStaticData->decisionToDFA, gramParserStaticData->sharedContextCache, options);
}

gramParser::~gramParser() {
  delete _interpreter;
}

const atn::ATN& gramParser::getATN() const {
  return *gramParserStaticData->atn;
}

std::string gramParser::getGrammarFileName() const {
  return "gram.g4";
}

const std::vector<std::string>& gramParser::getRuleNames() const {
  return gramParserStaticData->ruleNames;
}

const dfa::Vocabulary& gramParser::getVocabulary() const {
  return gramParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramParser::getSerializedATN() const {
  return gramParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

gramParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::ProgContext::getRuleIndex() const {
  return gramParser::RuleProg;
}

void gramParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintContext ------------------------------------------------------------------

gramParser::Print_anyContext* gramParser::PrintContext::print_any() {
  return getRuleContext<gramParser::Print_anyContext>(0);
}

gramParser::PrintContext::PrintContext(ProgContext *ctx) { copyFrom(ctx); }


std::any gramParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneLineProgAssignContext ------------------------------------------------------------------

gramParser::AssignContext* gramParser::OneLineProgAssignContext::assign() {
  return getRuleContext<gramParser::AssignContext>(0);
}

gramParser::OneLineProgAssignContext::OneLineProgAssignContext(ProgContext *ctx) { copyFrom(ctx); }


std::any gramParser::OneLineProgAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOneLineProgAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneLineProgContext ------------------------------------------------------------------

gramParser::ExprContext* gramParser::OneLineProgContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

gramParser::OneLineProgContext::OneLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any gramParser::OneLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOneLineProg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultLineProgContext ------------------------------------------------------------------

std::vector<gramParser::ProgContext *> gramParser::MultLineProgContext::prog() {
  return getRuleContexts<gramParser::ProgContext>();
}

gramParser::ProgContext* gramParser::MultLineProgContext::prog(size_t i) {
  return getRuleContext<gramParser::ProgContext>(i);
}

tree::TerminalNode* gramParser::MultLineProgContext::SEP() {
  return getToken(gramParser::SEP, 0);
}

tree::TerminalNode* gramParser::MultLineProgContext::EOF() {
  return getToken(gramParser::EOF, 0);
}

gramParser::MultLineProgContext::MultLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any gramParser::MultLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitMultLineProg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateSomeFunctionContext ------------------------------------------------------------------

gramParser::Create_functionContext* gramParser::CreateSomeFunctionContext::create_function() {
  return getRuleContext<gramParser::Create_functionContext>(0);
}

gramParser::CreateSomeFunctionContext::CreateSomeFunctionContext(ProgContext *ctx) { copyFrom(ctx); }


std::any gramParser::CreateSomeFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitCreateSomeFunction(this);
  else
    return visitor->visitChildren(this);
}

gramParser::ProgContext* gramParser::prog() {
   return prog(0);
}

gramParser::ProgContext* gramParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  gramParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  gramParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, gramParser::RuleProg, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(21);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OneLineProgAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(22);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(23);
      print_any();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CreateSomeFunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(24);
      create_function();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(35);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultLineProgContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(27);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(28);
        match(gramParser::SEP);
        setState(29);
        prog(0);
        setState(31);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(30);
          match(gramParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(37);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Create_functionContext ------------------------------------------------------------------

gramParser::Create_functionContext::Create_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::Create_functionContext::getRuleIndex() const {
  return gramParser::RuleCreate_function;
}

void gramParser::Create_functionContext::copyFrom(Create_functionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CreateFunctionContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::CreateFunctionContext::DEF() {
  return getToken(gramParser::DEF, 0);
}

tree::TerminalNode* gramParser::CreateFunctionContext::NAME() {
  return getToken(gramParser::NAME, 0);
}

tree::TerminalNode* gramParser::CreateFunctionContext::OPEN_BRAKET() {
  return getToken(gramParser::OPEN_BRAKET, 0);
}

gramParser::ParametrsContext* gramParser::CreateFunctionContext::parametrs() {
  return getRuleContext<gramParser::ParametrsContext>(0);
}

tree::TerminalNode* gramParser::CreateFunctionContext::CLOSE_BRAKET() {
  return getToken(gramParser::CLOSE_BRAKET, 0);
}

tree::TerminalNode* gramParser::CreateFunctionContext::EQUAL() {
  return getToken(gramParser::EQUAL, 0);
}

gramParser::ExprContext* gramParser::CreateFunctionContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

gramParser::CreateFunctionContext::CreateFunctionContext(Create_functionContext *ctx) { copyFrom(ctx); }


std::any gramParser::CreateFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitCreateFunction(this);
  else
    return visitor->visitChildren(this);
}
gramParser::Create_functionContext* gramParser::create_function() {
  Create_functionContext *_localctx = _tracker.createInstance<Create_functionContext>(_ctx, getState());
  enterRule(_localctx, 2, gramParser::RuleCreate_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::CreateFunctionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(gramParser::DEF);
    setState(39);
    match(gramParser::NAME);
    setState(40);
    match(gramParser::OPEN_BRAKET);
    setState(41);
    parametrs();
    setState(42);
    match(gramParser::CLOSE_BRAKET);
    setState(43);
    match(gramParser::EQUAL);
    setState(44);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_functionContext ------------------------------------------------------------------

gramParser::Call_functionContext::Call_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::Call_functionContext::getRuleIndex() const {
  return gramParser::RuleCall_function;
}

void gramParser::Call_functionContext::copyFrom(Call_functionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CallFunctionContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::CallFunctionContext::NAME() {
  return getToken(gramParser::NAME, 0);
}

tree::TerminalNode* gramParser::CallFunctionContext::OPEN_BRAKET() {
  return getToken(gramParser::OPEN_BRAKET, 0);
}

gramParser::ArgumentsContext* gramParser::CallFunctionContext::arguments() {
  return getRuleContext<gramParser::ArgumentsContext>(0);
}

tree::TerminalNode* gramParser::CallFunctionContext::CLOSE_BRAKET() {
  return getToken(gramParser::CLOSE_BRAKET, 0);
}

gramParser::CallFunctionContext::CallFunctionContext(Call_functionContext *ctx) { copyFrom(ctx); }


std::any gramParser::CallFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitCallFunction(this);
  else
    return visitor->visitChildren(this);
}
gramParser::Call_functionContext* gramParser::call_function() {
  Call_functionContext *_localctx = _tracker.createInstance<Call_functionContext>(_ctx, getState());
  enterRule(_localctx, 4, gramParser::RuleCall_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::CallFunctionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(gramParser::NAME);
    setState(47);
    match(gramParser::OPEN_BRAKET);
    setState(48);
    arguments();
    setState(49);
    match(gramParser::CLOSE_BRAKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_anyContext ------------------------------------------------------------------

gramParser::Print_anyContext::Print_anyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::Print_anyContext::getRuleIndex() const {
  return gramParser::RulePrint_any;
}

void gramParser::Print_anyContext::copyFrom(Print_anyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintVariableContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::PrintVariableContext::PRINT() {
  return getToken(gramParser::PRINT, 0);
}

tree::TerminalNode* gramParser::PrintVariableContext::OPEN_BRAKET() {
  return getToken(gramParser::OPEN_BRAKET, 0);
}

gramParser::ArgumentsContext* gramParser::PrintVariableContext::arguments() {
  return getRuleContext<gramParser::ArgumentsContext>(0);
}

tree::TerminalNode* gramParser::PrintVariableContext::CLOSE_BRAKET() {
  return getToken(gramParser::CLOSE_BRAKET, 0);
}

gramParser::PrintVariableContext::PrintVariableContext(Print_anyContext *ctx) { copyFrom(ctx); }


std::any gramParser::PrintVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitPrintVariable(this);
  else
    return visitor->visitChildren(this);
}
gramParser::Print_anyContext* gramParser::print_any() {
  Print_anyContext *_localctx = _tracker.createInstance<Print_anyContext>(_ctx, getState());
  enterRule(_localctx, 6, gramParser::RulePrint_any);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::PrintVariableContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(gramParser::PRINT);
    setState(52);
    match(gramParser::OPEN_BRAKET);
    setState(53);
    arguments();
    setState(54);
    match(gramParser::CLOSE_BRAKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

gramParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::ArgumentsContext::getRuleIndex() const {
  return gramParser::RuleArguments;
}

void gramParser::ArgumentsContext::copyFrom(ArgumentsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OnlyArgContext ------------------------------------------------------------------

std::vector<gramParser::ExprContext *> gramParser::OnlyArgContext::expr() {
  return getRuleContexts<gramParser::ExprContext>();
}

gramParser::ExprContext* gramParser::OnlyArgContext::expr(size_t i) {
  return getRuleContext<gramParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> gramParser::OnlyArgContext::SEP_FOR_FUNCTIONS() {
  return getTokens(gramParser::SEP_FOR_FUNCTIONS);
}

tree::TerminalNode* gramParser::OnlyArgContext::SEP_FOR_FUNCTIONS(size_t i) {
  return getToken(gramParser::SEP_FOR_FUNCTIONS, i);
}

gramParser::OnlyArgContext::OnlyArgContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any gramParser::OnlyArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOnlyArg(this);
  else
    return visitor->visitChildren(this);
}
gramParser::ArgumentsContext* gramParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 8, gramParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::OnlyArgContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(56);
    expr(0);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::SEP_FOR_FUNCTIONS) {
      setState(57);
      match(gramParser::SEP_FOR_FUNCTIONS);
      setState(58);
      expr(0);
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrsContext ------------------------------------------------------------------

gramParser::ParametrsContext::ParametrsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::ParametrsContext::getRuleIndex() const {
  return gramParser::RuleParametrs;
}

void gramParser::ParametrsContext::copyFrom(ParametrsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OnlyParamContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> gramParser::OnlyParamContext::NAME() {
  return getTokens(gramParser::NAME);
}

tree::TerminalNode* gramParser::OnlyParamContext::NAME(size_t i) {
  return getToken(gramParser::NAME, i);
}

std::vector<tree::TerminalNode *> gramParser::OnlyParamContext::SEP_FOR_FUNCTIONS() {
  return getTokens(gramParser::SEP_FOR_FUNCTIONS);
}

tree::TerminalNode* gramParser::OnlyParamContext::SEP_FOR_FUNCTIONS(size_t i) {
  return getToken(gramParser::SEP_FOR_FUNCTIONS, i);
}

gramParser::OnlyParamContext::OnlyParamContext(ParametrsContext *ctx) { copyFrom(ctx); }


std::any gramParser::OnlyParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOnlyParam(this);
  else
    return visitor->visitChildren(this);
}
gramParser::ParametrsContext* gramParser::parametrs() {
  ParametrsContext *_localctx = _tracker.createInstance<ParametrsContext>(_ctx, getState());
  enterRule(_localctx, 10, gramParser::RuleParametrs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::OnlyParamContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(gramParser::NAME);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::SEP_FOR_FUNCTIONS) {
      setState(65);
      match(gramParser::SEP_FOR_FUNCTIONS);
      setState(66);
      match(gramParser::NAME);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

gramParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::AssignContext::getRuleIndex() const {
  return gramParser::RuleAssign;
}

void gramParser::AssignContext::copyFrom(AssignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignedContext ------------------------------------------------------------------

gramParser::VarContext* gramParser::AssignedContext::var() {
  return getRuleContext<gramParser::VarContext>(0);
}

tree::TerminalNode* gramParser::AssignedContext::EQUAL() {
  return getToken(gramParser::EQUAL, 0);
}

gramParser::ExprContext* gramParser::AssignedContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

gramParser::AssignedContext::AssignedContext(AssignContext *ctx) { copyFrom(ctx); }


std::any gramParser::AssignedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitAssigned(this);
  else
    return visitor->visitChildren(this);
}
gramParser::AssignContext* gramParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 12, gramParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::AssignedContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(72);
    var();
    setState(73);
    match(gramParser::EQUAL);
    setState(74);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

gramParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::ExprContext::getRuleIndex() const {
  return gramParser::RuleExpr;
}

void gramParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OnlyVarContext ------------------------------------------------------------------

gramParser::VarContext* gramParser::OnlyVarContext::var() {
  return getRuleContext<gramParser::VarContext>(0);
}

gramParser::OnlyVarContext::OnlyVarContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::OnlyVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOnlyVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegativeExprContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::NegativeExprContext::SUB() {
  return getToken(gramParser::SUB, 0);
}

gramParser::ExprContext* gramParser::NegativeExprContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

gramParser::NegativeExprContext::NegativeExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::NegativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitNegativeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::ParensContext::OPEN_BRAKET() {
  return getToken(gramParser::OPEN_BRAKET, 0);
}

gramParser::ExprContext* gramParser::ParensContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

tree::TerminalNode* gramParser::ParensContext::CLOSE_BRAKET() {
  return getToken(gramParser::CLOSE_BRAKET, 0);
}

gramParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<gramParser::ExprContext *> gramParser::MulDivContext::expr() {
  return getRuleContexts<gramParser::ExprContext>();
}

gramParser::ExprContext* gramParser::MulDivContext::expr(size_t i) {
  return getRuleContext<gramParser::ExprContext>(i);
}

tree::TerminalNode* gramParser::MulDivContext::MUL() {
  return getToken(gramParser::MUL, 0);
}

tree::TerminalNode* gramParser::MulDivContext::DIV() {
  return getToken(gramParser::DIV, 0);
}

gramParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<gramParser::ExprContext *> gramParser::AddSubContext::expr() {
  return getRuleContexts<gramParser::ExprContext>();
}

gramParser::ExprContext* gramParser::AddSubContext::expr(size_t i) {
  return getRuleContext<gramParser::ExprContext>(i);
}

tree::TerminalNode* gramParser::AddSubContext::ADD() {
  return getToken(gramParser::ADD, 0);
}

tree::TerminalNode* gramParser::AddSubContext::SUB() {
  return getToken(gramParser::SUB, 0);
}

gramParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncInExprContext ------------------------------------------------------------------

gramParser::Call_functionContext* gramParser::FuncInExprContext::call_function() {
  return getRuleContext<gramParser::Call_functionContext>(0);
}

gramParser::FuncInExprContext::FuncInExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::FuncInExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitFuncInExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleContext ------------------------------------------------------------------

gramParser::DblContext* gramParser::DoubleContext::dbl() {
  return getRuleContext<gramParser::DblContext>(0);
}

gramParser::DoubleContext::DoubleContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::DoubleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitDouble(this);
  else
    return visitor->visitChildren(this);
}

gramParser::ExprContext* gramParser::expr() {
   return expr(0);
}

gramParser::ExprContext* gramParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  gramParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  gramParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, gramParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NegativeExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(77);
      match(gramParser::SUB);
      setState(78);
      expr(7);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OnlyVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(79);
      var();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<DoubleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(80);
      dbl();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncInExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(81);
      call_function();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(82);
      match(gramParser::OPEN_BRAKET);
      setState(83);
      expr(0);
      setState(84);
      match(gramParser::CLOSE_BRAKET);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(94);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(89);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == gramParser::MUL

          || _la == gramParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(92);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == gramParser::ADD

          || _la == gramParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(93);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

gramParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::VarContext::getRuleIndex() const {
  return gramParser::RuleVar;
}

void gramParser::VarContext::copyFrom(VarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitVarContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::InitVarContext::NAME() {
  return getToken(gramParser::NAME, 0);
}

gramParser::InitVarContext::InitVarContext(VarContext *ctx) { copyFrom(ctx); }


std::any gramParser::InitVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitInitVar(this);
  else
    return visitor->visitChildren(this);
}
gramParser::VarContext* gramParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 16, gramParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<gramParser::InitVarContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(gramParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DblContext ------------------------------------------------------------------

gramParser::DblContext::DblContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::DblContext::getRuleIndex() const {
  return gramParser::RuleDbl;
}

void gramParser::DblContext::copyFrom(DblContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoubleRule3Context ------------------------------------------------------------------

std::vector<tree::TerminalNode *> gramParser::DoubleRule3Context::INT() {
  return getTokens(gramParser::INT);
}

tree::TerminalNode* gramParser::DoubleRule3Context::INT(size_t i) {
  return getToken(gramParser::INT, i);
}

tree::TerminalNode* gramParser::DoubleRule3Context::PT() {
  return getToken(gramParser::PT, 0);
}

gramParser::DoubleRule3Context::DoubleRule3Context(DblContext *ctx) { copyFrom(ctx); }


std::any gramParser::DoubleRule3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitDoubleRule3(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleRule1Context ------------------------------------------------------------------

tree::TerminalNode* gramParser::DoubleRule1Context::INT() {
  return getToken(gramParser::INT, 0);
}

gramParser::DoubleRule1Context::DoubleRule1Context(DblContext *ctx) { copyFrom(ctx); }


std::any gramParser::DoubleRule1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitDoubleRule1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleRule2Context ------------------------------------------------------------------

tree::TerminalNode* gramParser::DoubleRule2Context::PT() {
  return getToken(gramParser::PT, 0);
}

tree::TerminalNode* gramParser::DoubleRule2Context::INT() {
  return getToken(gramParser::INT, 0);
}

gramParser::DoubleRule2Context::DoubleRule2Context(DblContext *ctx) { copyFrom(ctx); }


std::any gramParser::DoubleRule2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitDoubleRule2(this);
  else
    return visitor->visitChildren(this);
}
gramParser::DblContext* gramParser::dbl() {
  DblContext *_localctx = _tracker.createInstance<DblContext>(_ctx, getState());
  enterRule(_localctx, 18, gramParser::RuleDbl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule1Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(101);
      match(gramParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule2Context>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(102);
      match(gramParser::PT);
      setState(103);
      match(gramParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule3Context>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(104);
      match(gramParser::INT);
      setState(105);
      match(gramParser::PT);
      setState(106);
      match(gramParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool gramParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);
    case 7: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool gramParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool gramParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void gramParser::initialize() {
  ::antlr4::internal::call_once(gramParserOnceFlag, gramParserInitialize);
}
