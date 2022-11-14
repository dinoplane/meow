using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using System;
using symnames;
using astree;
using location;


public class MeowActionsListener : MeowBaseListener {
    public int p = 0;

    ASTNode root = new ASTNode((int) SymType.TOK_ROOT,
                                new Location(0, 0), 
                                "");



    public override void EnterConstant(MeowParser.ConstantContext ctx) {
        Console.WriteLine(ctx);
        p++;
    }
}

