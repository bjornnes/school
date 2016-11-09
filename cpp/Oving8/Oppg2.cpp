#include <iostream>

using namespace std;

template <class type1, class type2>
class Par{
public:
  type1 el1;
  type2 el2;
  
  Par(type1 el1, type2 el2) : el1(el1), el2(el2) {}
  
  Par operator+(const Par &par2){
    Par par = *this;
    par.el1 += par2.el1;
    par.el2 += par2.el2;
    return par;
  }
  
  bool operator>(const Par &par2)const{
    Par par = *this;
    if(par.el1+par.el2>par2.el1+par2.el2)return true;
    return false;
  }
};

int main() {
 Par<double, int> p1(3.5, 14);
 Par<double, int> p2(2.1, 7);
 cout << "p1: " << p1.el1 << ", " << p1.el2 << endl;
 cout << "p2: " << p2.el1 << ", " << p2.el2 << endl;
 if (p1 > p2)
 cout << "p1 er størst" << endl;
 else
 cout << "p2 er størst" << endl;
 auto sum = p1 + p2;
 cout << "Sum: " << sum.el1 << ", " << sum.el2 << endl;
}