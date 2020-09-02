
#ifndef INVESTIGATION_CHARLIE_CARD_H
#define INVESTIGATION_CHARLIE_CARD_H

#include <sstream>

class Card {
private:
    std::string name;
    double codeID;
   
public:
    Card();
    Card(std::string, double);
    virtual std::string cardEffect();
    ~Card();
    virtual std::string toString();
    int testing();
};

#endif //INVESTIGATION_CHARLIE_CARD_H
