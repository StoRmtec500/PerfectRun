//
//  MasterViewController.h
//  PerfectRun
//
//  Created by Martin Kuenz on 09.10.14.
//  Copyright (c) 2014 Martin Kuenz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

