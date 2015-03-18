%{
#include "parser.h"
#include "lexer.h"

int yyerror(yyscan_t scanner, const char *message) {
  // TODO: error handling
  return 0;
}
%}

%code requires {
/* avoid a recursive header dependency */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif
}

%output "parser.cpp"
%defines "parser.h"

%union {
  const char *cstring;
}

%token <cstring> WORD_TOKEN

%%
expr
  : WORD_TOKEN {
  }
  ;
