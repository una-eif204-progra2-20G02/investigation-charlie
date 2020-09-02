

#ifndef INVESTIGATION_CHARLIE_MAGICCARD_H
#define INVESTIGATION_CHARLIE_MAGICCARD_H
#include "Card.h"

class MagicCard : private Card {
private:
    std::string specialEffect;
public:
    std::string cardEffect() override;
    MagicCard();
    MagicCard(std::string, double, std::string);
    ~MagicCard();
    std::string showEffect()override;

};
#endif //INVESTIGATION_CHARLIE_MAGICCARD_H
