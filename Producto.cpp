#include "Producto.h"

Producto::Producto(std::string n)name(n){
}
std::string Producto::getName(){
  return name;
}
virual std::string Producto::toString(){
  std::stringstream s;
  s<<"Nombre del producto: "<<endl;
  s<<getName()<<endl;
  return s.str();
}