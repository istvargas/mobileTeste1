//
//  DetailViewController.h
//  mobileTeste1
//
//  Created by Departamento de TI OABRS/CAA on 18/03/14.
//  Copyright (c) 2014 Departamento de TI OABRS/CAA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
