//
//  MNUnarchiver.h
//  Mac
//
//  Created by Jeremy Foo on 1/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MNUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {
@private
	NSKeyedUnarchiver *__unarchiver;
}
-(id)initForReadingWithData:(NSData *)data;

@end
