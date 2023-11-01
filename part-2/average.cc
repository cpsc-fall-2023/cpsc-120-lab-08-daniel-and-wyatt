// Daniel Lopez
// lopezdaniel2604@csu.fullerton.edu
// @daniel-lz26
// Partners: @wyatttethal20

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  // TODO(daniel_lz): Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  // TODO(daniel_lz): Write a for-each loop to sum (add up) all of the command
  // line arguments. Use a double or float type so that your program preserves
  // fractional values. The loop needs to skip over the command name, which is
  // the first element of the arguments vector. Each argument is a std::string.
  // You will need to convert each string into a number with the std::stod or
  // std::stof function.
  bool first_ele{true};
  double sum{0};
  for (std::string& argument : arguments) {
    if (first_ele == true) {
      first_ele = false;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  // TODO(daniel_lz): After the loop has finished summing the arguments,
  // calculate the average of the values. Recall that the average is the total
  // value divided by the number of values.
  double avg{sum / (static_cast<int>(arguments.size()) - 1)};
  std::cout << "average = " << avg << "\n";
  // TODO(daniel_lz): Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
