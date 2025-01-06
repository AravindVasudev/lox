#pragma once

#include <string>

#include "token_type.h"

class Token {
  TokenType type;
  std::string lexeme;
  int line;
};