#include <iostream>

#include "assignment/binary_search_iterative.hpp"  // for example

using namespace std;
using namespace assignment;

int main(int argc, char **argv) {

  BinarySearchIterative a;
  a.Search({0,1,2,3,5,7}, 4);
  return 0;
}
