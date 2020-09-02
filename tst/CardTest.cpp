

#include<Card.h>
#include "gtest/gtest.h"

TEST(CardTestSuite, cardEffect){
    Card* card;

    EXPECT_EQ(card->cardEffect(), "Card Effect");
}