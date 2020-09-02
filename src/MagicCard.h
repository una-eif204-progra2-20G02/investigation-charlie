

#ifndef INVESTIGATION_CHARLIE_MAGICCARD_H
#define INVESTIGATION_CHARLIE_MAGICCARD_H
#include "Card.h"

class MagicCard: Card {
private:
    double attackPoints;
    std::string cardEffect() override;
public:
    MagicCard();
    MagicCard(std::string, double);
    ~MagicCard();
    std::string toString() override;
};
#endif //INVESTIGATION_CHARLIE_MAGICCARD_H
