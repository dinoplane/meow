//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.9.2
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from c:\Users\dinop\Documents\UCSC\meow\rewrite\java\Meow.g4 by ANTLR 4.9.2

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591
// Ambiguous reference in cref attribute
#pragma warning disable 419

using System;
using System.IO;
using System.Text;
using Antlr4.Runtime;
using Antlr4.Runtime.Atn;
using Antlr4.Runtime.Misc;
using DFA = Antlr4.Runtime.Dfa.DFA;

[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.9.2")]
[System.CLSCompliant(false)]
public partial class MeowLexer : Lexer {
	protected static DFA[] decisionToDFA;
	protected static PredictionContextCache sharedContextCache = new PredictionContextCache();
	public const int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, WS=13, TOK_VOID=14, TOK_INT=15, TOK_FLOAT=16, 
		TOK_STRING=17, TOK_IF=18, TOK_ELSE=19, TOK_WHILE=20, TOK_FOR=21, TOK_RETURN=22, 
		TOK_NOT=23, TOK_ADDEQ=24, TOK_SUBEQ=25, TOK_INC=26, TOK_DEC=27, TOK_LT=28, 
		TOK_GT=29, TOK_EQ=30, TOK_NE=31, TOK_LE=32, TOK_GE=33, TOK_ARROW=34, TOK_INTCON=35, 
		TOK_FLOATCON=36, TOK_STRINGCON=37, TOK_IDENT=38, BAD_CHAR=39;
	public static string[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static string[] modeNames = {
		"DEFAULT_MODE"
	};

	public static readonly string[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "T__11", "WS", "TOK_VOID", "TOK_INT", "TOK_FLOAT", "TOK_STRING", 
		"TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_FOR", "TOK_RETURN", "TOK_NOT", 
		"TOK_ADDEQ", "TOK_SUBEQ", "TOK_INC", "TOK_DEC", "TOK_LT", "TOK_GT", "TOK_EQ", 
		"TOK_NE", "TOK_LE", "TOK_GE", "TOK_ARROW", "TOK_INTCON", "TOK_FLOATCON", 
		"TOK_STRINGCON", "TOK_IDENT", "BAD_CHAR"
	};


	public MeowLexer(ICharStream input)
	: this(input, Console.Out, Console.Error) { }

	public MeowLexer(ICharStream input, TextWriter output, TextWriter errorOutput)
	: base(input, output, errorOutput)
	{
		Interpreter = new LexerATNSimulator(this, _ATN, decisionToDFA, sharedContextCache);
	}

	private static readonly string[] _LiteralNames = {
		null, "'{'", "'}'", "';'", "'='", "'('", "','", "')'", "'+'", "'-'", "'*'", 
		"'/'", "'^'", null, "'void'", "'int'", "'float'", "'string'", "'if'", 
		"'else'", "'while'", "'for'", "'return'", "'not'", "'+='", "'-='", "'++'", 
		"'--'", "'<'", "'>'", "'=='", "'!='", "'<='", "'>='", "'->'", null, null, 
		"'\"IAMASTRING\"'"
	};
	private static readonly string[] _SymbolicNames = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, "WS", "TOK_VOID", "TOK_INT", "TOK_FLOAT", "TOK_STRING", "TOK_IF", 
		"TOK_ELSE", "TOK_WHILE", "TOK_FOR", "TOK_RETURN", "TOK_NOT", "TOK_ADDEQ", 
		"TOK_SUBEQ", "TOK_INC", "TOK_DEC", "TOK_LT", "TOK_GT", "TOK_EQ", "TOK_NE", 
		"TOK_LE", "TOK_GE", "TOK_ARROW", "TOK_INTCON", "TOK_FLOATCON", "TOK_STRINGCON", 
		"TOK_IDENT", "BAD_CHAR"
	};
	public static readonly IVocabulary DefaultVocabulary = new Vocabulary(_LiteralNames, _SymbolicNames);

	[NotNull]
	public override IVocabulary Vocabulary
	{
		get
		{
			return DefaultVocabulary;
		}
	}

	public override string GrammarFileName { get { return "Meow.g4"; } }

	public override string[] RuleNames { get { return ruleNames; } }

	public override string[] ChannelNames { get { return channelNames; } }

	public override string[] ModeNames { get { return modeNames; } }

	public override string SerializedAtn { get { return new string(_serializedATN); } }

	static MeowLexer() {
		decisionToDFA = new DFA[_ATN.NumberOfDecisions];
		for (int i = 0; i < _ATN.NumberOfDecisions; i++) {
			decisionToDFA[i] = new DFA(_ATN.GetDecisionState(i), i);
		}
	}
	private static char[] _serializedATN = {
		'\x3', '\x608B', '\xA72A', '\x8133', '\xB9ED', '\x417C', '\x3BE7', '\x7786', 
		'\x5964', '\x2', ')', '\xEE', '\b', '\x1', '\x4', '\x2', '\t', '\x2', 
		'\x4', '\x3', '\t', '\x3', '\x4', '\x4', '\t', '\x4', '\x4', '\x5', '\t', 
		'\x5', '\x4', '\x6', '\t', '\x6', '\x4', '\a', '\t', '\a', '\x4', '\b', 
		'\t', '\b', '\x4', '\t', '\t', '\t', '\x4', '\n', '\t', '\n', '\x4', '\v', 
		'\t', '\v', '\x4', '\f', '\t', '\f', '\x4', '\r', '\t', '\r', '\x4', '\xE', 
		'\t', '\xE', '\x4', '\xF', '\t', '\xF', '\x4', '\x10', '\t', '\x10', '\x4', 
		'\x11', '\t', '\x11', '\x4', '\x12', '\t', '\x12', '\x4', '\x13', '\t', 
		'\x13', '\x4', '\x14', '\t', '\x14', '\x4', '\x15', '\t', '\x15', '\x4', 
		'\x16', '\t', '\x16', '\x4', '\x17', '\t', '\x17', '\x4', '\x18', '\t', 
		'\x18', '\x4', '\x19', '\t', '\x19', '\x4', '\x1A', '\t', '\x1A', '\x4', 
		'\x1B', '\t', '\x1B', '\x4', '\x1C', '\t', '\x1C', '\x4', '\x1D', '\t', 
		'\x1D', '\x4', '\x1E', '\t', '\x1E', '\x4', '\x1F', '\t', '\x1F', '\x4', 
		' ', '\t', ' ', '\x4', '!', '\t', '!', '\x4', '\"', '\t', '\"', '\x4', 
		'#', '\t', '#', '\x4', '$', '\t', '$', '\x4', '%', '\t', '%', '\x4', '&', 
		'\t', '&', '\x4', '\'', '\t', '\'', '\x4', '(', '\t', '(', '\x3', '\x2', 
		'\x3', '\x2', '\x3', '\x3', '\x3', '\x3', '\x3', '\x4', '\x3', '\x4', 
		'\x3', '\x5', '\x3', '\x5', '\x3', '\x6', '\x3', '\x6', '\x3', '\a', '\x3', 
		'\a', '\x3', '\b', '\x3', '\b', '\x3', '\t', '\x3', '\t', '\x3', '\n', 
		'\x3', '\n', '\x3', '\v', '\x3', '\v', '\x3', '\f', '\x3', '\f', '\x3', 
		'\r', '\x3', '\r', '\x3', '\xE', '\x6', '\xE', 'k', '\n', '\xE', '\r', 
		'\xE', '\xE', '\xE', 'l', '\x3', '\xE', '\x3', '\xE', '\x3', '\xF', '\x3', 
		'\xF', '\x3', '\xF', '\x3', '\xF', '\x3', '\xF', '\x3', '\x10', '\x3', 
		'\x10', '\x3', '\x10', '\x3', '\x10', '\x3', '\x11', '\x3', '\x11', '\x3', 
		'\x11', '\x3', '\x11', '\x3', '\x11', '\x3', '\x11', '\x3', '\x12', '\x3', 
		'\x12', '\x3', '\x12', '\x3', '\x12', '\x3', '\x12', '\x3', '\x12', '\x3', 
		'\x12', '\x3', '\x13', '\x3', '\x13', '\x3', '\x13', '\x3', '\x14', '\x3', 
		'\x14', '\x3', '\x14', '\x3', '\x14', '\x3', '\x14', '\x3', '\x15', '\x3', 
		'\x15', '\x3', '\x15', '\x3', '\x15', '\x3', '\x15', '\x3', '\x15', '\x3', 
		'\x16', '\x3', '\x16', '\x3', '\x16', '\x3', '\x16', '\x3', '\x17', '\x3', 
		'\x17', '\x3', '\x17', '\x3', '\x17', '\x3', '\x17', '\x3', '\x17', '\x3', 
		'\x17', '\x3', '\x18', '\x3', '\x18', '\x3', '\x18', '\x3', '\x18', '\x3', 
		'\x19', '\x3', '\x19', '\x3', '\x19', '\x3', '\x1A', '\x3', '\x1A', '\x3', 
		'\x1A', '\x3', '\x1B', '\x3', '\x1B', '\x3', '\x1B', '\x3', '\x1C', '\x3', 
		'\x1C', '\x3', '\x1C', '\x3', '\x1D', '\x3', '\x1D', '\x3', '\x1E', '\x3', 
		'\x1E', '\x3', '\x1F', '\x3', '\x1F', '\x3', '\x1F', '\x3', ' ', '\x3', 
		' ', '\x3', ' ', '\x3', '!', '\x3', '!', '\x3', '!', '\x3', '\"', '\x3', 
		'\"', '\x3', '\"', '\x3', '#', '\x3', '#', '\x3', '#', '\x3', '$', '\x3', 
		'$', '\a', '$', '\xC5', '\n', '$', '\f', '$', '\xE', '$', '\xC8', '\v', 
		'$', '\x3', '$', '\x5', '$', '\xCB', '\n', '$', '\x3', '%', '\a', '%', 
		'\xCE', '\n', '%', '\f', '%', '\xE', '%', '\xD1', '\v', '%', '\x3', '%', 
		'\x3', '%', '\x6', '%', '\xD5', '\n', '%', '\r', '%', '\xE', '%', '\xD6', 
		'\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', 
		'\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', '\x3', '&', 
		'\x3', '&', '\x3', '\'', '\x3', '\'', '\a', '\'', '\xE8', '\n', '\'', 
		'\f', '\'', '\xE', '\'', '\xEB', '\v', '\'', '\x3', '(', '\x3', '(', '\x2', 
		'\x2', ')', '\x3', '\x3', '\x5', '\x4', '\a', '\x5', '\t', '\x6', '\v', 
		'\a', '\r', '\b', '\xF', '\t', '\x11', '\n', '\x13', '\v', '\x15', '\f', 
		'\x17', '\r', '\x19', '\xE', '\x1B', '\xF', '\x1D', '\x10', '\x1F', '\x11', 
		'!', '\x12', '#', '\x13', '%', '\x14', '\'', '\x15', ')', '\x16', '+', 
		'\x17', '-', '\x18', '/', '\x19', '\x31', '\x1A', '\x33', '\x1B', '\x35', 
		'\x1C', '\x37', '\x1D', '\x39', '\x1E', ';', '\x1F', '=', ' ', '?', '!', 
		'\x41', '\"', '\x43', '#', '\x45', '$', 'G', '%', 'I', '&', 'K', '\'', 
		'M', '(', 'O', ')', '\x3', '\x2', '\a', '\x5', '\x2', '\v', '\f', '\xF', 
		'\xF', '\"', '\"', '\x3', '\x2', '\x33', ';', '\x3', '\x2', '\x32', ';', 
		'\x5', '\x2', '\x43', '\\', '\x61', '\x61', '\x63', '|', '\x6', '\x2', 
		'\x32', ';', '\x43', '\\', '\x61', '\x61', '\x63', '|', '\x2', '\xF3', 
		'\x2', '\x3', '\x3', '\x2', '\x2', '\x2', '\x2', '\x5', '\x3', '\x2', 
		'\x2', '\x2', '\x2', '\a', '\x3', '\x2', '\x2', '\x2', '\x2', '\t', '\x3', 
		'\x2', '\x2', '\x2', '\x2', '\v', '\x3', '\x2', '\x2', '\x2', '\x2', '\r', 
		'\x3', '\x2', '\x2', '\x2', '\x2', '\xF', '\x3', '\x2', '\x2', '\x2', 
		'\x2', '\x11', '\x3', '\x2', '\x2', '\x2', '\x2', '\x13', '\x3', '\x2', 
		'\x2', '\x2', '\x2', '\x15', '\x3', '\x2', '\x2', '\x2', '\x2', '\x17', 
		'\x3', '\x2', '\x2', '\x2', '\x2', '\x19', '\x3', '\x2', '\x2', '\x2', 
		'\x2', '\x1B', '\x3', '\x2', '\x2', '\x2', '\x2', '\x1D', '\x3', '\x2', 
		'\x2', '\x2', '\x2', '\x1F', '\x3', '\x2', '\x2', '\x2', '\x2', '!', '\x3', 
		'\x2', '\x2', '\x2', '\x2', '#', '\x3', '\x2', '\x2', '\x2', '\x2', '%', 
		'\x3', '\x2', '\x2', '\x2', '\x2', '\'', '\x3', '\x2', '\x2', '\x2', '\x2', 
		')', '\x3', '\x2', '\x2', '\x2', '\x2', '+', '\x3', '\x2', '\x2', '\x2', 
		'\x2', '-', '\x3', '\x2', '\x2', '\x2', '\x2', '/', '\x3', '\x2', '\x2', 
		'\x2', '\x2', '\x31', '\x3', '\x2', '\x2', '\x2', '\x2', '\x33', '\x3', 
		'\x2', '\x2', '\x2', '\x2', '\x35', '\x3', '\x2', '\x2', '\x2', '\x2', 
		'\x37', '\x3', '\x2', '\x2', '\x2', '\x2', '\x39', '\x3', '\x2', '\x2', 
		'\x2', '\x2', ';', '\x3', '\x2', '\x2', '\x2', '\x2', '=', '\x3', '\x2', 
		'\x2', '\x2', '\x2', '?', '\x3', '\x2', '\x2', '\x2', '\x2', '\x41', '\x3', 
		'\x2', '\x2', '\x2', '\x2', '\x43', '\x3', '\x2', '\x2', '\x2', '\x2', 
		'\x45', '\x3', '\x2', '\x2', '\x2', '\x2', 'G', '\x3', '\x2', '\x2', '\x2', 
		'\x2', 'I', '\x3', '\x2', '\x2', '\x2', '\x2', 'K', '\x3', '\x2', '\x2', 
		'\x2', '\x2', 'M', '\x3', '\x2', '\x2', '\x2', '\x2', 'O', '\x3', '\x2', 
		'\x2', '\x2', '\x3', 'Q', '\x3', '\x2', '\x2', '\x2', '\x5', 'S', '\x3', 
		'\x2', '\x2', '\x2', '\a', 'U', '\x3', '\x2', '\x2', '\x2', '\t', 'W', 
		'\x3', '\x2', '\x2', '\x2', '\v', 'Y', '\x3', '\x2', '\x2', '\x2', '\r', 
		'[', '\x3', '\x2', '\x2', '\x2', '\xF', ']', '\x3', '\x2', '\x2', '\x2', 
		'\x11', '_', '\x3', '\x2', '\x2', '\x2', '\x13', '\x61', '\x3', '\x2', 
		'\x2', '\x2', '\x15', '\x63', '\x3', '\x2', '\x2', '\x2', '\x17', '\x65', 
		'\x3', '\x2', '\x2', '\x2', '\x19', 'g', '\x3', '\x2', '\x2', '\x2', '\x1B', 
		'j', '\x3', '\x2', '\x2', '\x2', '\x1D', 'p', '\x3', '\x2', '\x2', '\x2', 
		'\x1F', 'u', '\x3', '\x2', '\x2', '\x2', '!', 'y', '\x3', '\x2', '\x2', 
		'\x2', '#', '\x7F', '\x3', '\x2', '\x2', '\x2', '%', '\x86', '\x3', '\x2', 
		'\x2', '\x2', '\'', '\x89', '\x3', '\x2', '\x2', '\x2', ')', '\x8E', '\x3', 
		'\x2', '\x2', '\x2', '+', '\x94', '\x3', '\x2', '\x2', '\x2', '-', '\x98', 
		'\x3', '\x2', '\x2', '\x2', '/', '\x9F', '\x3', '\x2', '\x2', '\x2', '\x31', 
		'\xA3', '\x3', '\x2', '\x2', '\x2', '\x33', '\xA6', '\x3', '\x2', '\x2', 
		'\x2', '\x35', '\xA9', '\x3', '\x2', '\x2', '\x2', '\x37', '\xAC', '\x3', 
		'\x2', '\x2', '\x2', '\x39', '\xAF', '\x3', '\x2', '\x2', '\x2', ';', 
		'\xB1', '\x3', '\x2', '\x2', '\x2', '=', '\xB3', '\x3', '\x2', '\x2', 
		'\x2', '?', '\xB6', '\x3', '\x2', '\x2', '\x2', '\x41', '\xB9', '\x3', 
		'\x2', '\x2', '\x2', '\x43', '\xBC', '\x3', '\x2', '\x2', '\x2', '\x45', 
		'\xBF', '\x3', '\x2', '\x2', '\x2', 'G', '\xCA', '\x3', '\x2', '\x2', 
		'\x2', 'I', '\xCF', '\x3', '\x2', '\x2', '\x2', 'K', '\xD8', '\x3', '\x2', 
		'\x2', '\x2', 'M', '\xE5', '\x3', '\x2', '\x2', '\x2', 'O', '\xEC', '\x3', 
		'\x2', '\x2', '\x2', 'Q', 'R', '\a', '}', '\x2', '\x2', 'R', '\x4', '\x3', 
		'\x2', '\x2', '\x2', 'S', 'T', '\a', '\x7F', '\x2', '\x2', 'T', '\x6', 
		'\x3', '\x2', '\x2', '\x2', 'U', 'V', '\a', '=', '\x2', '\x2', 'V', '\b', 
		'\x3', '\x2', '\x2', '\x2', 'W', 'X', '\a', '?', '\x2', '\x2', 'X', '\n', 
		'\x3', '\x2', '\x2', '\x2', 'Y', 'Z', '\a', '*', '\x2', '\x2', 'Z', '\f', 
		'\x3', '\x2', '\x2', '\x2', '[', '\\', '\a', '.', '\x2', '\x2', '\\', 
		'\xE', '\x3', '\x2', '\x2', '\x2', ']', '^', '\a', '+', '\x2', '\x2', 
		'^', '\x10', '\x3', '\x2', '\x2', '\x2', '_', '`', '\a', '-', '\x2', '\x2', 
		'`', '\x12', '\x3', '\x2', '\x2', '\x2', '\x61', '\x62', '\a', '/', '\x2', 
		'\x2', '\x62', '\x14', '\x3', '\x2', '\x2', '\x2', '\x63', '\x64', '\a', 
		',', '\x2', '\x2', '\x64', '\x16', '\x3', '\x2', '\x2', '\x2', '\x65', 
		'\x66', '\a', '\x31', '\x2', '\x2', '\x66', '\x18', '\x3', '\x2', '\x2', 
		'\x2', 'g', 'h', '\a', '`', '\x2', '\x2', 'h', '\x1A', '\x3', '\x2', '\x2', 
		'\x2', 'i', 'k', '\t', '\x2', '\x2', '\x2', 'j', 'i', '\x3', '\x2', '\x2', 
		'\x2', 'k', 'l', '\x3', '\x2', '\x2', '\x2', 'l', 'j', '\x3', '\x2', '\x2', 
		'\x2', 'l', 'm', '\x3', '\x2', '\x2', '\x2', 'm', 'n', '\x3', '\x2', '\x2', 
		'\x2', 'n', 'o', '\b', '\xE', '\x2', '\x2', 'o', '\x1C', '\x3', '\x2', 
		'\x2', '\x2', 'p', 'q', '\a', 'x', '\x2', '\x2', 'q', 'r', '\a', 'q', 
		'\x2', '\x2', 'r', 's', '\a', 'k', '\x2', '\x2', 's', 't', '\a', '\x66', 
		'\x2', '\x2', 't', '\x1E', '\x3', '\x2', '\x2', '\x2', 'u', 'v', '\a', 
		'k', '\x2', '\x2', 'v', 'w', '\a', 'p', '\x2', '\x2', 'w', 'x', '\a', 
		'v', '\x2', '\x2', 'x', ' ', '\x3', '\x2', '\x2', '\x2', 'y', 'z', '\a', 
		'h', '\x2', '\x2', 'z', '{', '\a', 'n', '\x2', '\x2', '{', '|', '\a', 
		'q', '\x2', '\x2', '|', '}', '\a', '\x63', '\x2', '\x2', '}', '~', '\a', 
		'v', '\x2', '\x2', '~', '\"', '\x3', '\x2', '\x2', '\x2', '\x7F', '\x80', 
		'\a', 'u', '\x2', '\x2', '\x80', '\x81', '\a', 'v', '\x2', '\x2', '\x81', 
		'\x82', '\a', 't', '\x2', '\x2', '\x82', '\x83', '\a', 'k', '\x2', '\x2', 
		'\x83', '\x84', '\a', 'p', '\x2', '\x2', '\x84', '\x85', '\a', 'i', '\x2', 
		'\x2', '\x85', '$', '\x3', '\x2', '\x2', '\x2', '\x86', '\x87', '\a', 
		'k', '\x2', '\x2', '\x87', '\x88', '\a', 'h', '\x2', '\x2', '\x88', '&', 
		'\x3', '\x2', '\x2', '\x2', '\x89', '\x8A', '\a', 'g', '\x2', '\x2', '\x8A', 
		'\x8B', '\a', 'n', '\x2', '\x2', '\x8B', '\x8C', '\a', 'u', '\x2', '\x2', 
		'\x8C', '\x8D', '\a', 'g', '\x2', '\x2', '\x8D', '(', '\x3', '\x2', '\x2', 
		'\x2', '\x8E', '\x8F', '\a', 'y', '\x2', '\x2', '\x8F', '\x90', '\a', 
		'j', '\x2', '\x2', '\x90', '\x91', '\a', 'k', '\x2', '\x2', '\x91', '\x92', 
		'\a', 'n', '\x2', '\x2', '\x92', '\x93', '\a', 'g', '\x2', '\x2', '\x93', 
		'*', '\x3', '\x2', '\x2', '\x2', '\x94', '\x95', '\a', 'h', '\x2', '\x2', 
		'\x95', '\x96', '\a', 'q', '\x2', '\x2', '\x96', '\x97', '\a', 't', '\x2', 
		'\x2', '\x97', ',', '\x3', '\x2', '\x2', '\x2', '\x98', '\x99', '\a', 
		't', '\x2', '\x2', '\x99', '\x9A', '\a', 'g', '\x2', '\x2', '\x9A', '\x9B', 
		'\a', 'v', '\x2', '\x2', '\x9B', '\x9C', '\a', 'w', '\x2', '\x2', '\x9C', 
		'\x9D', '\a', 't', '\x2', '\x2', '\x9D', '\x9E', '\a', 'p', '\x2', '\x2', 
		'\x9E', '.', '\x3', '\x2', '\x2', '\x2', '\x9F', '\xA0', '\a', 'p', '\x2', 
		'\x2', '\xA0', '\xA1', '\a', 'q', '\x2', '\x2', '\xA1', '\xA2', '\a', 
		'v', '\x2', '\x2', '\xA2', '\x30', '\x3', '\x2', '\x2', '\x2', '\xA3', 
		'\xA4', '\a', '-', '\x2', '\x2', '\xA4', '\xA5', '\a', '?', '\x2', '\x2', 
		'\xA5', '\x32', '\x3', '\x2', '\x2', '\x2', '\xA6', '\xA7', '\a', '/', 
		'\x2', '\x2', '\xA7', '\xA8', '\a', '?', '\x2', '\x2', '\xA8', '\x34', 
		'\x3', '\x2', '\x2', '\x2', '\xA9', '\xAA', '\a', '-', '\x2', '\x2', '\xAA', 
		'\xAB', '\a', '-', '\x2', '\x2', '\xAB', '\x36', '\x3', '\x2', '\x2', 
		'\x2', '\xAC', '\xAD', '\a', '/', '\x2', '\x2', '\xAD', '\xAE', '\a', 
		'/', '\x2', '\x2', '\xAE', '\x38', '\x3', '\x2', '\x2', '\x2', '\xAF', 
		'\xB0', '\a', '>', '\x2', '\x2', '\xB0', ':', '\x3', '\x2', '\x2', '\x2', 
		'\xB1', '\xB2', '\a', '@', '\x2', '\x2', '\xB2', '<', '\x3', '\x2', '\x2', 
		'\x2', '\xB3', '\xB4', '\a', '?', '\x2', '\x2', '\xB4', '\xB5', '\a', 
		'?', '\x2', '\x2', '\xB5', '>', '\x3', '\x2', '\x2', '\x2', '\xB6', '\xB7', 
		'\a', '#', '\x2', '\x2', '\xB7', '\xB8', '\a', '?', '\x2', '\x2', '\xB8', 
		'@', '\x3', '\x2', '\x2', '\x2', '\xB9', '\xBA', '\a', '>', '\x2', '\x2', 
		'\xBA', '\xBB', '\a', '?', '\x2', '\x2', '\xBB', '\x42', '\x3', '\x2', 
		'\x2', '\x2', '\xBC', '\xBD', '\a', '@', '\x2', '\x2', '\xBD', '\xBE', 
		'\a', '?', '\x2', '\x2', '\xBE', '\x44', '\x3', '\x2', '\x2', '\x2', '\xBF', 
		'\xC0', '\a', '/', '\x2', '\x2', '\xC0', '\xC1', '\a', '@', '\x2', '\x2', 
		'\xC1', '\x46', '\x3', '\x2', '\x2', '\x2', '\xC2', '\xC6', '\t', '\x3', 
		'\x2', '\x2', '\xC3', '\xC5', '\t', '\x4', '\x2', '\x2', '\xC4', '\xC3', 
		'\x3', '\x2', '\x2', '\x2', '\xC5', '\xC8', '\x3', '\x2', '\x2', '\x2', 
		'\xC6', '\xC4', '\x3', '\x2', '\x2', '\x2', '\xC6', '\xC7', '\x3', '\x2', 
		'\x2', '\x2', '\xC7', '\xCB', '\x3', '\x2', '\x2', '\x2', '\xC8', '\xC6', 
		'\x3', '\x2', '\x2', '\x2', '\xC9', '\xCB', '\a', '\x32', '\x2', '\x2', 
		'\xCA', '\xC2', '\x3', '\x2', '\x2', '\x2', '\xCA', '\xC9', '\x3', '\x2', 
		'\x2', '\x2', '\xCB', 'H', '\x3', '\x2', '\x2', '\x2', '\xCC', '\xCE', 
		'\x5', 'G', '$', '\x2', '\xCD', '\xCC', '\x3', '\x2', '\x2', '\x2', '\xCE', 
		'\xD1', '\x3', '\x2', '\x2', '\x2', '\xCF', '\xCD', '\x3', '\x2', '\x2', 
		'\x2', '\xCF', '\xD0', '\x3', '\x2', '\x2', '\x2', '\xD0', '\xD2', '\x3', 
		'\x2', '\x2', '\x2', '\xD1', '\xCF', '\x3', '\x2', '\x2', '\x2', '\xD2', 
		'\xD4', '\a', '\x30', '\x2', '\x2', '\xD3', '\xD5', '\x5', 'G', '$', '\x2', 
		'\xD4', '\xD3', '\x3', '\x2', '\x2', '\x2', '\xD5', '\xD6', '\x3', '\x2', 
		'\x2', '\x2', '\xD6', '\xD4', '\x3', '\x2', '\x2', '\x2', '\xD6', '\xD7', 
		'\x3', '\x2', '\x2', '\x2', '\xD7', 'J', '\x3', '\x2', '\x2', '\x2', '\xD8', 
		'\xD9', '\a', '$', '\x2', '\x2', '\xD9', '\xDA', '\a', 'K', '\x2', '\x2', 
		'\xDA', '\xDB', '\a', '\x43', '\x2', '\x2', '\xDB', '\xDC', '\a', 'O', 
		'\x2', '\x2', '\xDC', '\xDD', '\a', '\x43', '\x2', '\x2', '\xDD', '\xDE', 
		'\a', 'U', '\x2', '\x2', '\xDE', '\xDF', '\a', 'V', '\x2', '\x2', '\xDF', 
		'\xE0', '\a', 'T', '\x2', '\x2', '\xE0', '\xE1', '\a', 'K', '\x2', '\x2', 
		'\xE1', '\xE2', '\a', 'P', '\x2', '\x2', '\xE2', '\xE3', '\a', 'I', '\x2', 
		'\x2', '\xE3', '\xE4', '\a', '$', '\x2', '\x2', '\xE4', 'L', '\x3', '\x2', 
		'\x2', '\x2', '\xE5', '\xE9', '\t', '\x5', '\x2', '\x2', '\xE6', '\xE8', 
		'\t', '\x6', '\x2', '\x2', '\xE7', '\xE6', '\x3', '\x2', '\x2', '\x2', 
		'\xE8', '\xEB', '\x3', '\x2', '\x2', '\x2', '\xE9', '\xE7', '\x3', '\x2', 
		'\x2', '\x2', '\xE9', '\xEA', '\x3', '\x2', '\x2', '\x2', '\xEA', 'N', 
		'\x3', '\x2', '\x2', '\x2', '\xEB', '\xE9', '\x3', '\x2', '\x2', '\x2', 
		'\xEC', '\xED', '\v', '\x2', '\x2', '\x2', '\xED', 'P', '\x3', '\x2', 
		'\x2', '\x2', '\n', '\x2', 'l', '\xC6', '\xCA', '\xCF', '\xD6', '\xE7', 
		'\xE9', '\x3', '\b', '\x2', '\x2',
	};

	public static readonly ATN _ATN =
		new ATNDeserializer().Deserialize(_serializedATN);


}
