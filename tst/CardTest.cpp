

#include<Card.h>
#include "gtest/gtest.h"

TEST(CardTestSuite, cardEffect){
    Card* card = new Card();

    EXPECT_EQ(card->toString(), "");
}