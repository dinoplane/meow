
// Generated from Meow.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  MeowLexer : public antlr4::Lexer {
public:
  enum {
    TOK_VOID = 1, TOK_INT = 2, TOK_STRING = 3, TOK_NOT = 4, TOK_IF = 5, 
    TOK_ELSE = 6, TOK_WHILE = 7, TOK_RETURN = 8, TOK_STRUCT = 9, TOK_NULLPTR = 10, 
    TOK_ARRAY = 11, TOK_ARROW = 12, TOK_ALLOC = 13, TOK_PTR = 14, TOK_FUNCTION = 15, 
    TOK_LT = 16, TOK_GT = 17, TOK_EQ = 18, TOK_NE = 19, TOK_LE = 20, TOK_GE = 21, 
    LETTER = 22, DECIMAL = 23, WS = 24
  };

  explicit MeowLexer(antlr4::CharStream *input);

  ~MeowLexer() override;


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

