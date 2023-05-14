
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
      "INT", "SEP", "SEP_FOR_FUNCTIONS", "MUL", "DIV", "DEF", "PT", "ADD", 
      "SUB", "EQUAL", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", "NAME", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,15,80,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,4,0,33,8,0,11,0,12,0,34,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,13,1,13,5,13,69,8,13,10,13,12,13,72,9,13,1,
  	14,4,14,75,8,14,11,14,12,14,76,1,14,1,14,0,0,15,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,1,0,4,1,0,48,57,
  	2,0,65,90,97,122,3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,82,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,1,32,1,0,0,0,3,36,1,0,0,
  	0,5,38,1,0,0,0,7,40,1,0,0,0,9,42,1,0,0,0,11,44,1,0,0,0,13,48,1,0,0,0,
  	15,50,1,0,0,0,17,52,1,0,0,0,19,54,1,0,0,0,21,56,1,0,0,0,23,62,1,0,0,0,
  	25,64,1,0,0,0,27,66,1,0,0,0,29,74,1,0,0,0,31,33,7,0,0,0,32,31,1,0,0,0,
  	33,34,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,2,1,0,0,0,36,37,5,59,0,0,
  	37,4,1,0,0,0,38,39,5,44,0,0,39,6,1,0,0,0,40,41,5,42,0,0,41,8,1,0,0,0,
  	42,43,5,47,0,0,43,10,1,0,0,0,44,45,5,100,0,0,45,46,5,101,0,0,46,47,5,
  	102,0,0,47,12,1,0,0,0,48,49,5,46,0,0,49,14,1,0,0,0,50,51,5,43,0,0,51,
  	16,1,0,0,0,52,53,5,45,0,0,53,18,1,0,0,0,54,55,5,61,0,0,55,20,1,0,0,0,
  	56,57,5,112,0,0,57,58,5,114,0,0,58,59,5,105,0,0,59,60,5,110,0,0,60,61,
  	5,116,0,0,61,22,1,0,0,0,62,63,5,40,0,0,63,24,1,0,0,0,64,65,5,41,0,0,65,
  	26,1,0,0,0,66,70,7,1,0,0,67,69,7,2,0,0,68,67,1,0,0,0,69,72,1,0,0,0,70,
  	68,1,0,0,0,70,71,1,0,0,0,71,28,1,0,0,0,72,70,1,0,0,0,73,75,7,3,0,0,74,
  	73,1,0,0,0,75,76,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,
  	79,6,14,0,0,79,30,1,0,0,0,4,0,34,70,76,1,6,0,0
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
