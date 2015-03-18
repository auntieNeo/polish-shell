%{
#include <iostream>
%}

%option outfile="lexer.cpp" header-file="lexer.h"
%option warn noyywrap nounput reentrant
%option bison-bridge

word [0-9a-zA-Z./_=-]+
whitespace [ \t\n\r]*

%%

{whitespace} {
//  printf("\nWHITESPACE\n");  // XXX
}

{word} {
//  printf("\nWORD_TOKEN: %s\n", yytext);  // XXX
  yylval->cstring = yytext;
  return WORD_TOKEN;
}

. {
  std::cout << "scanner error: unmatched character: " << yytext[0] << std::endl;
}
