
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, INT = 3, DEF = 4, SEP = 5, SEP_FOR_FUNCTIONS = 6, 
    MUL = 7, DIV = 8, PT = 9, ADD = 10, SUB = 11, EQUAL = 12, RET = 13, 
    PRINT = 14, OPEN_BRAKET = 15, CLOSE_BRAKET = 16, NAME = 17, WS = 18
  };

  explicit gramLexer(antlr4::CharStream *input);

  ~gramLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

