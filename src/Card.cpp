
#include"Card.h"

std::string Card::cardEffect(){return "Card Effect";}

Card::Card(){}
Card::Card(std::string, double){}
Card::~Card(){}
std::string Card::showEffect(){ return Card::cardEffect();}