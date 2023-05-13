
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, SEP = 2, SEP_FOR_FUNCTIONS = 3, WS = 4, MUL = 5, DIV = 6, DEF = 7, 
    PT = 8, ADD = 9, SUB = 10, EQUAL = 11, PRINT = 12, OPEN_BRAKET = 13, 
    CLOSE_BRAKET = 14, VAR = 15
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

