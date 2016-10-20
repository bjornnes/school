#include "broek.h"
#include <iostream>
#include <string>

using namespace std;

void skriv(const string &tekst, const Broek &Broek);

Broek operator-(const int i, const Broek b);

int main() {
  Broek a(10, 20);
  Broek b(3, 4);
  Broek c;
  c.settBroek(5);
  Broek d = a / b;

  skriv("a = ", a);
  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  b += a;
  ++c;
  d *= d;

  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  c = a + b - d * a;
  c = -c;

  skriv("c = ", c);

  if (a + b != c + d)
    cout << "a + b != c + d" << endl;
  else
    cout << " a + b == c + d" << endl;
  while (b > a)
    b -= a;
  skriv("b = ", b);


  //Oppgave 1, del 1
  Broek broekA(96,5);
  skriv("broekA     = ",broekA);
  broekA - 5;
  skriv("broekA - 5 = ",broekA);

  //Oppgae 2, del2
  skriv("5 - broekA = ",5 - broekA);
  
  
  return 0;
  
}

void skriv(const string &tekst, const Broek &broek) {
  cout << tekst << broek.finnTeller() << " / ";
  cout << broek.finnNevner() << endl;
}

//Oppgave 2, del2
Broek operator-(const int i, const Broek b) {
  Broek hjelp = Broek();
  hjelp.settBroek(i*b.finnNevner()-b.finnTeller(), b.finnNevner());
  return hjelp;
}
