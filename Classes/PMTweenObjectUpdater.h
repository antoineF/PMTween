//
//  PMTweenStructUpdater.h
//  PMTween
//
//  Created by Brett Walker on 4/23/14.
//  Copyright (c) 2014 Poet & Mountain, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  The `PMTweenObjectUpdating` protocol declares methods that must be adopted by a class in order to be used by PMTween to update values encoded as NSValue objects.
 */
@protocol PMTweenObjectUpdating <NSObject>

/**
 *  This method replaces an element of a NSValue object or NSObject subclass by reassigning the parent value.
 *
 *  @param objectToUpdate   The NSValue object that should be updated.
 *  @param propertyValue    The value of the NSValue object property to be updated.
 *  @param propertyKeyPath  A keyPath of the object's property.
 *
 *  @return An updated version of the object.
 */
- (NSObject *)replaceObject:(NSObject *)objectToUpdate newPropertyValue:(double)propertyValue propertyKeyPath:(NSString *)propertyKeyPath;

/**
 *  This method verifies whether this class can update the specified object type.
 *
 *  @param object An object to verify support for.
 *
 *  @return A Boolean value representing whether the object is supported by this class.
 */
- (BOOL)supportsObject:(NSObject *)object;

@end


/**
 *  PMTweenObjectUpdater is the default class used by `PMTweenUnit` to update data structures, either NSValue objects such as NSNumber, CGPoint, CGSize, CGRect, CGAffineTransform, or CATransform3D, and other NSObject types like UIColor.
 */
@interface PMTweenObjectUpdater : NSObject <PMTweenObjectUpdating>

+ (instancetype)updater;

@end
