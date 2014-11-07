//
//  AFCollectionViewCell.h
//  UICollectionViewExample
//
//  Created by Ash Furrow on 2012-09-11.
//  Copyright (c) 2012 Ash Furrow. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFCollectionViewCell : UICollectionViewCell
{
    IBOutlet UILabel *titleLabel;
}

-(void)setTitle:(NSString *)text;
@end
