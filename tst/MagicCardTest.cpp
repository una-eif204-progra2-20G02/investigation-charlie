

#include<MagicCard.h>
#include "gtest/gtest.h"


TEST(MagicCardTestSuite,showEffect){
    MagicCard* card;

    EXPECT_EQ(card->showEffect(), "Card Effect");
}
