


#import <UIKit/UIKit.h>

typedef enum {
    SDCycleScrollViewPageContolAlimentRight,
    SDCycleScrollViewPageContolAlimentCenter
} SDCycleScrollViewPageContolAliment;

typedef enum {
    SDCycleScrollViewPageContolStyleClassic,        // 系统自带经典样式
    SDCycleScrollViewPageContolStyleAnimated,       // 动画效果pagecontrol
    SDCycleScrollViewPageContolStyleNone            // 不显示pagecontrol
} SDCycleScrollViewPageContolStyle;

@class SPICycleScrollView;

@protocol SDCycleScrollViewDelegate <NSObject>

- (void)cycleScrollView:(SPICycleScrollView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index;

@end

@interface SPICycleScrollView : UIView



// >>>>>>>>>>>>>>>>>>>>>>>>>>  数据源接口

// 本地图片数组
@property (nonatomic, strong) NSArray *localizationImagesGroup;

// 网络图片 url string 数组
@property (nonatomic, strong) NSArray *imageURLStringsGroup;

// 每张图片对应要显示的文字数组
@property (nonatomic, strong) NSArray *titlesGroup;





// >>>>>>>>>>>>>>>>>>>>>>>>>  滚动控制接口

// 自动滚动间隔时间,默认2s
@property (nonatomic, assign) CGFloat autoScrollTimeInterval;

// 是否无限循环,默认Yes
@property(nonatomic,assign) BOOL infiniteLoop;

// 是否自动滚动,默认Yes
@property(nonatomic,assign) BOOL autoScroll;

@property (nonatomic, weak) id<SDCycleScrollViewDelegate> delegate;




// >>>>>>>>>>>>>>>>>>>>>>>>>  自定义样式接口

// 是否显示分页控件
@property (nonatomic, assign) BOOL showPageControl;

// pagecontrol 样式，默认为动画样式
@property (nonatomic, assign) SDCycleScrollViewPageContolStyle pageControlStyle;

// 占位图，用于网络未加载到图片时
@property (nonatomic, strong) UIImage *placeholderImage;

// 分页控件位置
@property (nonatomic, assign) SDCycleScrollViewPageContolAliment pageControlAliment;

// 分页控件小圆标大小
@property (nonatomic, assign) CGSize pageControlDotSize;

// 分页控件小圆标颜色
@property (nonatomic, strong) UIColor *dotColor;

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont  *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;



// >>>>>>>>>>>>>>>>>>>>>>>>>  清除缓存接口

- (void)clearCache;

+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame imagesGroup:(NSArray *)imagesGroup;

+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame imageURLStringsGroup:(NSArray *)imageURLStringsGroup;

@end
