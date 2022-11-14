using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using System;
using symnames;
using astree;
using location;
using Antlr4.Runtime.Misc;

public class MeowActionsVisitor : MeowBaseVisitor<ASTNode>
{
    ASTNode root = new ASTNode((int)SymType.TOK_ROOT, new Location(0,0), "");

    public int p = 0;

    public override ASTNode VisitProg([NotNull] MeowParser.ProgContext ctx)
    {
        for(int i = 0; i < ctx.ChildCount; i++){
            root.adopt(Visit(ctx.GetChild(i)));
        }
        Console.WriteLine(root.PrintTree());
        return root;
    }

    public override ASTNode VisitStat([NotNull] MeowParser.StatContext ctx)
    {
        ASTNode ret = VisitChildren(ctx);
        p+=1;
        return ret;
    }

    public override ASTNode VisitDecl(MeowParser.DeclContext ctx){
        
        return Visit(ctx.GetChild(0));
    }

    public override ASTNode VisitDeclhead(MeowParser.DeclheadContext ctx){
        return Visit(ctx.GetChild(0));
    }

    public override ASTNode VisitTypeid([NotNull] MeowParser.TypeidContext ctx)
    {
        Console.WriteLine(ctx.ChildCount);
        return Visit(ctx.GetChild(0));
    }   

    public override ASTNode VisitType(MeowParser.TypeContext ctx){
        Console.WriteLine(ctx.GetText());
        return new ASTNode(0, new Location(0,0), ctx.GetText());
    }
    


}
