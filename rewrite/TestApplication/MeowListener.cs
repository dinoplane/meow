//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.11.1
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from Meow.g4 by ANTLR 4.11.1

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591
// Ambiguous reference in cref attribute
#pragma warning disable 419

using Antlr4.Runtime.Misc;
using IParseTreeListener = Antlr4.Runtime.Tree.IParseTreeListener;
using IToken = Antlr4.Runtime.IToken;

/// <summary>
/// This interface defines a complete listener for a parse tree produced by
/// <see cref="MeowParser"/>.
/// </summary>
[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.11.1")]
[System.CLSCompliant(false)]
public interface IMeowListener : IParseTreeListener {
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.prog"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterProg([NotNull] MeowParser.ProgContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.prog"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitProg([NotNull] MeowParser.ProgContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.stat"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterStat([NotNull] MeowParser.StatContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.stat"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitStat([NotNull] MeowParser.StatContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.block"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterBlock([NotNull] MeowParser.BlockContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.block"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitBlock([NotNull] MeowParser.BlockContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.typeid"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterTypeid([NotNull] MeowParser.TypeidContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.typeid"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitTypeid([NotNull] MeowParser.TypeidContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.type"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterType([NotNull] MeowParser.TypeContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.type"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitType([NotNull] MeowParser.TypeContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.decl"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterDecl([NotNull] MeowParser.DeclContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.decl"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitDecl([NotNull] MeowParser.DeclContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.declhead"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterDeclhead([NotNull] MeowParser.DeclheadContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.declhead"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitDeclhead([NotNull] MeowParser.DeclheadContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.assign"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterAssign([NotNull] MeowParser.AssignContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.assign"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitAssign([NotNull] MeowParser.AssignContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.assignhead"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterAssignhead([NotNull] MeowParser.AssignheadContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.assignhead"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitAssignhead([NotNull] MeowParser.AssignheadContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.crement"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterCrement([NotNull] MeowParser.CrementContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.crement"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitCrement([NotNull] MeowParser.CrementContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.callstmt"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterCallstmt([NotNull] MeowParser.CallstmtContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.callstmt"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitCallstmt([NotNull] MeowParser.CallstmtContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.call"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterCall([NotNull] MeowParser.CallContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.call"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitCall([NotNull] MeowParser.CallContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.condition"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterCondition([NotNull] MeowParser.ConditionContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.condition"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitCondition([NotNull] MeowParser.ConditionContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.ifelse"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterIfelse([NotNull] MeowParser.IfelseContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.ifelse"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitIfelse([NotNull] MeowParser.IfelseContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.whilelp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterWhilelp([NotNull] MeowParser.WhilelpContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.whilelp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitWhilelp([NotNull] MeowParser.WhilelpContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.forlp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterForlp([NotNull] MeowParser.ForlpContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.forlp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitForlp([NotNull] MeowParser.ForlpContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.return"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterReturn([NotNull] MeowParser.ReturnContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.return"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitReturn([NotNull] MeowParser.ReturnContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.expr"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterExpr([NotNull] MeowParser.ExprContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.expr"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitExpr([NotNull] MeowParser.ExprContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.comp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterComp([NotNull] MeowParser.CompContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.comp"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitComp([NotNull] MeowParser.CompContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.factor"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterFactor([NotNull] MeowParser.FactorContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.factor"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitFactor([NotNull] MeowParser.FactorContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.term"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterTerm([NotNull] MeowParser.TermContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.term"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitTerm([NotNull] MeowParser.TermContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.expo"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterExpo([NotNull] MeowParser.ExpoContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.expo"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitExpo([NotNull] MeowParser.ExpoContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.unop"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterUnop([NotNull] MeowParser.UnopContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.unop"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitUnop([NotNull] MeowParser.UnopContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.unit"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterUnit([NotNull] MeowParser.UnitContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.unit"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitUnit([NotNull] MeowParser.UnitContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.constant"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterConstant([NotNull] MeowParser.ConstantContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.constant"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitConstant([NotNull] MeowParser.ConstantContext context);
	/// <summary>
	/// Enter a parse tree produced by <see cref="MeowParser.variable"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void EnterVariable([NotNull] MeowParser.VariableContext context);
	/// <summary>
	/// Exit a parse tree produced by <see cref="MeowParser.variable"/>.
	/// </summary>
	/// <param name="context">The parse tree.</param>
	void ExitVariable([NotNull] MeowParser.VariableContext context);
}
