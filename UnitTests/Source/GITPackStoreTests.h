//
//  GITPackStoreTests.h
//  CocoaGit
//
//  Created by Geoffrey Garside on 02/12/2008.
//  Copyright 2008 ManicPanda.com. All rights reserved.
//

#import "GITTestHelper.h"

@class GITPackStore;
@interface GITPackStoreTests : GHTestCase {
    GITPackStore * store;
}

@property(readwrite,retain) GITPackStore * store;

- (void)testStoreRootIsCorrect;
- (void)testLoadObjectWithSha1;

@end
