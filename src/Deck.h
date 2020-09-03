#ifndef _DECK_H
#define _DECK_H


class Card;

class Deck {
  private:
    std::string owner;

    std::string name;

    std::vector<Card*> cardList;


  public:
    Deck();

    Deck(std::string , std::string , std::vector<Card*> );

    ~Deck();

    std::string toString();

};
#endif
