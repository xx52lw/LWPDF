//
//  ViewController.m
//  LWPDF
//
//  Created by liwei on 2019/9/9.
//  Copyright © 2019 liwei. All rights reserved.
//

#import "ViewController.h"
#import "LWPDFBrowseVC.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationItem.title = @"ViewController";
    
    //创建控件
    [self creatControl];
}

- (void)creatControl
{
    //跳转PDF按钮
    UIButton *pdfBtn = [[UIButton alloc] initWithFrame:CGRectMake(100, 150, 100, 44)];
    pdfBtn.backgroundColor = [UIColor orangeColor];
    [pdfBtn setTitle:@"跳转PDF" forState:UIControlStateNormal];
    [pdfBtn addTarget:self action:@selector(pdfBtnOnClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:pdfBtn];
}

- (void)pdfBtnOnClick
{
    LWPDFBrowseVC *vc = [[LWPDFBrowseVC alloc] init];
    vc.filePath = [[NSBundle mainBundle] pathForResource:@"LWTest.pdf" ofType:nil];
    vc.fileName = @"LWTestPDF";
    [self.navigationController pushViewController:vc animated:YES];
}


@end
