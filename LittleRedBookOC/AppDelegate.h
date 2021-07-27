//
//  AppDelegate.h
//  LittleRedBookOC
//
//  Created by 贺显臣 on 2021/7/28.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

