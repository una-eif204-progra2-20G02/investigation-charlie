#ifndef _CARD_H
#define _CARD_H


class Card {
  private:
    std::string name;

    double codeID;

    virtual std::string cardEffect();


  public:
    Card();

    Card(std::string , double );

    ~Card();

    virtual std::string showEffect();

};
#endif
