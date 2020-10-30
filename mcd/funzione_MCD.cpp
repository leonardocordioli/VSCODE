#include <iostream>
using namespace std;

int mcd(int  a,int  b) 
{
  int resto;
  while(b!=0) {
    resto = a%b;
    a = b;
    b = resto;
  }
  return a;
}

int main () 
{
  int n1, n2;
  cout << "Inserisci una coppia di numeri: ";
  cin >> n1 >> n2;
  cout << "Il M.C.D. tra " << n1 << 
    " e " << n2 <<
    " vale " << mcd(n1,n2) << endl;
  return 0;
}