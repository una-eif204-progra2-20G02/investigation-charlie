

#include<MonsterCard.h>
#include "gtest/gtest.h"


TEST(MonsterCardSuite, cardEffect){
    MonsterCard* card;

    EXPECT_EQ(card->showEffect(), "Card Effect");
}