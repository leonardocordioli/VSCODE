#include "potenza.hpp"


int pot(int x, int y) 
{
  int val_pot=1;
  for(int i=0; i<y; i++){
   val_pot*=x;
   
 }
 return val_pot;
}