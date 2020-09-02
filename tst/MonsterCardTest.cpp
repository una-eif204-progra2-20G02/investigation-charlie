

#include<MonsterCard.h>
#include "gtest/gtest.h"


TEST(MonsterCardSuite, showEffect){

    MonsterCard* card;

    EXPECT_EQ(card->cardEffect(),"deal damage");
}