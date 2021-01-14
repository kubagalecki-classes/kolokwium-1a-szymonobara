#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne: public Makaron
{
  public:
  double ileMaki(unsigned P) const override
  {
    return (double)P;
  }
};
// tutaj definicja metody gotujMakaron
Makaron * Makaron::gotujMakaron(const std::string & s)
{
  Makaron* m;
  if(s.front()==s.back()){
    m = new Tagliatelle(3.41,0.42,0.1);
  }
  else{
    m = new Penne;
  }
  return m;
}