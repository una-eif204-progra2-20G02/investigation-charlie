
#include"MagicCard.h"

std::string MagicCard::cardEffect(){return "special effect";}
MagicCard::MagicCard(){}
MagicCard::MagicCard(std::string, double){}
MagicCard::~MagicCard(){}
std::string MagicCard::toString(){return cardEffect();}