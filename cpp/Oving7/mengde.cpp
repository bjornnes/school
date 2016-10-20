#include "mengde.h"
#include <vector>
#include <set>


using namespace std;

Mengde::Mengde() {}

Mengde::Mengde(vector<int> m){
  mengde = m;
}

Mengde Mengde::operator&(const Mengde &m)const{
  set<int> numbersPresent;
  numbersPresent.insert(mengde.begin(), mengde.end());
  numbersPresent.insert(m.mengde.begin(), m.mengde.end());
  vector<int> svar(numbersPresent.begin(), numbersPresent.end());
  Mengde unionen = Mengde(svar);
  return unionen;
}

void Mengde::operator+=(const int i){
  mengde.insert(mengde.end(), i);
  set<int> sjekk(mengde.begin(), mengde.end());
  
  mengde = vector<int>(sjekk.begin(), sjekk.end());
}

void Mengde::operator=(const Mengde &m){
  mengde = vector<int>(m.mengde.begin(), m.mengde.end());
}


