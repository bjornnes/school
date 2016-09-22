#include <iostream>
using namespace std;


const double pi = 3.141592;
class Sirkel {
 public:
 Sirkel(double startRadius);
 double finnAreal() const;
 double finnOmkrets() const;
 
 private:
   double radius;
};

// Oppgave2
int main() {
 Sirkel enSirkel(5);
 double arealet = enSirkel.finnAreal();
 cout << "Arealet er lik " << arealet << endl;
 double omkretsen = enSirkel.finnOmkrets();
 cout << "Omkretsen er lik " << omkretsen << endl;
 return 0;
} 


// ==> Implementasjon av klassen Sirkel
Sirkel::Sirkel(double startRadius) : radius(startRadius) {}
  
double Sirkel::finnAreal() const {
 return pi * radius * radius;
}
  
double Sirkel::finnOmkrets() const {
 double omkrets = 2.0 * pi * radius;
 return omkrets;
} 

