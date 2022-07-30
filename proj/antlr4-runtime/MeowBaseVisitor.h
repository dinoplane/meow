
// Generated from c:\Users\dinop\Documents\UCSC\meow\proj\Meow.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "MeowVisitor.h"


/**
 * This class provides an empty implementation of MeowVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MeowBaseVisitor : public MeowVisitor {
public:

  virtual antlrcpp::Any visitProg(MeowParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(MeowParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(MeowParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(MeowParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTid(MeowParser::TidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(MeowParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(MeowParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MeowParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

