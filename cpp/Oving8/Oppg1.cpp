#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


template<class type>
bool likhet(const type &ob1, const type &ob2){
  cout << "Bruker den generelle metoden"<<endl;
  if(ob1 == ob2) return true;
  return false;
}

bool likhet(const double &ob1, const double &ob2){
  cout << "Bruker den spesielle metoden"<<endl;
  if(abs(ob1-ob2)<0.00001)return true;
  return false;
}

template<class type>
void skriv(const type &ob1, const type &ob2){
  cout << "Sammenligner: " << setprecision(10) << ob1 << " og " << setprecision(10) << ob2<< ". Resultat: " << likhet(ob1, ob2) << endl;
}

template<class type1, class type2>
void skriv(const type1 &ob1, const type2 &ob2){
  setprecision(10);
  cout << "Sammenligner: " << setprecision(10) << ob1 << " og " << setprecision(10) << ob2<< ". Resultat: " << likhet(ob1, ob2) << endl;
}

int main() {
  int tall1 = 2;
  int tall2 = 3;
  
  double tall3 = 2.12;
  double tall4 = 2.13;
  double tall5 = 2.120001;
  
  skriv(tall1, tall2);
  skriv(tall1, tall1);
  // skriv(tall3, tall1);
  skriv(tall3, tall3);
  skriv(tall3, tall4);
  skriv(tall3, tall5);
  
  
}

