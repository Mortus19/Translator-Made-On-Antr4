
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
      "prog", "dbl", "print_any", "string_for_print", "expr", "assign"
    },
    std::vector<std::string>{
      "", "", "';'", "','", "", "'*'", "'/'", "'.'", "'+'", "'-'", "'='", 
      "'print'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "SEP", "SEP_FOR_FUNCTIONS", "WS", "MUL", "DIV", "PT", "ADD", 
      "SUB", "EQUAL", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,83,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,1,0,
  	1,0,3,0,17,8,0,1,0,1,0,1,0,1,0,3,0,23,8,0,5,0,25,8,0,10,0,12,0,28,9,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,3,1,36,8,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,3,3,50,8,3,5,3,52,8,3,10,3,12,3,55,9,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,3,4,66,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,74,8,4,10,
  	4,12,4,77,9,4,1,5,1,5,1,5,1,5,1,5,0,3,0,6,8,6,0,2,4,6,8,10,0,2,1,0,5,
  	6,1,0,8,9,89,0,16,1,0,0,0,2,35,1,0,0,0,4,37,1,0,0,0,6,42,1,0,0,0,8,65,
  	1,0,0,0,10,78,1,0,0,0,12,13,6,0,-1,0,13,17,3,8,4,0,14,17,3,10,5,0,15,
  	17,3,4,2,0,16,12,1,0,0,0,16,14,1,0,0,0,16,15,1,0,0,0,17,26,1,0,0,0,18,
  	19,10,1,0,0,19,20,5,2,0,0,20,22,3,0,0,0,21,23,5,0,0,1,22,21,1,0,0,0,22,
  	23,1,0,0,0,23,25,1,0,0,0,24,18,1,0,0,0,25,28,1,0,0,0,26,24,1,0,0,0,26,
  	27,1,0,0,0,27,1,1,0,0,0,28,26,1,0,0,0,29,36,5,1,0,0,30,31,5,7,0,0,31,
  	36,5,1,0,0,32,33,5,1,0,0,33,34,5,7,0,0,34,36,5,1,0,0,35,29,1,0,0,0,35,
  	30,1,0,0,0,35,32,1,0,0,0,36,3,1,0,0,0,37,38,5,11,0,0,38,39,5,12,0,0,39,
  	40,3,6,3,0,40,41,5,13,0,0,41,5,1,0,0,0,42,43,6,3,-1,0,43,44,3,8,4,0,44,
  	53,1,0,0,0,45,46,10,1,0,0,46,47,5,3,0,0,47,49,3,6,3,0,48,50,5,0,0,1,49,
  	48,1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,0,51,45,1,0,0,0,52,55,1,0,0,0,53,
  	51,1,0,0,0,53,54,1,0,0,0,54,7,1,0,0,0,55,53,1,0,0,0,56,57,6,4,-1,0,57,
  	58,5,9,0,0,58,66,3,8,4,6,59,66,3,2,1,0,60,61,5,12,0,0,61,62,3,8,4,0,62,
  	63,5,13,0,0,63,66,1,0,0,0,64,66,5,14,0,0,65,56,1,0,0,0,65,59,1,0,0,0,
  	65,60,1,0,0,0,65,64,1,0,0,0,66,75,1,0,0,0,67,68,10,5,0,0,68,69,7,0,0,
  	0,69,74,3,8,4,6,70,71,10,4,0,0,71,72,7,1,0,0,72,74,3,8,4,5,73,67,1,0,
  	0,0,73,70,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,9,1,0,
  	0,0,77,75,1,0,0,0,78,79,5,14,0,0,79,80,5,10,0,0,80,81,3,8,4,0,81,11,1,
  	0,0,0,9,16,22,26,35,49,53,65,73,75
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
    setState(16);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(13);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OneLineProgAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(14);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(15);
      print_any();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(26);
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
        setState(18);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(19);
        match(gramParser::SEP);
        setState(20);
        prog(0);
        setState(22);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(21);
          match(gramParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(28);
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
  enterRule(_localctx, 2, gramParser::RuleDbl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule1Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(29);
      match(gramParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule2Context>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(30);
      match(gramParser::PT);
      setState(31);
      match(gramParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<gramParser::DoubleRule3Context>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(32);
      match(gramParser::INT);
      setState(33);
      match(gramParser::PT);
      setState(34);
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

gramParser::String_for_printContext* gramParser::PrintVariableContext::string_for_print() {
  return getRuleContext<gramParser::String_for_printContext>(0);
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
  enterRule(_localctx, 4, gramParser::RulePrint_any);

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
    setState(37);
    match(gramParser::PRINT);
    setState(38);
    match(gramParser::OPEN_BRAKET);
    setState(39);
    string_for_print(0);
    setState(40);
    match(gramParser::CLOSE_BRAKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_for_printContext ------------------------------------------------------------------

gramParser::String_for_printContext::String_for_printContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramParser::String_for_printContext::getRuleIndex() const {
  return gramParser::RuleString_for_print;
}

void gramParser::String_for_printContext::copyFrom(String_for_printContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OneLinePrintContext ------------------------------------------------------------------

gramParser::ExprContext* gramParser::OneLinePrintContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
}

gramParser::OneLinePrintContext::OneLinePrintContext(String_for_printContext *ctx) { copyFrom(ctx); }


std::any gramParser::OneLinePrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitOneLinePrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultLinePrintContext ------------------------------------------------------------------

std::vector<gramParser::String_for_printContext *> gramParser::MultLinePrintContext::string_for_print() {
  return getRuleContexts<gramParser::String_for_printContext>();
}

gramParser::String_for_printContext* gramParser::MultLinePrintContext::string_for_print(size_t i) {
  return getRuleContext<gramParser::String_for_printContext>(i);
}

tree::TerminalNode* gramParser::MultLinePrintContext::SEP_FOR_FUNCTIONS() {
  return getToken(gramParser::SEP_FOR_FUNCTIONS, 0);
}

tree::TerminalNode* gramParser::MultLinePrintContext::EOF() {
  return getToken(gramParser::EOF, 0);
}

gramParser::MultLinePrintContext::MultLinePrintContext(String_for_printContext *ctx) { copyFrom(ctx); }


std::any gramParser::MultLinePrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitMultLinePrint(this);
  else
    return visitor->visitChildren(this);
}

gramParser::String_for_printContext* gramParser::string_for_print() {
   return string_for_print(0);
}

gramParser::String_for_printContext* gramParser::string_for_print(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  gramParser::String_for_printContext *_localctx = _tracker.createInstance<String_for_printContext>(_ctx, parentState);
  gramParser::String_for_printContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, gramParser::RuleString_for_print, precedence);

    

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
    _localctx = _tracker.createInstance<OneLinePrintContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(43);
    expr(0);
    _ctx->stop = _input->LT(-1);
    setState(53);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultLinePrintContext>(_tracker.createInstance<String_for_printContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleString_for_print);
        setState(45);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(46);
        match(gramParser::SEP_FOR_FUNCTIONS);
        setState(47);
        string_for_print(0);
        setState(49);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(48);
          match(gramParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(55);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
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

tree::TerminalNode* gramParser::OnlyVarContext::VAR() {
  return getToken(gramParser::VAR, 0);
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
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, gramParser::RuleExpr, precedence);

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
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramParser::SUB: {
        _localctx = _tracker.createInstance<NegativeExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(57);
        match(gramParser::SUB);
        setState(58);
        expr(6);
        break;
      }

      case gramParser::INT:
      case gramParser::PT: {
        _localctx = _tracker.createInstance<DoubleContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(59);
        dbl();
        break;
      }

      case gramParser::OPEN_BRAKET: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(60);
        match(gramParser::OPEN_BRAKET);
        setState(61);
        expr(0);
        setState(62);
        match(gramParser::CLOSE_BRAKET);
        break;
      }

      case gramParser::VAR: {
        _localctx = _tracker.createInstance<OnlyVarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(64);
        match(gramParser::VAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(75);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(73);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(68);
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
          setState(69);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(70);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(71);
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
          setState(72);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(77);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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

tree::TerminalNode* gramParser::AssignedContext::VAR() {
  return getToken(gramParser::VAR, 0);
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
  enterRule(_localctx, 10, gramParser::RuleAssign);

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
    setState(78);
    match(gramParser::VAR);
    setState(79);
    match(gramParser::EQUAL);
    setState(80);
    expr(0);
   
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
    case 3: return string_for_printSempred(antlrcpp::downCast<String_for_printContext *>(context), predicateIndex);
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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

bool gramParser::string_for_printSempred(String_for_printContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool gramParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void gramParser::initialize() {
  ::antlr4::internal::call_once(gramParserOnceFlag, gramParserInitialize);
}
