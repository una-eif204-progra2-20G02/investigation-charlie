

#ifndef INVESTIGATION_CHARLIE_MAGICCARD_H
#define INVESTIGATION_CHARLIE_MAGICCARD_H
#include "Card.h"

class MagicCard : public Card {
private:
    std::string specialEffect;
    std::string cardEffect() override;
public:
    MagicCard();
    MagicCard(std::string, double, std::string);
    ~MagicCard();

};
#endif //INVESTIGATION_CHARLIE_MAGICCARD_H
