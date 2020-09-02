
#ifndef INVESTIGATION_CHARLIE_CARD_H
#define INVESTIGATION_CHARLIE_CARD_H

#include <sstream>

class Card {
private:
    std::string name;
    double codeID;

public:
    virtual std::string cardEffect();

    Card();
    Card(std::string, double);
    ~Card();
    virtual std::string showEffect();
};

#endif //INVESTIGATION_CHARLIE_CARD_H
