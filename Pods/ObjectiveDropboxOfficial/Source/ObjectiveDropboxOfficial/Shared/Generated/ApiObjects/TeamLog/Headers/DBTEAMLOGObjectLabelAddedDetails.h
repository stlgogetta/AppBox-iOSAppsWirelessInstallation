///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLabelType;
@class DBTEAMLOGObjectLabelAddedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ObjectLabelAddedDetails` struct.
///
/// Added a label.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGObjectLabelAddedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Labels mark a file or folder.
@property (nonatomic, readonly) DBTEAMLOGLabelType *labelType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param labelType Labels mark a file or folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithLabelType:(DBTEAMLOGLabelType *)labelType;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ObjectLabelAddedDetails` struct.
///
@interface DBTEAMLOGObjectLabelAddedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGObjectLabelAddedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGObjectLabelAddedDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGObjectLabelAddedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGObjectLabelAddedDetails *)instance;

///
/// Deserializes `DBTEAMLOGObjectLabelAddedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGObjectLabelAddedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGObjectLabelAddedDetails` object.
///
+ (DBTEAMLOGObjectLabelAddedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END