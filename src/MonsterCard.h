

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
    std::string toString() override;
};

#endif //INVESTIGATION_CHARLIE_MONSTERCARD_H
