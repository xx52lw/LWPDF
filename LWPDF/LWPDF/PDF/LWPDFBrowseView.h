//
//   LWPDFBrowseView.h
 
//
//  Created by  LW on 2017/12/27.
//  Copyright © 2017年 LW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LWPDFBrowseView : UIView{
    CGPDFDocumentRef pdfDocumentRef;
}

@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, assign) NSInteger totalPages;

- (id)initWithFilePath:(NSString *)filePath;
- (void)reloadView;
- (void)prePage;
- (void)nextPage;

@end

