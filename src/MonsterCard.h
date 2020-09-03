#ifndef _MONSTERCARD_H
#define _MONSTERCARD_H


#include "Card.h"

class MonsterCard : private Card {
  private:
    double attackPoints;


  public:
    std::string cardEffect() override;

    MonsterCard();

    MonsterCard(std::string , double , double );

    ~MonsterCard();

    std::string showEffect() override;

};
#endif
