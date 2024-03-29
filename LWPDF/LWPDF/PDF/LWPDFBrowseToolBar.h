//
//   LWPDFBrowseToolBar.h
 
//
//  Created by  LW on 2017/12/27.
//  Copyright © 2017年 LW. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LWPDFBrowseToolBar;

@protocol LWPDFBroeseToolBarDelegate <NSObject>

//点击完成代理事件
- (void)browseToolBar:(LWPDFBrowseToolBar *)browseToolBar didClickFinishButtonWithPage:(NSString *)page;
//上一页代理事件
- (void)browseToolBar:(LWPDFBrowseToolBar *)browseToolBar didPageButtonWithAction:(BOOL)nextPage;

@end

@interface LWPDFBrowseToolBar : UIView

@property (nonatomic, assign) NSInteger currentPage;//当前页码，可通过赋值刷新页码标签
@property (nonatomic, weak) id<LWPDFBroeseToolBarDelegate> delegate;//代理

//初始化方法，需传入当前页码就总共页码
- (instancetype)initWithFrame:(CGRect)frame currentPage:(NSInteger)currentPage totalPage:(NSInteger)totalPage;

//收回键盘方法
- (void)dismissKeyboard;

//弹出跳转页码键盘
- (void)showWindow;

@end
