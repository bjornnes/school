#ifndef MENGDE_DEFINERT
#define MENGDE_DEFINERT

#include <vector>

using namespace std;

class Mengde {
public:
  vector<int> mengde;
  Mengde();
  Mengde(vector<int>);
  Mengde operator&(const Mengde &m)const;
  void operator+=(const int i);
  void operator=(const Mengde &m);
  
  
};

#endif