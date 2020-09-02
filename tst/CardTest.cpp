//
// Created by chris on 9/1/2020.
//
#include "gtest/gtest.h"
#include "../src/Card.h"

TEST(CardTestSuite, cardEffect){
    Card card;

    ASSERT_EQ(card.showEffect(), 2);
}