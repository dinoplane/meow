using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using System;



public class MeowActionsListener : MeowBaseListener{
	public int numvals = 0;
	public override void EnterValue(MeowParser.ValueContext ctx)
	{
		numvals++;
		Console.WriteLine(ctx.GetChild(0).GetText());
	}
}

