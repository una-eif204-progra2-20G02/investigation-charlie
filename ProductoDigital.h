#include "Producto.h"

class ProductoDigital: public Producto{
private:
int tamano;
public:
ProductoDigital(std::string, int);
std::string toString()override;
};