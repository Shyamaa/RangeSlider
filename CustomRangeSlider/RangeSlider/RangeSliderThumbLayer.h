//
//  IARangeSliderThumbLayer.h
//  CustomSlider
//
//  Created by user on 31.12.16.
//  Copyright © 2016 I&N. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "IARangeSlider.h"
@interface IARangeSliderThumbLayer : CALayer
@property (assign, nonatomic) BOOL highlighted;
@property (weak, nonatomic) IARangeSlider* rangeSlider;
@end
