#include <iostream>
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Deck.h"

int main(){

    MonsterCard card;// = new Card();
    std::cout << card.cardEffect();
    std::cout<<"\n";

    MagicCard card1;
    std::cout<<card1.showEffect();

    return 0;
}