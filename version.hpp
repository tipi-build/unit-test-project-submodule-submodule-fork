#pragma once
#include <iostream>



namespace submodule {
  const std::string version = "v0.0.0";
  inline std::string get_version(){return submodule::version;}
  inline void display_version(){std::cout<<submodule::version<<std::endl;}
}