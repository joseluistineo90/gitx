//
//  PBGitSVRemoteBranchItem.h
//  GitX
//
//  Created by Nathan Kinsinger on 3/2/10.
//  Copyright 2010 Nathan Kinsinger. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBSourceViewItem.h"

@interface PBGitSVRemoteBranchItem : PBSourceViewItem {

}

+ (id)remoteBranchItemWithRevSpec:(PBGitRevSpecifier *)revSpecifier;

@end
