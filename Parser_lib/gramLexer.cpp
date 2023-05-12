
// Generated from gram.g4 by ANTLR 4.12.0


#include "gramLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GramLexerStaticData final {
  GramLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramLexerStaticData(const GramLexerStaticData&) = delete;
  GramLexerStaticData(GramLexerStaticData&&) = delete;
  GramLexerStaticData& operator=(const GramLexerStaticData&) = delete;
  GramLexerStaticData& operator=(GramLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramlexerLexerOnceFlag;
GramLexerStaticData *gramlexerLexerStaticData = nullptr;

void gramlexerLexerInitialize() {
  assert(gramlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<GramLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "INT", "SEP", "WS", "MUL", "DIV", "ADD", "SUB", "EQUAL", 
      "VAR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,11,58,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,1,1,1,1,2,4,2,29,8,2,11,
  	2,12,2,30,1,3,1,3,1,4,4,4,36,8,4,11,4,12,4,37,1,4,1,4,1,5,1,5,1,6,1,6,
  	1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,5,10,54,8,10,10,10,12,10,57,9,10,0,
  	0,11,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,1,0,4,1,0,48,
  	57,3,0,9,10,13,13,32,32,2,0,65,90,97,122,3,0,48,57,65,90,97,122,60,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,1,
  	23,1,0,0,0,3,25,1,0,0,0,5,28,1,0,0,0,7,32,1,0,0,0,9,35,1,0,0,0,11,41,
  	1,0,0,0,13,43,1,0,0,0,15,45,1,0,0,0,17,47,1,0,0,0,19,49,1,0,0,0,21,51,
  	1,0,0,0,23,24,5,40,0,0,24,2,1,0,0,0,25,26,5,41,0,0,26,4,1,0,0,0,27,29,
  	7,0,0,0,28,27,1,0,0,0,29,30,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,6,
  	1,0,0,0,32,33,5,59,0,0,33,8,1,0,0,0,34,36,7,1,0,0,35,34,1,0,0,0,36,37,
  	1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,39,1,0,0,0,39,40,6,4,0,0,40,10,
  	1,0,0,0,41,42,5,42,0,0,42,12,1,0,0,0,43,44,5,47,0,0,44,14,1,0,0,0,45,
  	46,5,43,0,0,46,16,1,0,0,0,47,48,5,45,0,0,48,18,1,0,0,0,49,50,5,61,0,0,
  	50,20,1,0,0,0,51,55,7,2,0,0,52,54,7,3,0,0,53,52,1,0,0,0,54,57,1,0,0,0,
  	55,53,1,0,0,0,55,56,1,0,0,0,56,22,1,0,0,0,57,55,1,0,0,0,4,0,30,37,55,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramlexerLexerStaticData = staticData.release();
}

}

gramLexer::gramLexer(CharStream *input) : Lexer(input) {
  gramLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *gramlexerLexerStaticData->atn, gramlexerLexerStaticData->decisionToDFA, gramlexerLexerStaticData->sharedContextCache);
}

gramLexer::~gramLexer() {
  delete _interpreter;
}

std::string gramLexer::getGrammarFileName() const {
  return "gram.g4";
}

const std::vector<std::string>& gramLexer::getRuleNames() const {
  return gramlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& gramLexer::getChannelNames() const {
  return gramlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& gramLexer::getModeNames() const {
  return gramlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& gramLexer::getVocabulary() const {
  return gramlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramLexer::getSerializedATN() const {
  return gramlexerLexerStaticData->serializedATN;
}

const atn::ATN& gramLexer::getATN() const {
  return *gramlexerLexerStaticData->atn;
}




void gramLexer::initialize() {
  ::antlr4::internal::call_once(gramlexerLexerOnceFlag, gramlexerLexerInitialize);
}
