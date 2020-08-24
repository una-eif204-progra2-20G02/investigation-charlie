#ifndef INVES_LISKOV
#define INVES_LISKOV
#include <sstream>

class Producto{
private:
std::string name;
public:
Producto(std::string n);
std::string getName();
virtual std::string toString();


};
#endif //INVES_LISKOV