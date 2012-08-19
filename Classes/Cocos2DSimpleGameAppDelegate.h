//
//  Cocos2DSimpleGameAppDelegate.h
//  Cocos2DSimpleGame
//
//  Created by Ray Wenderlich on 11/21/10.
//  Copyright Ray Wenderlich 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@class RootViewController;
@class Level;
@class HelloWorldScene;
@class GameOverScene;
@class NewLevelScene;

@interface Cocos2DSimpleGameAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
    int _curLevelIndex;
    NSMutableArray *_levels;
    HelloWorldScene *_mainScene;
    GameOverScene *_gameOverScene;
}

@property (nonatomic, assign) int curLevelIndex;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, retain) CCScene *mainScene;
@property (nonatomic, retain) GameOverScene *gameOverScene;
@property (nonatomic, retain) UIWindow *window;

- (Level *)curLevel;
- (void)nextLevel;
- (void)restartGame;
- (void)loadGameOverScene:(int) p;

@end
