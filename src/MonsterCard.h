//
// Created by chris on 9/1/2020.
//

#ifndef INVESTIGATION_CHARLIE_MONSTERCARD_H
#define INVESTIGATION_CHARLIE_MONSTERCARD_H
#include "Card.h"

class MonsterCard: Card {
private:
    double attackPoints;
    std::string cardEffect() override;
public:
    MonsterCard();
    MonsterCard(std::string, double);
    ~MonsterCard();
    std::string toString();
};

#endif //INVESTIGATION_CHARLIE_MONSTERCARD_H