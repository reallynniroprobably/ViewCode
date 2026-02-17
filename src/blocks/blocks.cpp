#include "blocks.h"

Print::Print(std::string output) : Block("print", NORMAL, {"std::cout << " + std::move(output)}, {{"output", typeid(output)}}) {}

Include::Include(std::string file) : Block("include", HEADER, {"#include " + std::move(file)}, {{"file", typeid(file)}}) {}
