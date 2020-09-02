
#include"MagicCard.h"

std::string MagicCard::cardEffect(){return "special effect";}
MagicCard::MagicCard(){}
MagicCard::MagicCard(std::string, double, std::string){}
MagicCard::~MagicCard(){}
std::string MagicCard::showEffect(){return cardEffect();}