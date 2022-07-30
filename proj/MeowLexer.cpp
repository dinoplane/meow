
// Generated from Meow.g4 by ANTLR 4.10.1


#include "MeowLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MeowLexerStaticData final {
  MeowLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MeowLexerStaticData(const MeowLexerStaticData&) = delete;
  MeowLexerStaticData(MeowLexerStaticData&&) = delete;
  MeowLexerStaticData& operator=(const MeowLexerStaticData&) = delete;
  MeowLexerStaticData& operator=(MeowLexerStaticData&&) = delete;

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

std::once_flag meowlexerLexerOnceFlag;
MeowLexerStaticData *meowlexerLexerStaticData = nullptr;

void meowlexerLexerInitialize() {
  assert(meowlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MeowLexerStaticData>(
    std::vector<std::string>{
      "TOK_VOID", "TOK_INT", "TOK_STRING", "TOK_NOT", "TOK_IF", "TOK_ELSE", 
      "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT", "TOK_NULLPTR", "TOK_ARRAY", 
      "TOK_ARROW", "TOK_ALLOC", "TOK_PTR", "TOK_FUNCTION", "TOK_LT", "TOK_GT", 
      "TOK_EQ", "TOK_NE", "TOK_LE", "TOK_GE", "LETTER", "DECIMAL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'void'", "'int'", "'string'", "'not'", "'if'", "'else'", "'while'", 
      "'return'", "'struct'", "'nullptr'", "'array'", "'->'", "'alloc'", 
      "'ptr'", "'function'", "'<'", "'>'", "'=='", "'!='", "'<='", "'>='"
    },
    std::vector<std::string>{
      "", "TOK_VOID", "TOK_INT", "TOK_STRING", "TOK_NOT", "TOK_IF", "TOK_ELSE", 
      "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT", "TOK_NULLPTR", "TOK_ARRAY", 
      "TOK_ARROW", "TOK_ALLOC", "TOK_PTR", "TOK_FUNCTION", "TOK_LT", "TOK_GT", 
      "TOK_EQ", "TOK_NE", "TOK_LE", "TOK_GE", "LETTER", "DECIMAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,24,160,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,4,23,155,8,23,11,23,12,23,156,1,23,1,23,0,0,24,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,19,39,20,41,21,43,22,45,23,47,24,1,0,3,3,0,65,90,95,95,97,122,
  	1,0,48,57,3,0,9,10,13,13,32,32,160,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,
  	0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,1,49,
  	1,0,0,0,3,54,1,0,0,0,5,58,1,0,0,0,7,65,1,0,0,0,9,69,1,0,0,0,11,72,1,0,
  	0,0,13,77,1,0,0,0,15,83,1,0,0,0,17,90,1,0,0,0,19,97,1,0,0,0,21,105,1,
  	0,0,0,23,111,1,0,0,0,25,114,1,0,0,0,27,120,1,0,0,0,29,124,1,0,0,0,31,
  	133,1,0,0,0,33,135,1,0,0,0,35,137,1,0,0,0,37,140,1,0,0,0,39,143,1,0,0,
  	0,41,146,1,0,0,0,43,149,1,0,0,0,45,151,1,0,0,0,47,154,1,0,0,0,49,50,5,
  	118,0,0,50,51,5,111,0,0,51,52,5,105,0,0,52,53,5,100,0,0,53,2,1,0,0,0,
  	54,55,5,105,0,0,55,56,5,110,0,0,56,57,5,116,0,0,57,4,1,0,0,0,58,59,5,
  	115,0,0,59,60,5,116,0,0,60,61,5,114,0,0,61,62,5,105,0,0,62,63,5,110,0,
  	0,63,64,5,103,0,0,64,6,1,0,0,0,65,66,5,110,0,0,66,67,5,111,0,0,67,68,
  	5,116,0,0,68,8,1,0,0,0,69,70,5,105,0,0,70,71,5,102,0,0,71,10,1,0,0,0,
  	72,73,5,101,0,0,73,74,5,108,0,0,74,75,5,115,0,0,75,76,5,101,0,0,76,12,
  	1,0,0,0,77,78,5,119,0,0,78,79,5,104,0,0,79,80,5,105,0,0,80,81,5,108,0,
  	0,81,82,5,101,0,0,82,14,1,0,0,0,83,84,5,114,0,0,84,85,5,101,0,0,85,86,
  	5,116,0,0,86,87,5,117,0,0,87,88,5,114,0,0,88,89,5,110,0,0,89,16,1,0,0,
  	0,90,91,5,115,0,0,91,92,5,116,0,0,92,93,5,114,0,0,93,94,5,117,0,0,94,
  	95,5,99,0,0,95,96,5,116,0,0,96,18,1,0,0,0,97,98,5,110,0,0,98,99,5,117,
  	0,0,99,100,5,108,0,0,100,101,5,108,0,0,101,102,5,112,0,0,102,103,5,116,
  	0,0,103,104,5,114,0,0,104,20,1,0,0,0,105,106,5,97,0,0,106,107,5,114,0,
  	0,107,108,5,114,0,0,108,109,5,97,0,0,109,110,5,121,0,0,110,22,1,0,0,0,
  	111,112,5,45,0,0,112,113,5,62,0,0,113,24,1,0,0,0,114,115,5,97,0,0,115,
  	116,5,108,0,0,116,117,5,108,0,0,117,118,5,111,0,0,118,119,5,99,0,0,119,
  	26,1,0,0,0,120,121,5,112,0,0,121,122,5,116,0,0,122,123,5,114,0,0,123,
  	28,1,0,0,0,124,125,5,102,0,0,125,126,5,117,0,0,126,127,5,110,0,0,127,
  	128,5,99,0,0,128,129,5,116,0,0,129,130,5,105,0,0,130,131,5,111,0,0,131,
  	132,5,110,0,0,132,30,1,0,0,0,133,134,5,60,0,0,134,32,1,0,0,0,135,136,
  	5,62,0,0,136,34,1,0,0,0,137,138,5,61,0,0,138,139,5,61,0,0,139,36,1,0,
  	0,0,140,141,5,33,0,0,141,142,5,61,0,0,142,38,1,0,0,0,143,144,5,60,0,0,
  	144,145,5,61,0,0,145,40,1,0,0,0,146,147,5,62,0,0,147,148,5,61,0,0,148,
  	42,1,0,0,0,149,150,7,0,0,0,150,44,1,0,0,0,151,152,7,1,0,0,152,46,1,0,
  	0,0,153,155,7,2,0,0,154,153,1,0,0,0,155,156,1,0,0,0,156,154,1,0,0,0,156,
  	157,1,0,0,0,157,158,1,0,0,0,158,159,6,23,0,0,159,48,1,0,0,0,2,0,156,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  meowlexerLexerStaticData = staticData.release();
}

}

MeowLexer::MeowLexer(CharStream *input) : Lexer(input) {
  MeowLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *meowlexerLexerStaticData->atn, meowlexerLexerStaticData->decisionToDFA, meowlexerLexerStaticData->sharedContextCache);
}

MeowLexer::~MeowLexer() {
  delete _interpreter;
}

std::string MeowLexer::getGrammarFileName() const {
  return "Meow.g4";
}

const std::vector<std::string>& MeowLexer::getRuleNames() const {
  return meowlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MeowLexer::getChannelNames() const {
  return meowlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MeowLexer::getModeNames() const {
  return meowlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MeowLexer::getVocabulary() const {
  return meowlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MeowLexer::getSerializedATN() const {
  return meowlexerLexerStaticData->serializedATN;
}

const atn::ATN& MeowLexer::getATN() const {
  return *meowlexerLexerStaticData->atn;
}




void MeowLexer::initialize() {
  std::call_once(meowlexerLexerOnceFlag, meowlexerLexerInitialize);
}