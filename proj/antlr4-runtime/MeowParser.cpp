
// Generated from c:\Users\dinop\Documents\UCSC\meow\proj\Meow.g4 by ANTLR 4.9.2


#include "MeowVisitor.h"

#include "MeowParser.h"


using namespace antlrcpp;
using namespace antlr4;

MeowParser::MeowParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MeowParser::~MeowParser() {
  delete _interpreter;
}

std::string MeowParser::getGrammarFileName() const {
  return "Meow.g4";
}

const std::vector<std::string>& MeowParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MeowParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

MeowParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MeowParser::ProgContext* MeowParser::ProgContext::prog() {
  return getRuleContext<MeowParser::ProgContext>(0);
}

MeowParser::FuncContext* MeowParser::ProgContext::func() {
  return getRuleContext<MeowParser::FuncContext>(0);
}


size_t MeowParser::ProgContext::getRuleIndex() const {
  return MeowParser::RuleProg;
}


antlrcpp::Any MeowParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}


MeowParser::ProgContext* MeowParser::prog() {
   return prog(0);
}

MeowParser::ProgContext* MeowParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MeowParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  MeowParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, MeowParser::RuleProg, precedence);

    

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
    _ctx->stop = _input->LT(-1);
    setState(21);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ProgContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleProg);
        setState(17);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(18);
        func(); 
      }
      setState(23);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

MeowParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MeowParser::StatContext *> MeowParser::FuncContext::stat() {
  return getRuleContexts<MeowParser::StatContext>();
}

MeowParser::StatContext* MeowParser::FuncContext::stat(size_t i) {
  return getRuleContext<MeowParser::StatContext>(i);
}


size_t MeowParser::FuncContext::getRuleIndex() const {
  return MeowParser::RuleFunc;
}


