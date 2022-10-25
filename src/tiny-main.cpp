/* tiny-main.cpp */
#include <iostream>
#include "../sinclude/watcher/watcher.hpp" /* Point this to wherever yours is */

int main(int argc, char** argv)
{
  using namespace water::watcher;
  return watch(argc > 1 ? argv[1] : ".", [](const event::event& this_event) {
    std::cout << this_event << ',' << std::endl;
  });
}
