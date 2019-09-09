//
//   LWPDFBrowseScrollView.h

//
//  Created by  LW on 2017/12/27.
//  Copyright © 2017年 LW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LWPDFBrowseScrollView : UIScrollView

//添加一个允许响应手势滑动事件的缩放比例
@property (nonatomic, assign) CGFloat allowScrollScale;

@end
