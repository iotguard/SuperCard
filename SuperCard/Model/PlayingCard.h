//
//  PlayingCard.h
//  PlayingCard
//
//  Created by caowentao on 2019/7/26.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString* suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;
@end
