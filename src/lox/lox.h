#pragma once

#include <fmt/core.h>
#include <iostream>
#include <string>

class Lox {
 public:
  bool hadError{};

  static inline void error(int line, const std::string& message) {
    report(line, "", message);
  }

  static inline void report(int line, const std::string& where,
                            const std::string& message) {
    std::cout << fmt::format("[line {}] Error {}: {}\n", line, where, message);    
  }
};