//
// Created by chris on 9/1/2020.
//,
#include "gtest/gtest.h"
#include "../src/Card.h"
#include "../src/MagicCard.h"
#include "../src/MonsterCard.h"

TEST(CardTestSuite, cardEffect){
    MagicCard card;

    EXPECT_EQ(card.cardEffect(),"special effect");


}