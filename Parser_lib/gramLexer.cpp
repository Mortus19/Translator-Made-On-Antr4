
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
      "INT", "SEP", "SEP_FOR_FUNCTIONS", "WS", "MUL", "DIV", "ADD", "SUB", 
      "EQUAL", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", "VAR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "';'", "','", "", "'*'", "'/'", "'+'", "'-'", "'='", "'print'", 
      "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "SEP", "SEP_FOR_FUNCTIONS", "WS", "MUL", "DIV", "ADD", 
      "SUB", "EQUAL", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,13,70,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,4,0,29,8,
  	0,11,0,12,0,30,1,1,1,1,1,2,1,2,1,3,4,3,38,8,3,11,3,12,3,39,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,
  	10,1,11,1,11,1,12,1,12,5,12,66,8,12,10,12,12,12,69,9,12,0,0,13,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,1,0,4,1,0,48,
  	57,3,0,9,10,13,13,32,32,2,0,65,90,97,122,3,0,48,57,65,90,97,122,72,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,1,28,1,0,0,0,3,32,1,0,0,0,5,34,1,0,0,0,7,37,1,
  	0,0,0,9,43,1,0,0,0,11,45,1,0,0,0,13,47,1,0,0,0,15,49,1,0,0,0,17,51,1,
  	0,0,0,19,53,1,0,0,0,21,59,1,0,0,0,23,61,1,0,0,0,25,63,1,0,0,0,27,29,7,
  	0,0,0,28,27,1,0,0,0,29,30,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,2,1,
  	0,0,0,32,33,5,59,0,0,33,4,1,0,0,0,34,35,5,44,0,0,35,6,1,0,0,0,36,38,7,
  	1,0,0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,41,1,
  	0,0,0,41,42,6,3,0,0,42,8,1,0,0,0,43,44,5,42,0,0,44,10,1,0,0,0,45,46,5,
  	47,0,0,46,12,1,0,0,0,47,48,5,43,0,0,48,14,1,0,0,0,49,50,5,45,0,0,50,16,
  	1,0,0,0,51,52,5,61,0,0,52,18,1,0,0,0,53,54,5,112,0,0,54,55,5,114,0,0,
  	55,56,5,105,0,0,56,57,5,110,0,0,57,58,5,116,0,0,58,20,1,0,0,0,59,60,5,
  	40,0,0,60,22,1,0,0,0,61,62,5,41,0,0,62,24,1,0,0,0,63,67,7,2,0,0,64,66,
  	7,3,0,0,65,64,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,26,
  	1,0,0,0,69,67,1,0,0,0,4,0,30,39,67,1,6,0,0
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
