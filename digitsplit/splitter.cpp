#include "splitter.hpp"
#include "potenza.hpp"

int splitter(int numbertosplit, int index) {
    return(numbertosplit / pot(10, index) % 10);
}




