

#include<MonsterCard.h>
#include "gtest/gtest.h"


TEST(MonsterCardSuite, cardEffect){

    MonsterCard* card= new MonsterCard();

    EXPECT_EQ(card->cardEffect(),"deal damage");
}
