#ifndef POSH_POSH_POSH_H_
#define POSH_POSH_POSH_H_

namespace posh { namespace posh {
  class Lexer;
  class Parser;
  class Posh {
    public:
      Posh();
      ~Posh();

    private:
      Lexer *m_lexer;
      Parser *m_parser;
  };
} }

#endif
