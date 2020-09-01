//
// Created by chris on 9/1/2020.
//

#ifndef INVESTIGATION_CHARLIE_DECK_H
#define INVESTIGATION_CHARLIE_DECK_H

#include <sstream>
#include <vector>
#include "Card.h"

class Deck {
private:
    std::string owner;
    std::string name;
    std::vector<Card*> cardList;
public:
    Deck();
    Deck(std::string, std::string, std::vector<Card*>);
    ~Deck();
    std::string toString();
};

#endif //INVESTIGATION_CHARLIE_DECK_H
