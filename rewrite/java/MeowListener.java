// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MeowParser}.
 */
public interface MeowListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MeowParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(MeowParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(MeowParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(MeowParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(MeowParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(MeowParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(MeowParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#typeid}.
	 * @param ctx the parse tree
	 */
	void enterTypeid(MeowParser.TypeidContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#typeid}.
	 * @param ctx the parse tree
	 */
	void exitTypeid(MeowParser.TypeidContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(MeowParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(MeowParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#decl}.
	 * @param ctx the parse tree
	 */
	void enterDecl(MeowParser.DeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#decl}.
	 * @param ctx the parse tree
	 */
	void exitDecl(MeowParser.DeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#declhead}.
	 * @param ctx the parse tree
	 */
	void enterDeclhead(MeowParser.DeclheadContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#declhead}.
	 * @param ctx the parse tree
	 */
	void exitDeclhead(MeowParser.DeclheadContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(MeowParser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(MeowParser.AssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#assignhead}.
	 * @param ctx the parse tree
	 */
	void enterAssignhead(MeowParser.AssignheadContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#assignhead}.
	 * @param ctx the parse tree
	 */
	void exitAssignhead(MeowParser.AssignheadContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#crement}.
	 * @param ctx the parse tree
	 */
	void enterCrement(MeowParser.CrementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#crement}.
	 * @param ctx the parse tree
	 */
	void exitCrement(MeowParser.CrementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#callstmt}.
	 * @param ctx the parse tree
	 */
	void enterCallstmt(MeowParser.CallstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#callstmt}.
	 * @param ctx the parse tree
	 */
	void exitCallstmt(MeowParser.CallstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#call}.
	 * @param ctx the parse tree
	 */
	void enterCall(MeowParser.CallContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#call}.
	 * @param ctx the parse tree
	 */
	void exitCall(MeowParser.CallContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(MeowParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(MeowParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#ifelse}.
	 * @param ctx the parse tree
	 */
	void enterIfelse(MeowParser.IfelseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#ifelse}.
	 * @param ctx the parse tree
	 */
	void exitIfelse(MeowParser.IfelseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#whilelp}.
	 * @param ctx the parse tree
	 */
	void enterWhilelp(MeowParser.WhilelpContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#whilelp}.
	 * @param ctx the parse tree
	 */
	void exitWhilelp(MeowParser.WhilelpContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#forlp}.
	 * @param ctx the parse tree
	 */
	void enterForlp(MeowParser.ForlpContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#forlp}.
	 * @param ctx the parse tree
	 */
	void exitForlp(MeowParser.ForlpContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#return}.
	 * @param ctx the parse tree
	 */
	void enterReturn(MeowParser.ReturnContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#return}.
	 * @param ctx the parse tree
	 */
	void exitReturn(MeowParser.ReturnContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(MeowParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(MeowParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#comp}.
	 * @param ctx the parse tree
	 */
	void enterComp(MeowParser.CompContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#comp}.
	 * @param ctx the parse tree
	 */
	void exitComp(MeowParser.CompContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(MeowParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(MeowParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(MeowParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(MeowParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#expo}.
	 * @param ctx the parse tree
	 */
	void enterExpo(MeowParser.ExpoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#expo}.
	 * @param ctx the parse tree
	 */
	void exitExpo(MeowParser.ExpoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#unop}.
	 * @param ctx the parse tree
	 */
	void enterUnop(MeowParser.UnopContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#unop}.
	 * @param ctx the parse tree
	 */
	void exitUnop(MeowParser.UnopContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#unit}.
	 * @param ctx the parse tree
	 */
	void enterUnit(MeowParser.UnitContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#unit}.
	 * @param ctx the parse tree
	 */
	void exitUnit(MeowParser.UnitContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(MeowParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(MeowParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link MeowParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariable(MeowParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MeowParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariable(MeowParser.VariableContext ctx);
}