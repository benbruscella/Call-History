//
//  RootViewController.h
//  CallHistory
//
//  Created by Ben Bruscella on 16/05/11.
//  Copyright 2011 SPK. All rights reserved.
//  http://www.iphonedevsdk.com/forum/iphone-sdk-development/71185-how-use-coretelephony-monitor-call-event-redail-record.html

#import <UIKit/UIKit.h>
#import <CoreTelephony/CTCall.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    CTCallCenter *callCenter;
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
