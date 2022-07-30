
// Generated from c:\Users\dinop\Documents\UCSC\meow\proj\Meow.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  MeowLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, TOK_VOID = 5, TOK_INT = 6, TOK_STRING = 7, 
    TOK_NOT = 8, TOK_IF = 9, TOK_ELSE = 10, TOK_WHILE = 11, TOK_RETURN = 12, 
    TOK_STRUCT = 13, TOK_NULLPTR = 14, TOK_ARRAY = 15, TOK_ARROW = 16, TOK_ALLOC = 17, 
    TOK_PTR = 18, TOK_FUNCTION = 19, TOK_LT = 20, TOK_GT = 21, TOK_EQ = 22, 
    TOK_NE = 23, TOK_LE = 24, TOK_GE = 25, LETTER = 26, DECIMAL = 27, TOK_IDENT = 28, 
    OCTCON = 29, HEXCON = 30, TOK_INTCON = 31, WS = 32
  };

  explicit MeowLexer(antlr4::CharStream *input);
  ~MeowLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

