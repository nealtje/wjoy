//
//  WJoyDevice.h
//  driver
//
//  Created by alxn1 on 17.07.12.
//  Copyright 2012 Dr. Web. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WJoyDeviceImpl;

@interface WJoyDevice : NSObject
{
    @private
        WJoyDeviceImpl *m_Impl;
}

- (id)initWithHIDDescriptor:(NSData*)HIDDescriptor;

- (BOOL)updateHIDState:(NSData*)HIDState;

@end
