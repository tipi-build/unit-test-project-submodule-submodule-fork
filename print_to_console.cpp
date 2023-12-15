#include <submodule/print_to_console.hpp>

#include <iostream>

void submodule::print_to_console() {
  std::cout << "submodule::print_to_console()" << std::endl;
}


void submodule::print_version(){
  std::cout << "v0.0.2" << std::endl;
}