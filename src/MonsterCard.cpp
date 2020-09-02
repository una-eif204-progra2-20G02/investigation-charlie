

#include"MonsterCard.h"

std::string MonsterCard::cardEffect(){return "deal damage";}
MonsterCard::MonsterCard(){}
MonsterCard::MonsterCard(std::string, double){}
MonsterCard::~MonsterCard(){}
std::string MonsterCard::toString(){ return cardEffect();}