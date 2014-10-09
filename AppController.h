#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@class RootViewController;

@interface AppController : NSObject <UIApplicationDelegate,ADBannerViewDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
    
    ADBannerView * bannerView;
}

@end

