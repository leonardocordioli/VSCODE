#include <iostream>
#include <algorithm>  
using namespace std;
int main() {
  float n1;
  float n2;
  float n3;
  float max;
  int somma=0;
  int prodotto;
  float media;
  cout << "inserire tre numeri, grazie ";
  cin >> n1 >> n2 >> n3;
  somma=n1+n2+n3;
  cout << "la somma vale : " << somma << endl;
  media=((n1+n2+n3)/(3));
  cout << "la media vale : " << media << endl;
  prodotto=n1*n2*n3;
  cout << "il prodotto vale : " << prodotto << endl;
  if(n1>n2 && n1>n3){
      max=n1;
      cout<<"il numero piu grande e' : " << max << endl;
    }else if(n2>n1 && n2>n3){
      max=n2;
      cout<<"il numero piu grande e' : " << max << endl;
      }else if(n3>n1 && n3>n2){
        max=n3;
        cout<<"il numero piu grande e' : " << max << endl;
      }else if(n1==n2){
        max=n1;
        cout<<"il numero piu grande e' : " << max << endl;
      }else{
        max=n3;
        cout<<"il numero piu grande e' : " << max << endl;
      }
}