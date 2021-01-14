#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
obliczMaka(const std::vector<Tagliatelle> v)
{
  double M;
  M=ileMaki(v.end())+ileMaki(v[v.size()-1])+ileMaki(v[v.size()-2]);
  if (M>100)
    
}