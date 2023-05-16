
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
      "T__0", "T__1", "INT", "DEF", "SEP", "SEP_FOR_FUNCTIONS", "MUL", "DIV", 
      "PT", "ADD", "SUB", "EQUAL", "RET", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", 
      "NAME", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "", "'def'", "';'", "','", "'*'", "'/'", "'.'", 
      "'+'", "'-'", "'='", "'return'", "'print'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "INT", "DEF", "SEP", "SEP_FOR_FUNCTIONS", "MUL", "DIV", 
      "PT", "ADD", "SUB", "EQUAL", "RET", "PRINT", "OPEN_BRAKET", "CLOSE_BRAKET", 
      "NAME", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,18,97,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,1,1,1,1,2,4,2,43,8,2,11,
  	2,12,2,44,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,
  	1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,5,16,86,8,16,10,16,
  	12,16,89,9,16,1,17,4,17,92,8,17,11,17,12,17,93,1,17,1,17,0,0,18,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,
  	31,16,33,17,35,18,1,0,4,1,0,48,57,2,0,65,90,97,122,3,0,48,57,65,90,97,
  	122,3,0,9,10,13,13,32,32,99,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,1,37,1,0,0,0,3,39,1,0,
  	0,0,5,42,1,0,0,0,7,46,1,0,0,0,9,50,1,0,0,0,11,52,1,0,0,0,13,54,1,0,0,
  	0,15,56,1,0,0,0,17,58,1,0,0,0,19,60,1,0,0,0,21,62,1,0,0,0,23,64,1,0,0,
  	0,25,66,1,0,0,0,27,73,1,0,0,0,29,79,1,0,0,0,31,81,1,0,0,0,33,83,1,0,0,
  	0,35,91,1,0,0,0,37,38,5,123,0,0,38,2,1,0,0,0,39,40,5,125,0,0,40,4,1,0,
  	0,0,41,43,7,0,0,0,42,41,1,0,0,0,43,44,1,0,0,0,44,42,1,0,0,0,44,45,1,0,
  	0,0,45,6,1,0,0,0,46,47,5,100,0,0,47,48,5,101,0,0,48,49,5,102,0,0,49,8,
  	1,0,0,0,50,51,5,59,0,0,51,10,1,0,0,0,52,53,5,44,0,0,53,12,1,0,0,0,54,
  	55,5,42,0,0,55,14,1,0,0,0,56,57,5,47,0,0,57,16,1,0,0,0,58,59,5,46,0,0,
  	59,18,1,0,0,0,60,61,5,43,0,0,61,20,1,0,0,0,62,63,5,45,0,0,63,22,1,0,0,
  	0,64,65,5,61,0,0,65,24,1,0,0,0,66,67,5,114,0,0,67,68,5,101,0,0,68,69,
  	5,116,0,0,69,70,5,117,0,0,70,71,5,114,0,0,71,72,5,110,0,0,72,26,1,0,0,
  	0,73,74,5,112,0,0,74,75,5,114,0,0,75,76,5,105,0,0,76,77,5,110,0,0,77,
  	78,5,116,0,0,78,28,1,0,0,0,79,80,5,40,0,0,80,30,1,0,0,0,81,82,5,41,0,
  	0,82,32,1,0,0,0,83,87,7,1,0,0,84,86,7,2,0,0,85,84,1,0,0,0,86,89,1,0,0,
  	0,87,85,1,0,0,0,87,88,1,0,0,0,88,34,1,0,0,0,89,87,1,0,0,0,90,92,7,3,0,
  	0,91,90,1,0,0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,
  	0,95,96,6,17,0,0,96,36,1,0,0,0,4,0,44,87,93,1,6,0,0
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
