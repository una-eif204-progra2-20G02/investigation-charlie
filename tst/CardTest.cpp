

#include<Card.h>
#include "gtest/gtest.h"

TEST(CardTestSuite,showEffect){
    Card* card;

    EXPECT_EQ(card->showEffect(), "Card Effect");
}