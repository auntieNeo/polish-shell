#ifndef POSH_SHELL_SHELL_H_
#define POSH_SHELL_SHELL_H_

namespace posh { namespace shell {
  class Shell {
    public:
      Shell();
      ~Shell();

      void readEvaluatePrint();
  };
} }

#endif
