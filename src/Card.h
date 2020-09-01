//
// Created by chris on 9/1/2020.
//

#ifndef INVESTIGATION_CHARLIE_CARD_H
#define INVESTIGATION_CHARLIE_CARD_H

#include <sstream>

class Card {
private:
    std::string name;
    double codeID;
    virtual std::string cardEffect();
public:
    Card();
    Card(std::string, double);
    ~Card();
    virtual std::string toString();
};

#endif //INVESTIGATION_CHARLIE_CARD_H
