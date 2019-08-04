//
//  PlayingCardView.h
//  SuperCard
//
//  Created by caowentao on 2019/8/4.
//  Copyright © 2019 coderock. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end

