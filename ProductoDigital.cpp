#include "ProductoDigital.h"

ProductoDigital::ProductoDigital(std::string n, int t): Producto(n){
tamano=t;
}

std::string ProductoDigital::toString()override{
  std::stringstream s;
  s<<"Nombre del producto: "<<endl;
  s<<getName()<<endl;
  s<<"Tamaño del producto:"<<endl;
  s<<tamano<<endl;
  return s.str();
}