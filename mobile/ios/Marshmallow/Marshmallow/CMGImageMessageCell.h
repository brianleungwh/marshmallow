//
//  CMGImageMessageCell.h
//  Marshmallow
//
//  Created by Brandon Borders on 10/28/15.
//  Copyright © 2015 Cantilevered Marshmallow. All rights reserved.
//

#import "CMMessageCell.h"

#import "CMImagePopup.h"

@interface CMGImageMessageCell : CMMessageCell <UIGestureRecognizerDelegate>

@property (strong, nonatomic) UIImageView *googleImage;

- (void)handleTapOnImage:(id)sender;

@end
