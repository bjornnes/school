#include "mengde.h"
#include "string"
#include "iostream"

using namespace std;

void skrivUt(Mengde m);

int main(){
  int ints[] = { 1, 4, 5, 10};
  vector<int> bTab(ints, ints + sizeof(ints)/sizeof(int));
  Mengde a = Mengde();
  Mengde b = Mengde(bTab);
  
  //Tester legg til
  cout << "A: ";
  a += 2;
  a += 4;
  a += 3;
  a += 2;
  
  skrivUt(a);
  
  cout << "B: ";
  skrivUt(b);
  
  //Tester unionen
  cout << "A & B: ";
  skrivUt(a&b);
  
  //Tester å sette a lik b
  a=b;
  cout << "A=B, og skriver ut A: ";
  skrivUt(a);
  
  return 0;
}

void skrivUt(Mengde m){
  cout << "{ ";
  vector<int>::const_iterator i;
  vector<int>::const_iterator j ;
  for(i = m.mengde.begin(); i != m.mengde.end(); i++){
    cout << *i << " ";
  }
  
  cout << "}" << endl;
  
}