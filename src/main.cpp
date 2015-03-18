/*
 * Copyright 2014 Jonathan Glines
 * "Jonathan Glines" <auntieNeo@gmail.com>
 *
 * This file is part of Posh, the POlish SHell.
 *
 * Posh is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Posh is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Posh.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <getopt.h>
#include <stddef.h>
#include <stdlib.h>

#include <iostream>

#include "shell/shell.h"
#include "posh/posh.h"

struct option longopts[] = {
  {NULL, 0, NULL, 0}
};

void show_help() {
  std::cout <<
    "Posh Help\n"
    << std::endl;
}

int main(int argc, char **argv) {
  int optval;
  while(true) {
    optval = getopt_long_only(argc, argv, "", longopts, NULL);
    if(optval == -1)
      break;

    switch(optval) {
      default:
        show_help();
        exit(1);
    }

    while(shell.readEvaluatePrint()) ;
    return 0;
  }
}
