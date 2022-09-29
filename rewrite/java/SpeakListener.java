// Generated from Speak.g4 by ANTLR 4.10.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link SpeakParser}.
 */
public interface SpeakListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link SpeakParser#init}.
	 * @param ctx the parse tree
	 */
	void enterInit(SpeakParser.InitContext ctx);
	/**
	 * Exit a parse tree produced by {@link SpeakParser#init}.
	 * @param ctx the parse tree
	 */
	void exitInit(SpeakParser.InitContext ctx);
	/**
	 * Enter a parse tree produced by {@link SpeakParser#value}.
	 * @param ctx the parse tree
	 */
	void enterValue(SpeakParser.ValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link SpeakParser#value}.
	 * @param ctx the parse tree
	 */
	void exitValue(SpeakParser.ValueContext ctx);
}