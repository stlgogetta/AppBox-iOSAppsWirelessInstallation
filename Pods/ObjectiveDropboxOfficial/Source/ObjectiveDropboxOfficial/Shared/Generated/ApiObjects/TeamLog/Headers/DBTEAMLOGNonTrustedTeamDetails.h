///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGNonTrustedTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NonTrustedTeamDetails` struct.
///
/// The email to which the request was sent
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGNonTrustedTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The email to which the request was sent.
@property (nonatomic, readonly, copy) NSString *team;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param team The email to which the request was sent.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeam:(NSString *)team;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `NonTrustedTeamDetails` struct.
///
@interface DBTEAMLOGNonTrustedTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGNonTrustedTeamDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGNonTrustedTeamDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGNonTrustedTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGNonTrustedTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGNonTrustedTeamDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGNonTrustedTeamDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGNonTrustedTeamDetails` object.
///
+ (DBTEAMLOGNonTrustedTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END