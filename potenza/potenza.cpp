#include <iostream>
using namespace std;
#include "potenza.hpp"

int main() {
  int x;
  int y;
  cout << "inserisci due numeri, una base e un esponente" << endl;
  cin >> x >> y;
  cout << "il risultato della potenza e' : " 
       << pot(x,y)<< endl;

}