

#include<MagicCard.h>
#include "gtest/gtest.h"


TEST(MagicCardTestSuite,showEffect){
    MagicCard* card= new MagicCard();

    EXPECT_EQ(card->showEffect(), "special effect");
}
