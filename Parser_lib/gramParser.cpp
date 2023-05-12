
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
      "prog", "expr", "assign"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "';'", "", "'*'", "'/'", "'+'", "'-'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "INT", "SEP", "WS", "MUL", "DIV", "ADD", "SUB", "EQUAL", 
      "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,11,49,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,3,0,10,8,0,1,0,1,0,1,0,
  	1,0,3,0,16,8,0,5,0,18,8,0,10,0,12,0,21,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,3,1,32,8,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,40,8,1,10,1,12,1,43,
  	9,1,1,2,1,2,1,2,1,2,1,2,0,2,0,2,3,0,2,4,0,2,1,0,6,7,1,0,8,9,53,0,9,1,
  	0,0,0,2,31,1,0,0,0,4,44,1,0,0,0,6,7,6,0,-1,0,7,10,3,2,1,0,8,10,3,4,2,
  	0,9,6,1,0,0,0,9,8,1,0,0,0,10,19,1,0,0,0,11,12,10,1,0,0,12,13,5,4,0,0,
  	13,15,3,0,0,0,14,16,5,0,0,1,15,14,1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,
  	17,11,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,1,1,0,0,0,
  	21,19,1,0,0,0,22,23,6,1,-1,0,23,24,5,9,0,0,24,32,3,2,1,6,25,32,5,3,0,
  	0,26,27,5,1,0,0,27,28,3,2,1,0,28,29,5,2,0,0,29,32,1,0,0,0,30,32,5,11,
  	0,0,31,22,1,0,0,0,31,25,1,0,0,0,31,26,1,0,0,0,31,30,1,0,0,0,32,41,1,0,
  	0,0,33,34,10,5,0,0,34,35,7,0,0,0,35,40,3,2,1,6,36,37,10,4,0,0,37,38,7,
  	1,0,0,38,40,3,2,1,5,39,33,1,0,0,0,39,36,1,0,0,0,40,43,1,0,0,0,41,39,1,
  	0,0,0,41,42,1,0,0,0,42,3,1,0,0,0,43,41,1,0,0,0,44,45,5,11,0,0,45,46,5,
  	10,0,0,46,47,3,2,1,0,47,5,1,0,0,0,6,9,15,19,31,39,41
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
    setState(9);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(7);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OneLineProgAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(8);
      assign();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(19);
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
        setState(11);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(12);
        match(gramParser::SEP);
        setState(13);
        prog(0);
        setState(15);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(14);
          match(gramParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(21);
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

gramParser::ExprContext* gramParser::ParensContext::expr() {
  return getRuleContext<gramParser::ExprContext>(0);
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
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* gramParser::IntContext::INT() {
  return getToken(gramParser::INT, 0);
}

gramParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any gramParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitInt(this);
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
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, gramParser::RuleExpr, precedence);

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
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramParser::SUB: {
        _localctx = _tracker.createInstance<NegativeExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(23);
        match(gramParser::SUB);
        setState(24);
        expr(6);
        break;
      }

      case gramParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(25);
        match(gramParser::INT);
        break;
      }

      case gramParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(26);
        match(gramParser::T__0);
        setState(27);
        expr(0);
        setState(28);
        match(gramParser::T__1);
        break;
      }

      case gramParser::VAR: {
        _localctx = _tracker.createInstance<OnlyVarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(30);
        match(gramParser::VAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
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
          setState(35);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
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
          setState(38);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
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
  enterRule(_localctx, 4, gramParser::RuleAssign);

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
    setState(44);
    match(gramParser::VAR);
    setState(45);
    match(gramParser::EQUAL);
    setState(46);
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
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
