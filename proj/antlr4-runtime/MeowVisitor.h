
// Generated from c:\Users\dinop\Documents\UCSC\meow\proj\Meow.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "MeowParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MeowParser.
 */
class  MeowVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MeowParser.
   */
    virtual antlrcpp::Any visitProg(MeowParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunc(MeowParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitStat(MeowParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitType(MeowParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTid(MeowParser::TidContext *context) = 0;

    virtual antlrcpp::Any visitDecl(MeowParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitExpr(MeowParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MeowParser::ConstantContext *context) = 0;


};

