//
//  ViewController.m
//  Demo
//
//  Created by SPI-绿能宝 on 16/5/24.
//  Copyright © 2016年 北京SPI绿能宝. All rights reserved.
//

#import "ViewController.h"
#import <SPIBroadcastingIMG/SPICycleScrollView.h>
@interface ViewController ()<SDCycleScrollViewDelegate>
@property(nonatomic,strong)SPICycleScrollView *cycleScrollView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    self.cycleScrollView.localizationImagesGroup = @[[UIImage imageNamed:@"1.jpg"],[UIImage imageNamed:@"2.jpg"],[UIImage imageNamed:@"3.jpg"],[UIImage imageNamed:@"4.jpg"],[UIImage imageNamed:@"5.jpg"],[UIImage imageNamed:@"1.jpg"]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(SPICycleScrollView *)cycleScrollView
{
    if (!_cycleScrollView) {

        
        _cycleScrollView = [SPICycleScrollView cycleScrollViewWithFrame:self.view.bounds imageURLStringsGroup:nil];
        _cycleScrollView.backgroundColor = [UIColor blackColor];
        _cycleScrollView.pageControlAliment = SDCycleScrollViewPageContolStyleAnimated;
        _cycleScrollView.delegate = self;
        //    cycleScrollView2.titlesGroup = titles;
        _cycleScrollView.dotColor = [UIColor whiteColor];
        [self.view addSubview:_cycleScrollView];

    }
    return _cycleScrollView;
}
#pragma mark - SDCycleScrollViewDelegate

- (void)cycleScrollView:(SPICycleScrollView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index
{
    
    
    
}

@end
