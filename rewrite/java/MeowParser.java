// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class MeowParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.11.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, WS=13, TOK_VOID=14, TOK_INT=15, TOK_FLOAT=16, 
		TOK_STRING=17, TOK_IF=18, TOK_ELSE=19, TOK_WHILE=20, TOK_FOR=21, TOK_RETURN=22, 
		TOK_NOT=23, TOK_ADDEQ=24, TOK_SUBEQ=25, TOK_INC=26, TOK_DEC=27, TOK_LT=28, 
		TOK_GT=29, TOK_EQ=30, TOK_NE=31, TOK_LE=32, TOK_GE=33, TOK_ARROW=34, TOK_INTCON=35, 
		TOK_FLOATCON=36, TOK_STRINGCON=37, TOK_IDENT=38, BAD_CHAR=39;
	public static final int
		RULE_prog = 0, RULE_stat = 1, RULE_block = 2, RULE_typeid = 3, RULE_type = 4, 
		RULE_decl = 5, RULE_declhead = 6, RULE_assign = 7, RULE_assignhead = 8, 
		RULE_crement = 9, RULE_callstmt = 10, RULE_call = 11, RULE_condition = 12, 
		RULE_ifelse = 13, RULE_whilelp = 14, RULE_forlp = 15, RULE_return = 16, 
		RULE_expr = 17, RULE_comp = 18, RULE_factor = 19, RULE_term = 20, RULE_expo = 21, 
		RULE_unop = 22, RULE_unit = 23, RULE_constant = 24, RULE_variable = 25;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "stat", "block", "typeid", "type", "decl", "declhead", "assign", 
			"assignhead", "crement", "callstmt", "call", "condition", "ifelse", "whilelp", 
			"forlp", "return", "expr", "comp", "factor", "term", "expo", "unop", 
			"unit", "constant", "variable"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'{'", "'}'", "';'", "'='", "'('", "','", "')'", "'+'", "'-'", 
			"'*'", "'/'", "'^'", null, "'void'", "'int'", "'float'", "'string'", 
			"'if'", "'else'", "'while'", "'for'", "'return'", "'not'", "'+='", "'-='", 
			"'++'", "'--'", "'<'", "'>'", "'=='", "'!='", "'<='", "'>='", "'->'", 
			null, null, "'\"IAMASTRING\"'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "WS", "TOK_VOID", "TOK_INT", "TOK_FLOAT", "TOK_STRING", "TOK_IF", 
			"TOK_ELSE", "TOK_WHILE", "TOK_FOR", "TOK_RETURN", "TOK_NOT", "TOK_ADDEQ", 
			"TOK_SUBEQ", "TOK_INC", "TOK_DEC", "TOK_LT", "TOK_GT", "TOK_EQ", "TOK_NE", 
			"TOK_LE", "TOK_GE", "TOK_ARROW", "TOK_INTCON", "TOK_FLOATCON", "TOK_STRINGCON", 
			"TOK_IDENT", "BAD_CHAR"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "java-escape"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public MeowParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((_la) & ~0x3f) == 0 && ((1L << _la) & 274883641346L) != 0) {
				{
				{
				setState(52);
				stat();
				}
				}
				setState(57);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatContext extends ParserRuleContext {
		public DeclContext decl() {
			return getRuleContext(DeclContext.class,0);
		}
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public CallstmtContext callstmt() {
			return getRuleContext(CallstmtContext.class,0);
		}
		public IfelseContext ifelse() {
			return getRuleContext(IfelseContext.class,0);
		}
		public WhilelpContext whilelp() {
			return getRuleContext(WhilelpContext.class,0);
		}
		public ReturnContext return_() {
			return getRuleContext(ReturnContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterStat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitStat(this);
		}
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_stat);
		try {
			setState(65);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(58);
				decl();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				assign();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(60);
				block();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(61);
				callstmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(62);
				ifelse();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(63);
				whilelp();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(64);
				return_();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitBlock(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			match(T__0);
			setState(71);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((_la) & ~0x3f) == 0 && ((1L << _la) & 274883641346L) != 0) {
				{
				{
				setState(68);
				stat();
				}
				}
				setState(73);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(74);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeidContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode TOK_IDENT() { return getToken(MeowParser.TOK_IDENT, 0); }
		public TypeidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeid; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterTypeid(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitTypeid(this);
		}
	}

	public final TypeidContext typeid() throws RecognitionException {
		TypeidContext _localctx = new TypeidContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_typeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			type();
			setState(77);
			match(TOK_IDENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode TOK_INT() { return getToken(MeowParser.TOK_INT, 0); }
		public TerminalNode TOK_FLOAT() { return getToken(MeowParser.TOK_FLOAT, 0); }
		public TerminalNode TOK_STRING() { return getToken(MeowParser.TOK_STRING, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitType(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			_la = _input.LA(1);
			if ( !(((_la) & ~0x3f) == 0 && ((1L << _la) & 229376L) != 0) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclContext extends ParserRuleContext {
		public DeclheadContext declhead() {
			return getRuleContext(DeclheadContext.class,0);
		}
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterDecl(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitDecl(this);
		}
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			declhead();
			setState(82);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclheadContext extends ParserRuleContext {
		public TypeidContext typeid() {
			return getRuleContext(TypeidContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclheadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declhead; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterDeclhead(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitDeclhead(this);
		}
	}

	public final DeclheadContext declhead() throws RecognitionException {
		DeclheadContext _localctx = new DeclheadContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_declhead);
		try {
			setState(89);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(84);
				typeid();
				setState(85);
				match(T__3);
				setState(86);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(88);
				typeid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignContext extends ParserRuleContext {
		public AssignheadContext assignhead() {
			return getRuleContext(AssignheadContext.class,0);
		}
		public AssignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterAssign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitAssign(this);
		}
	}

	public final AssignContext assign() throws RecognitionException {
		AssignContext _localctx = new AssignContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_assign);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(91);
			assignhead();
			setState(92);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignheadContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public CrementContext crement() {
			return getRuleContext(CrementContext.class,0);
		}
		public AssignheadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignhead; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterAssignhead(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitAssignhead(this);
		}
	}

	public final AssignheadContext assignhead() throws RecognitionException {
		AssignheadContext _localctx = new AssignheadContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_assignhead);
		try {
			setState(99);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(94);
				variable();
				setState(95);
				match(T__3);
				setState(96);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(98);
				crement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CrementContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode TOK_ADDEQ() { return getToken(MeowParser.TOK_ADDEQ, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode TOK_SUBEQ() { return getToken(MeowParser.TOK_SUBEQ, 0); }
		public TerminalNode TOK_INC() { return getToken(MeowParser.TOK_INC, 0); }
		public TerminalNode TOK_DEC() { return getToken(MeowParser.TOK_DEC, 0); }
		public CrementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_crement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterCrement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitCrement(this);
		}
	}

	public final CrementContext crement() throws RecognitionException {
		CrementContext _localctx = new CrementContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_crement);
		try {
			setState(115);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(101);
				variable();
				setState(102);
				match(TOK_ADDEQ);
				setState(103);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				variable();
				setState(106);
				match(TOK_SUBEQ);
				setState(107);
				expr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(109);
				variable();
				setState(110);
				match(TOK_INC);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(112);
				variable();
				setState(113);
				match(TOK_DEC);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CallstmtContext extends ParserRuleContext {
		public CallContext call() {
			return getRuleContext(CallContext.class,0);
		}
		public CallstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callstmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterCallstmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitCallstmt(this);
		}
	}

	public final CallstmtContext callstmt() throws RecognitionException {
		CallstmtContext _localctx = new CallstmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_callstmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			call();
			setState(118);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CallContext extends ParserRuleContext {
		public TerminalNode TOK_IDENT() { return getToken(MeowParser.TOK_IDENT, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public CallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_call; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterCall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitCall(this);
		}
	}

	public final CallContext call() throws RecognitionException {
		CallContext _localctx = new CallContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_call);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(TOK_IDENT);
			setState(121);
			match(T__4);
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((_la) & ~0x3f) == 0 && ((1L << _la) & 515404464928L) != 0) {
				{
				setState(122);
				expr();
				}
			}

			setState(129);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(125);
				match(T__5);
				setState(126);
				expr();
				}
				}
				setState(131);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(132);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConditionContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitCondition(this);
		}
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_condition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			match(T__4);
			setState(135);
			expr();
			setState(136);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfelseContext extends ParserRuleContext {
		public TerminalNode TOK_IF() { return getToken(MeowParser.TOK_IF, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public TerminalNode TOK_ELSE() { return getToken(MeowParser.TOK_ELSE, 0); }
		public IfelseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifelse; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterIfelse(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitIfelse(this);
		}
	}

	public final IfelseContext ifelse() throws RecognitionException {
		IfelseContext _localctx = new IfelseContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_ifelse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			match(TOK_IF);
			setState(139);
			condition();
			setState(140);
			stat();
			setState(143);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(141);
				match(TOK_ELSE);
				setState(142);
				stat();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WhilelpContext extends ParserRuleContext {
		public TerminalNode TOK_WHILE() { return getToken(MeowParser.TOK_WHILE, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public WhilelpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whilelp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterWhilelp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitWhilelp(this);
		}
	}

	public final WhilelpContext whilelp() throws RecognitionException {
		WhilelpContext _localctx = new WhilelpContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_whilelp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(145);
			match(TOK_WHILE);
			setState(146);
			condition();
			setState(147);
			stat();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ForlpContext extends ParserRuleContext {
		public TerminalNode TOK_FOR() { return getToken(MeowParser.TOK_FOR, 0); }
		public DeclheadContext declhead() {
			return getRuleContext(DeclheadContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignheadContext assignhead() {
			return getRuleContext(AssignheadContext.class,0);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public ForlpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forlp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterForlp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitForlp(this);
		}
	}

	public final ForlpContext forlp() throws RecognitionException {
		ForlpContext _localctx = new ForlpContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_forlp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(TOK_FOR);
			setState(150);
			match(T__4);
			setState(151);
			declhead();
			setState(152);
			match(T__2);
			setState(153);
			expr();
			setState(154);
			match(T__2);
			setState(155);
			assignhead();
			setState(156);
			match(T__6);
			setState(157);
			stat();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReturnContext extends ParserRuleContext {
		public TerminalNode TOK_RETURN() { return getToken(MeowParser.TOK_RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterReturn(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitReturn(this);
		}
	}

	public final ReturnContext return_() throws RecognitionException {
		ReturnContext _localctx = new ReturnContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_return);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			match(TOK_RETURN);
			setState(161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((_la) & ~0x3f) == 0 && ((1L << _la) & 515404464928L) != 0) {
				{
				setState(160);
				expr();
				}
			}

			setState(163);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public Token op;
		public List<CompContext> comp() {
			return getRuleContexts(CompContext.class);
		}
		public CompContext comp(int i) {
			return getRuleContext(CompContext.class,i);
		}
		public List<TerminalNode> TOK_EQ() { return getTokens(MeowParser.TOK_EQ); }
		public TerminalNode TOK_EQ(int i) {
			return getToken(MeowParser.TOK_EQ, i);
		}
		public List<TerminalNode> TOK_NE() { return getTokens(MeowParser.TOK_NE); }
		public TerminalNode TOK_NE(int i) {
			return getToken(MeowParser.TOK_NE, i);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitExpr(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			comp();
			setState(170);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TOK_EQ || _la==TOK_NE) {
				{
				{
				setState(166);
				((ExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==TOK_EQ || _la==TOK_NE) ) {
					((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(167);
				comp();
				}
				}
				setState(172);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CompContext extends ParserRuleContext {
		public Token op;
		public List<FactorContext> factor() {
			return getRuleContexts(FactorContext.class);
		}
		public FactorContext factor(int i) {
			return getRuleContext(FactorContext.class,i);
		}
		public List<TerminalNode> TOK_LT() { return getTokens(MeowParser.TOK_LT); }
		public TerminalNode TOK_LT(int i) {
			return getToken(MeowParser.TOK_LT, i);
		}
		public List<TerminalNode> TOK_GT() { return getTokens(MeowParser.TOK_GT); }
		public TerminalNode TOK_GT(int i) {
			return getToken(MeowParser.TOK_GT, i);
		}
		public List<TerminalNode> TOK_LE() { return getTokens(MeowParser.TOK_LE); }
		public TerminalNode TOK_LE(int i) {
			return getToken(MeowParser.TOK_LE, i);
		}
		public List<TerminalNode> TOK_GE() { return getTokens(MeowParser.TOK_GE); }
		public TerminalNode TOK_GE(int i) {
			return getToken(MeowParser.TOK_GE, i);
		}
		public CompContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterComp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitComp(this);
		}
	}

	public final CompContext comp() throws RecognitionException {
		CompContext _localctx = new CompContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_comp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(173);
			factor();
			setState(178);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((_la) & ~0x3f) == 0 && ((1L << _la) & 13690208256L) != 0) {
				{
				{
				setState(174);
				((CompContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((_la) & ~0x3f) == 0 && ((1L << _la) & 13690208256L) != 0) ) {
					((CompContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(175);
				factor();
				}
				}
				setState(180);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FactorContext extends ParserRuleContext {
		public Token op;
		public List<TermContext> term() {
			return getRuleContexts(TermContext.class);
		}
		public TermContext term(int i) {
			return getRuleContext(TermContext.class,i);
		}
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterFactor(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitFactor(this);
		}
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_factor);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			term();
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__7 || _la==T__8) {
				{
				{
				setState(182);
				((FactorContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__7 || _la==T__8) ) {
					((FactorContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(183);
				term();
				}
				}
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermContext extends ParserRuleContext {
		public Token op;
		public List<ExpoContext> expo() {
			return getRuleContexts(ExpoContext.class);
		}
		public ExpoContext expo(int i) {
			return getRuleContext(ExpoContext.class,i);
		}
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterTerm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitTerm(this);
		}
	}

	public final TermContext term() throws RecognitionException {
		TermContext _localctx = new TermContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_term);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			expo();
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__9 || _la==T__10) {
				{
				{
				setState(190);
				((TermContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__9 || _la==T__10) ) {
					((TermContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(191);
				expo();
				}
				}
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpoContext extends ParserRuleContext {
		public List<UnopContext> unop() {
			return getRuleContexts(UnopContext.class);
		}
		public UnopContext unop(int i) {
			return getRuleContext(UnopContext.class,i);
		}
		public ExpoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expo; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterExpo(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitExpo(this);
		}
	}

	public final ExpoContext expo() throws RecognitionException {
		ExpoContext _localctx = new ExpoContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_expo);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			unop();
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__11) {
				{
				{
				setState(198);
				match(T__11);
				setState(199);
				unop();
				}
				}
				setState(204);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnopContext extends ParserRuleContext {
		public UnitContext unit() {
			return getRuleContext(UnitContext.class,0);
		}
		public TerminalNode TOK_NOT() { return getToken(MeowParser.TOK_NOT, 0); }
		public UnopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unop; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterUnop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitUnop(this);
		}
	}

	public final UnopContext unop() throws RecognitionException {
		UnopContext _localctx = new UnopContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_unop);
		try {
			setState(212);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(205);
				match(T__7);
				setState(206);
				unit();
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 2);
				{
				setState(207);
				match(T__8);
				setState(208);
				unit();
				}
				break;
			case TOK_NOT:
				enterOuterAlt(_localctx, 3);
				{
				setState(209);
				match(TOK_NOT);
				setState(210);
				unit();
				}
				break;
			case T__4:
			case TOK_INTCON:
			case TOK_FLOATCON:
			case TOK_STRINGCON:
			case TOK_IDENT:
				enterOuterAlt(_localctx, 4);
				{
				setState(211);
				unit();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitContext extends ParserRuleContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public UnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unit; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterUnit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitUnit(this);
		}
	}

	public final UnitContext unit() throws RecognitionException {
		UnitContext _localctx = new UnitContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_unit);
		try {
			setState(220);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOK_INTCON:
			case TOK_FLOATCON:
			case TOK_STRINGCON:
				enterOuterAlt(_localctx, 1);
				{
				setState(214);
				constant();
				}
				break;
			case TOK_IDENT:
				enterOuterAlt(_localctx, 2);
				{
				setState(215);
				variable();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 3);
				{
				setState(216);
				match(T__4);
				setState(217);
				expr();
				setState(218);
				match(T__6);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstantContext extends ParserRuleContext {
		public TerminalNode TOK_INTCON() { return getToken(MeowParser.TOK_INTCON, 0); }
		public TerminalNode TOK_FLOATCON() { return getToken(MeowParser.TOK_FLOATCON, 0); }
		public TerminalNode TOK_STRINGCON() { return getToken(MeowParser.TOK_STRINGCON, 0); }
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterConstant(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitConstant(this);
		}
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_constant);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			_la = _input.LA(1);
			if ( !(((_la) & ~0x3f) == 0 && ((1L << _la) & 240518168576L) != 0) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public TerminalNode TOK_IDENT() { return getToken(MeowParser.TOK_IDENT, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MeowListener ) ((MeowListener)listener).exitVariable(this);
		}
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			match(TOK_IDENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\'\u00e3\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0001\u0000\u0005\u00006\b\u0000\n\u0000\f\u0000"+
		"9\t\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001B\b\u0001\u0001\u0002\u0001\u0002"+
		"\u0005\u0002F\b\u0002\n\u0002\f\u0002I\t\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0003\u0006Z\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\bd\b\b\u0001\t\u0001\t"+
		"\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0003\tt\b\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0003\u000b|\b\u000b\u0001\u000b\u0001"+
		"\u000b\u0005\u000b\u0080\b\u000b\n\u000b\f\u000b\u0083\t\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0003\r\u0090\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001"+
		"\u0010\u0003\u0010\u00a2\b\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0005\u0011\u00a9\b\u0011\n\u0011\f\u0011\u00ac\t\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0005\u0012\u00b1\b\u0012\n\u0012"+
		"\f\u0012\u00b4\t\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0005\u0013"+
		"\u00b9\b\u0013\n\u0013\f\u0013\u00bc\t\u0013\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0005\u0014\u00c1\b\u0014\n\u0014\f\u0014\u00c4\t\u0014\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0005\u0015\u00c9\b\u0015\n\u0015\f\u0015\u00cc"+
		"\t\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0003\u0016\u00d5\b\u0016\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u00dd\b\u0017\u0001"+
		"\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0000\u0000\u001a"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$&(*,.02\u0000\u0006\u0001\u0000\u000f\u0011\u0001\u0000"+
		"\u001e\u001f\u0002\u0000\u001c\u001d !\u0001\u0000\b\t\u0001\u0000\n\u000b"+
		"\u0001\u0000#%\u00e3\u00007\u0001\u0000\u0000\u0000\u0002A\u0001\u0000"+
		"\u0000\u0000\u0004C\u0001\u0000\u0000\u0000\u0006L\u0001\u0000\u0000\u0000"+
		"\bO\u0001\u0000\u0000\u0000\nQ\u0001\u0000\u0000\u0000\fY\u0001\u0000"+
		"\u0000\u0000\u000e[\u0001\u0000\u0000\u0000\u0010c\u0001\u0000\u0000\u0000"+
		"\u0012s\u0001\u0000\u0000\u0000\u0014u\u0001\u0000\u0000\u0000\u0016x"+
		"\u0001\u0000\u0000\u0000\u0018\u0086\u0001\u0000\u0000\u0000\u001a\u008a"+
		"\u0001\u0000\u0000\u0000\u001c\u0091\u0001\u0000\u0000\u0000\u001e\u0095"+
		"\u0001\u0000\u0000\u0000 \u009f\u0001\u0000\u0000\u0000\"\u00a5\u0001"+
		"\u0000\u0000\u0000$\u00ad\u0001\u0000\u0000\u0000&\u00b5\u0001\u0000\u0000"+
		"\u0000(\u00bd\u0001\u0000\u0000\u0000*\u00c5\u0001\u0000\u0000\u0000,"+
		"\u00d4\u0001\u0000\u0000\u0000.\u00dc\u0001\u0000\u0000\u00000\u00de\u0001"+
		"\u0000\u0000\u00002\u00e0\u0001\u0000\u0000\u000046\u0003\u0002\u0001"+
		"\u000054\u0001\u0000\u0000\u000069\u0001\u0000\u0000\u000075\u0001\u0000"+
		"\u0000\u000078\u0001\u0000\u0000\u00008\u0001\u0001\u0000\u0000\u0000"+
		"97\u0001\u0000\u0000\u0000:B\u0003\n\u0005\u0000;B\u0003\u000e\u0007\u0000"+
		"<B\u0003\u0004\u0002\u0000=B\u0003\u0014\n\u0000>B\u0003\u001a\r\u0000"+
		"?B\u0003\u001c\u000e\u0000@B\u0003 \u0010\u0000A:\u0001\u0000\u0000\u0000"+
		"A;\u0001\u0000\u0000\u0000A<\u0001\u0000\u0000\u0000A=\u0001\u0000\u0000"+
		"\u0000A>\u0001\u0000\u0000\u0000A?\u0001\u0000\u0000\u0000A@\u0001\u0000"+
		"\u0000\u0000B\u0003\u0001\u0000\u0000\u0000CG\u0005\u0001\u0000\u0000"+
		"DF\u0003\u0002\u0001\u0000ED\u0001\u0000\u0000\u0000FI\u0001\u0000\u0000"+
		"\u0000GE\u0001\u0000\u0000\u0000GH\u0001\u0000\u0000\u0000HJ\u0001\u0000"+
		"\u0000\u0000IG\u0001\u0000\u0000\u0000JK\u0005\u0002\u0000\u0000K\u0005"+
		"\u0001\u0000\u0000\u0000LM\u0003\b\u0004\u0000MN\u0005&\u0000\u0000N\u0007"+
		"\u0001\u0000\u0000\u0000OP\u0007\u0000\u0000\u0000P\t\u0001\u0000\u0000"+
		"\u0000QR\u0003\f\u0006\u0000RS\u0005\u0003\u0000\u0000S\u000b\u0001\u0000"+
		"\u0000\u0000TU\u0003\u0006\u0003\u0000UV\u0005\u0004\u0000\u0000VW\u0003"+
		"\"\u0011\u0000WZ\u0001\u0000\u0000\u0000XZ\u0003\u0006\u0003\u0000YT\u0001"+
		"\u0000\u0000\u0000YX\u0001\u0000\u0000\u0000Z\r\u0001\u0000\u0000\u0000"+
		"[\\\u0003\u0010\b\u0000\\]\u0005\u0003\u0000\u0000]\u000f\u0001\u0000"+
		"\u0000\u0000^_\u00032\u0019\u0000_`\u0005\u0004\u0000\u0000`a\u0003\""+
		"\u0011\u0000ad\u0001\u0000\u0000\u0000bd\u0003\u0012\t\u0000c^\u0001\u0000"+
		"\u0000\u0000cb\u0001\u0000\u0000\u0000d\u0011\u0001\u0000\u0000\u0000"+
		"ef\u00032\u0019\u0000fg\u0005\u0018\u0000\u0000gh\u0003\"\u0011\u0000"+
		"ht\u0001\u0000\u0000\u0000ij\u00032\u0019\u0000jk\u0005\u0019\u0000\u0000"+
		"kl\u0003\"\u0011\u0000lt\u0001\u0000\u0000\u0000mn\u00032\u0019\u0000"+
		"no\u0005\u001a\u0000\u0000ot\u0001\u0000\u0000\u0000pq\u00032\u0019\u0000"+
		"qr\u0005\u001b\u0000\u0000rt\u0001\u0000\u0000\u0000se\u0001\u0000\u0000"+
		"\u0000si\u0001\u0000\u0000\u0000sm\u0001\u0000\u0000\u0000sp\u0001\u0000"+
		"\u0000\u0000t\u0013\u0001\u0000\u0000\u0000uv\u0003\u0016\u000b\u0000"+
		"vw\u0005\u0003\u0000\u0000w\u0015\u0001\u0000\u0000\u0000xy\u0005&\u0000"+
		"\u0000y{\u0005\u0005\u0000\u0000z|\u0003\"\u0011\u0000{z\u0001\u0000\u0000"+
		"\u0000{|\u0001\u0000\u0000\u0000|\u0081\u0001\u0000\u0000\u0000}~\u0005"+
		"\u0006\u0000\u0000~\u0080\u0003\"\u0011\u0000\u007f}\u0001\u0000\u0000"+
		"\u0000\u0080\u0083\u0001\u0000\u0000\u0000\u0081\u007f\u0001\u0000\u0000"+
		"\u0000\u0081\u0082\u0001\u0000\u0000\u0000\u0082\u0084\u0001\u0000\u0000"+
		"\u0000\u0083\u0081\u0001\u0000\u0000\u0000\u0084\u0085\u0005\u0007\u0000"+
		"\u0000\u0085\u0017\u0001\u0000\u0000\u0000\u0086\u0087\u0005\u0005\u0000"+
		"\u0000\u0087\u0088\u0003\"\u0011\u0000\u0088\u0089\u0005\u0007\u0000\u0000"+
		"\u0089\u0019\u0001\u0000\u0000\u0000\u008a\u008b\u0005\u0012\u0000\u0000"+
		"\u008b\u008c\u0003\u0018\f\u0000\u008c\u008f\u0003\u0002\u0001\u0000\u008d"+
		"\u008e\u0005\u0013\u0000\u0000\u008e\u0090\u0003\u0002\u0001\u0000\u008f"+
		"\u008d\u0001\u0000\u0000\u0000\u008f\u0090\u0001\u0000\u0000\u0000\u0090"+
		"\u001b\u0001\u0000\u0000\u0000\u0091\u0092\u0005\u0014\u0000\u0000\u0092"+
		"\u0093\u0003\u0018\f\u0000\u0093\u0094\u0003\u0002\u0001\u0000\u0094\u001d"+
		"\u0001\u0000\u0000\u0000\u0095\u0096\u0005\u0015\u0000\u0000\u0096\u0097"+
		"\u0005\u0005\u0000\u0000\u0097\u0098\u0003\f\u0006\u0000\u0098\u0099\u0005"+
		"\u0003\u0000\u0000\u0099\u009a\u0003\"\u0011\u0000\u009a\u009b\u0005\u0003"+
		"\u0000\u0000\u009b\u009c\u0003\u0010\b\u0000\u009c\u009d\u0005\u0007\u0000"+
		"\u0000\u009d\u009e\u0003\u0002\u0001\u0000\u009e\u001f\u0001\u0000\u0000"+
		"\u0000\u009f\u00a1\u0005\u0016\u0000\u0000\u00a0\u00a2\u0003\"\u0011\u0000"+
		"\u00a1\u00a0\u0001\u0000\u0000\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000"+
		"\u00a2\u00a3\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005\u0003\u0000\u0000"+
		"\u00a4!\u0001\u0000\u0000\u0000\u00a5\u00aa\u0003$\u0012\u0000\u00a6\u00a7"+
		"\u0007\u0001\u0000\u0000\u00a7\u00a9\u0003$\u0012\u0000\u00a8\u00a6\u0001"+
		"\u0000\u0000\u0000\u00a9\u00ac\u0001\u0000\u0000\u0000\u00aa\u00a8\u0001"+
		"\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000\u00ab#\u0001\u0000"+
		"\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000\u00ad\u00b2\u0003&\u0013"+
		"\u0000\u00ae\u00af\u0007\u0002\u0000\u0000\u00af\u00b1\u0003&\u0013\u0000"+
		"\u00b0\u00ae\u0001\u0000\u0000\u0000\u00b1\u00b4\u0001\u0000\u0000\u0000"+
		"\u00b2\u00b0\u0001\u0000\u0000\u0000\u00b2\u00b3\u0001\u0000\u0000\u0000"+
		"\u00b3%\u0001\u0000\u0000\u0000\u00b4\u00b2\u0001\u0000\u0000\u0000\u00b5"+
		"\u00ba\u0003(\u0014\u0000\u00b6\u00b7\u0007\u0003\u0000\u0000\u00b7\u00b9"+
		"\u0003(\u0014\u0000\u00b8\u00b6\u0001\u0000\u0000\u0000\u00b9\u00bc\u0001"+
		"\u0000\u0000\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000\u00ba\u00bb\u0001"+
		"\u0000\u0000\u0000\u00bb\'\u0001\u0000\u0000\u0000\u00bc\u00ba\u0001\u0000"+
		"\u0000\u0000\u00bd\u00c2\u0003*\u0015\u0000\u00be\u00bf\u0007\u0004\u0000"+
		"\u0000\u00bf\u00c1\u0003*\u0015\u0000\u00c0\u00be\u0001\u0000\u0000\u0000"+
		"\u00c1\u00c4\u0001\u0000\u0000\u0000\u00c2\u00c0\u0001\u0000\u0000\u0000"+
		"\u00c2\u00c3\u0001\u0000\u0000\u0000\u00c3)\u0001\u0000\u0000\u0000\u00c4"+
		"\u00c2\u0001\u0000\u0000\u0000\u00c5\u00ca\u0003,\u0016\u0000\u00c6\u00c7"+
		"\u0005\f\u0000\u0000\u00c7\u00c9\u0003,\u0016\u0000\u00c8\u00c6\u0001"+
		"\u0000\u0000\u0000\u00c9\u00cc\u0001\u0000\u0000\u0000\u00ca\u00c8\u0001"+
		"\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000\u0000\u0000\u00cb+\u0001\u0000"+
		"\u0000\u0000\u00cc\u00ca\u0001\u0000\u0000\u0000\u00cd\u00ce\u0005\b\u0000"+
		"\u0000\u00ce\u00d5\u0003.\u0017\u0000\u00cf\u00d0\u0005\t\u0000\u0000"+
		"\u00d0\u00d5\u0003.\u0017\u0000\u00d1\u00d2\u0005\u0017\u0000\u0000\u00d2"+
		"\u00d5\u0003.\u0017\u0000\u00d3\u00d5\u0003.\u0017\u0000\u00d4\u00cd\u0001"+
		"\u0000\u0000\u0000\u00d4\u00cf\u0001\u0000\u0000\u0000\u00d4\u00d1\u0001"+
		"\u0000\u0000\u0000\u00d4\u00d3\u0001\u0000\u0000\u0000\u00d5-\u0001\u0000"+
		"\u0000\u0000\u00d6\u00dd\u00030\u0018\u0000\u00d7\u00dd\u00032\u0019\u0000"+
		"\u00d8\u00d9\u0005\u0005\u0000\u0000\u00d9\u00da\u0003\"\u0011\u0000\u00da"+
		"\u00db\u0005\u0007\u0000\u0000\u00db\u00dd\u0001\u0000\u0000\u0000\u00dc"+
		"\u00d6\u0001\u0000\u0000\u0000\u00dc\u00d7\u0001\u0000\u0000\u0000\u00dc"+
		"\u00d8\u0001\u0000\u0000\u0000\u00dd/\u0001\u0000\u0000\u0000\u00de\u00df"+
		"\u0007\u0005\u0000\u0000\u00df1\u0001\u0000\u0000\u0000\u00e0\u00e1\u0005"+
		"&\u0000\u0000\u00e13\u0001\u0000\u0000\u0000\u00117AGYcs{\u0081\u008f"+
		"\u00a1\u00aa\u00b2\u00ba\u00c2\u00ca\u00d4\u00dc";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}