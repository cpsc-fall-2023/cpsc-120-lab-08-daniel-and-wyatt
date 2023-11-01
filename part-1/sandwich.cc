// Daniel Lopez
// lopezdaniel2604@csu.fullerton.edu
// @daniel-lz26
// Partners: @wyatttethal20

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO(daniel_lz): Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  // TODO(daniel_lz): Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  // TODO(daniel_lz): Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: \n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";
  return 0;
}