antlrcpp::Any MeowParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::FuncContext* MeowParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 2, MeowParser::RuleFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(MeowParser::T__0);
    setState(28);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MeowParser::TOK_INT) {
      setState(25);
      stat();
      setState(30);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(31);
    match(MeowParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

MeowParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MeowParser::DeclContext* MeowParser::StatContext::decl() {
  return getRuleContext<MeowParser::DeclContext>(0);
}


size_t MeowParser::StatContext::getRuleIndex() const {
  return MeowParser::RuleStat;
}


antlrcpp::Any MeowParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::StatContext* MeowParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, MeowParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    decl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MeowParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MeowParser::TypeContext::TOK_INT() {
  return getToken(MeowParser::TOK_INT, 0);
}


size_t MeowParser::TypeContext::getRuleIndex() const {
  return MeowParser::RuleType;
}


antlrcpp::Any MeowParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::TypeContext* MeowParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, MeowParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(MeowParser::TOK_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TidContext ------------------------------------------------------------------

MeowParser::TidContext::TidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MeowParser::TypeContext* MeowParser::TidContext::type() {
  return getRuleContext<MeowParser::TypeContext>(0);
}

tree::TerminalNode* MeowParser::TidContext::TOK_IDENT() {
  return getToken(MeowParser::TOK_IDENT, 0);
}


size_t MeowParser::TidContext::getRuleIndex() const {
  return MeowParser::RuleTid;
}


antlrcpp::Any MeowParser::TidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitTid(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::TidContext* MeowParser::tid() {
  TidContext *_localctx = _tracker.createInstance<TidContext>(_ctx, getState());
  enterRule(_localctx, 8, MeowParser::RuleTid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    type();
    setState(38);
    match(MeowParser::TOK_IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

MeowParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MeowParser::TidContext* MeowParser::DeclContext::tid() {
  return getRuleContext<MeowParser::TidContext>(0);
}

MeowParser::ExprContext* MeowParser::DeclContext::expr() {
  return getRuleContext<MeowParser::ExprContext>(0);
}


size_t MeowParser::DeclContext::getRuleIndex() const {
  return MeowParser::RuleDecl;
}


antlrcpp::Any MeowParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::DeclContext* MeowParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 10, MeowParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      tid();
      setState(41);
      match(MeowParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      tid();
      setState(44);
      match(MeowParser::T__3);
      setState(45);
      expr();
      setState(46);
      match(MeowParser::T__2);
      break;
    }

    default:
      break;
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

MeowParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MeowParser::ConstantContext* MeowParser::ExprContext::constant() {
  return getRuleContext<MeowParser::ConstantContext>(0);
}


size_t MeowParser::ExprContext::getRuleIndex() const {
  return MeowParser::RuleExpr;
}


antlrcpp::Any MeowParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::ExprContext* MeowParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 12, MeowParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

MeowParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MeowParser::ConstantContext::TOK_INTCON() {
  return getToken(MeowParser::TOK_INTCON, 0);
}

tree::TerminalNode* MeowParser::ConstantContext::TOK_NULLPTR() {
  return getToken(MeowParser::TOK_NULLPTR, 0);
}


size_t MeowParser::ConstantContext::getRuleIndex() const {
  return MeowParser::RuleConstant;
}


antlrcpp::Any MeowParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MeowVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

MeowParser::ConstantContext* MeowParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 14, MeowParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    _la = _input->LA(1);
    if (!(_la == MeowParser::TOK_NULLPTR

    || _la == MeowParser::TOK_INTCON)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MeowParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return progSempred(dynamic_cast<ProgContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MeowParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MeowParser::_decisionToDFA;
atn::PredictionContextCache MeowParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MeowParser::_atn;
std::vector<uint16_t> MeowParser::_serializedATN;

std::vector<std::string> MeowParser::_ruleNames = {
  "prog", "func", "stat", "type", "tid", "decl", "expr", "constant"
};

std::vector<std::string> MeowParser::_literalNames = {
  "", "'{'", "'}'", "';'", "'='", "'void'", "'int'", "'string'", "'not'", 
  "'if'", "'else'", "'while'", "'return'", "'struct'", "'nullptr'", "'array'", 
  "'->'", "'alloc'", "'ptr'", "'function'", "'<'", "'>'", "'=='", "'!='", 
  "'<='", "'>='"
};

std::vector<std::string> MeowParser::_symbolicNames = {
  "", "", "", "", "", "TOK_VOID", "TOK_INT", "TOK_STRING", "TOK_NOT", "TOK_IF", 
  "TOK_ELSE", "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT", "TOK_NULLPTR", "TOK_ARRAY", 
  "TOK_ARROW", "TOK_ALLOC", "TOK_PTR", "TOK_FUNCTION", "TOK_LT", "TOK_GT", 
  "TOK_EQ", "TOK_NE", "TOK_LE", "TOK_GE", "LETTER", "DECIMAL", "TOK_IDENT", 
  "OCTCON", "HEXCON", "TOK_INTCON", "WS"
};

dfa::Vocabulary MeowParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MeowParser::_tokenNames;

MeowParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x22, 0x39, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x7, 0x2, 0x16, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x19, 0xb, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1d, 0xa, 0x3, 0xc, 0x3, 0xe, 
       0x3, 0x20, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
       0x7, 0x33, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x2, 0x3, 0x2, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x2, 0x3, 0x4, 0x2, 0x10, 0x10, 0x21, 0x21, 0x2, 0x33, 0x2, 0x12, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x23, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x27, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x32, 0x3, 0x2, 0x2, 0x2, 0xe, 0x34, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x36, 0x3, 0x2, 0x2, 0x2, 0x12, 0x17, 0x8, 0x2, 0x1, 0x2, 
       0x13, 0x14, 0xc, 0x4, 0x2, 0x2, 0x14, 0x16, 0x5, 0x4, 0x3, 0x2, 0x15, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1e, 0x7, 0x3, 
       0x2, 0x2, 0x1b, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x1d, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 
       0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x1e, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x4, 0x2, 0x2, 0x22, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 0xc, 0x7, 0x2, 0x24, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x8, 0x2, 0x2, 0x26, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x27, 0x28, 0x5, 0x8, 0x5, 0x2, 0x28, 0x29, 0x7, 0x1e, 
       0x2, 0x2, 0x29, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0xa, 0x6, 
       0x2, 0x2b, 0x2c, 0x7, 0x5, 0x2, 0x2, 0x2c, 0x33, 0x3, 0x2, 0x2, 0x2, 
       0x2d, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 
       0x30, 0x5, 0xe, 0x8, 0x2, 0x30, 0x31, 0x7, 0x5, 0x2, 0x2, 0x31, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2d, 0x3, 
       0x2, 0x2, 0x2, 0x33, 0xd, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x5, 0x10, 
       0x9, 0x2, 0x35, 0xf, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x9, 0x2, 0x2, 
       0x2, 0x37, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5, 0x17, 0x1e, 0x32, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MeowParser::Initializer MeowParser::_init;
