

#include<Card.h>
#include "gtest/gtest.h"

TEST(CardTestSuite,showEffect) {
    Card *card=new Card();

    EXPECT_EQ(card->showEffect(), "Card Effect");
}