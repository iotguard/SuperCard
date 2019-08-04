//
//  Card.m
//  PlayingCard
//
//  Created by dianyi on 2019/7/23.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}
@end
