//
//   LWPDFBrowseScrollView.m
//
//  Created by  LW on 2017/12/27.
//  Copyright © 2017年 LW. All rights reserved.
//

#import "LWPDFBrowseScrollView.h"

@implementation LWPDFBrowseScrollView

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer
{
    return self.allowScrollScale == self.zoomScale;
}

@end
