#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef IDSVRHAAPISDK_SWIFT_H
#define IDSVRHAAPISDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Dispatch;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="IdsvrHaapiSdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NSDate;

/// A representation of an OAuth Access Token, that includes both the raw value of the token, as well as
/// relevant properties of the token.
SWIFT_CLASS("_TtC13IdsvrHaapiSdk11AccessToken") SWIFT_AVAILABILITY(ios,introduced=14)
@interface AccessToken : NSObject
/// The raw value of the Access Token
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
/// The expiration date of the Access Token
@property (nonatomic, readonly, copy) NSDate * _Nonnull expiresOn;
/// Calculate whether the Access Token is valid on a particular moment.
/// The <code>minTtl</code> is used as threshold: the Access Token is considered valid if it is valid for at least <code>minTtl</code> seconds before it expires.
/// \param atTime the moment that validity of the Access Token is calculated for
///
/// \param minTtl a <code>TimeInterval</code> that holds the time period that the Access Token must be valid for until it expires.
///
///
/// returns:
/// true if the token is valid for the given <code>atTime</code> and <code>minTtl</code>, false if not
- (BOOL)isValidAtTime:(NSDate * _Nonnull)atTime minTtl:(NSTimeInterval)minTtl SWIFT_WARN_UNUSED_RESULT;
/// Return a <code>String</code> representation of the <code>AccessToken</code> instance, for example to be used for debugging
///
/// returns:
/// a <code>String</code> representation of the <code>AccessToken</code> instance,
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURL;

/// The <code>Dpop</code> class represents the context used for the Demonstrating Proof of Possession protocol used for authenticating requests that prove ownership of a private key
SWIFT_CLASS("_TtC13IdsvrHaapiSdk4Dpop") SWIFT_AVAILABILITY(ios,introduced=14)
@interface Dpop : NSObject
/// The JWK Thumbprint of the DPoP public key
@property (nonatomic, readonly, copy) NSString * _Nonnull jwkThumbprint;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// Create a DPoP proof token (a signed JWT) for the provided HTTP-method and URL. To sign the JWT, the cryptographic key of the <code>Dpop</code> context is used.
/// This method can only be used when running Curity Identity Server versions below 7.1 which use legacy DPoP Proof configuration or when client is explicitly
/// configured to use legacy DPoP Proof.
/// \param httpMethod the HTTP method of the request to authenticate
///
/// \param url the URL of the request to authenticate
///
///
/// throws:
/// <code>CryptoError</code> when an error occurred with performing cryptographic operations
///
/// returns:
/// a string containing the compact serialization of a signed <code>JWT</code> that can be used as DPoP Proof Token for the request of <code>url</code> by <code>httpMethod</code>
- (NSString * _Nullable)createProofWithHttpMethod:(NSString * _Nonnull)httpMethod url:(NSURL * _Nonnull)url error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Create a DPoP proof token (a signed JWT) for the provided HTTP-method and URL. To sign the JWT, the cryptographic key of the <code>Dpop</code> context is used.
/// note:
/// When running Curity Identity Server versions below 7.1 which use legacy DPoP Proof configuration or
/// when client is explicitly configured to use legacy DPoP Proof, omit parameters <code>nonce</code> and <code>accessToken</code>.
/// \param httpMethod the HTTP method of the request to authenticate
///
/// \param url the URL of the request to authenticate
///
/// \param nonce the current DPoP nonce held
///
/// \param accessToken the current held access token
///
///
/// throws:
/// <code>CryptoError</code> when an error occurred with performing cryptographic operations
///
/// returns:
/// a string containing the compact serialization of a signed <code>JWT</code> that can be used as DPoP Proof Token for the request of <code>url</code> by <code>httpMethod</code>
- (NSString * _Nullable)createProofWithHttpMethod:(NSString * _Nonnull)httpMethod url:(NSURL * _Nonnull)url nonce:(NSString * _Nullable)nonce accessToken:(NSString * _Nullable)accessToken error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Calculate the <code>DPoP</code> request header value that can be used to authenticate a request of <code>url</code> by <code>httpMethod</code>. This method
/// can only be used if running Curity Identity Server versions below 7.1 which use legacy DPoP Proof configuration or
/// when client is explicitly configured to use legacy DPoP Proof.
/// <ul>
///   <li>
///     Returns a String with the header value
///   </li>
/// </ul>
/// \param httpMethod the HTTP method of the request to authenticate
///
/// \param url the URL of the request to authenticate
///
///
/// throws:
/// <code>CryptoError</code> exception when the <code>DPoP</code> proof token could not be generated due to a cryptograhic error
- (NSString * _Nullable)getHeaderValueWithHttpMethod:(NSString * _Nonnull)httpMethod url:(NSURL * _Nonnull)url error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Calculate the <code>DPoP</code> request header value that can be used to authenticate a request of <code>url</code> by <code>httpMethod</code>.
/// note:
/// When running Curity Identity Server versions below 7.1 which use legacy DPoP Proof configuration or
/// when client is explicitly configured to use legacy DPoP Proof, omit parameters <code>nonce</code> and <code>accessToken</code>.
/// <ul>
///   <li>
///     Returns a String with the header value
///   </li>
/// </ul>
/// \param httpMethod the HTTP method of the request to authenticate
///
/// \param url the URL of the request to authenticate
///
/// \param nonce the current DPoP nonce held
///
/// \param accessToken the current held access token
///
///
/// throws:
/// <code>CryptoError</code> exception when the <code>DPoP</code> proof token could not be generated due to a cryptograhic error
- (NSString * _Nullable)getHeaderValueWithHttpMethod:(NSString * _Nonnull)httpMethod url:(NSURL * _Nonnull)url nonce:(NSString * _Nullable)nonce accessToken:(NSString * _Nullable)accessToken error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A data class that holds an <code>AccessToken</code>, a <code>Dpop</code> instance and also an optional <code>String</code> representation for a <code>Dpop Nonce</code>
/// when provided by the server.
SWIFT_CLASS("_TtC13IdsvrHaapiSdk19DpopAccessTokenInfo") SWIFT_AVAILABILITY(ios,introduced=14)
@interface DpopAccessTokenInfo : NSObject
/// An <code>AccessToken</code> instance
@property (nonatomic, readonly, strong) AccessToken * _Nonnull accessToken;
/// An <code>Dpop</code> instance
@property (nonatomic, readonly, strong) Dpop * _Nonnull dpop;
/// An <code>String</code> instance that represents the most recent DPoP nonce. Any Identity Server response may contain a
/// DPoP-Nonce header with a nonce string. This nonce needs be provided to all subsequent calls to the server.
@property (nonatomic, readonly, copy) NSString * _Nullable dpopNonce;
/// Return a String representation of the <code>DpopAccessTokenInfo</code> instance.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Return a String representation of the <code>DpopAccessTokenInfo</code> instance, for example to be used for debugging.
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
/// Return the value that can be used for the <code>DPoP</code> HTTP request header, based on the instance’s <code>dpop</code> field.
/// \param httpMethod the HTTP method to calculate the DPoP proof token for
///
/// \param url the URL to calculate the DPoP proof token for,
///
///
/// throws:
/// <code>CryptoError</code> exception when the <code>DPoP</code> proof token could not be generated due to a cryptograhic error
///
/// returns:
/// a String value with the <code>DPoP</code> proof token value
- (NSString * _Nullable)dpopHeaderValueWithHttpMethod:(NSString * _Nonnull)httpMethod url:(NSURL * _Nonnull)url error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Calculate the value that can be used when the DPoP-bound Access Token is to be included in the <code>Authorization</code> HTTP request header.
///
/// returns:
/// the value that can be used in a <code>AuthorizationHeader</code> HTTP request header.
- (NSString * _Nonnull)authorizationHeaderValue SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The Haapi struct contains the <code>isSupported</code> property, for checking if HAAPI is supported on the current device.
/// \code
/// if Haapi.isSupported {
///     // Use HAAPI features
/// } else {
///     // Fall back to an alternative user authentication scheme
/// }
///
/// \endcode
SWIFT_CLASS("_TtC13IdsvrHaapiSdk5Haapi")
@interface Haapi : NSObject
/// A Boolean that indicates whether HAAPI is supported on a particular device.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isSupported;)
+ (BOOL)isSupported SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
@end

@class NSURLRequest;
@class NSData;
@class NSURLResponse;

/// The <code>HaapiClient</code> class makes it easier to interact with the HAAPi services of a remote host. It interacts with given <code>HaapiTokenManager</code> to be able to
/// send requests that respect the HAAPI protocol (e.g. by including the HAAPI Content Type headers, the HAAPI session request header,
/// applying DPoP to authenticate requests with the negotiated key, etc.)
/// The <code>HaapiClient</code> instance keeps tracks of a session that the client has with the HAAPI server,
/// and will use it as needed to ensure that requests are being made within the correct session context.
/// A <code>HaapiClient</code> instance is always bound to a <code>HaapiTokenManager</code>.
/// As such, it is recommended to use the <code>HaapiTokenManager.createClient()</code> method to create a new
/// instance of a <code>HaapiClient</code>, for example:
/// \code
/// haapiTokenManager = HaapiTokenManagerBuilder(
///    tokenEndpoint: "https://curity.example.com/oauth/token"
///    clientId: "my-oauth-client-id"
/// ).build()
/// let haapiClient = manager.createClient()
///
/// \endcodeThe coupling between the <code>HaapiClient</code> and the <code>HaapiTokenManager</code> is weak, such that the <code>HaapiClient</code> is not aware
/// when the coupled <code>HaapiTokenManager</code> is destroyed or closed.
/// It is for this reason that the <code>HaapiClient</code> can return failures caused by a reference to a no-longer valid <code>HaapiTokenManager</code>.
SWIFT_CLASS("_TtC13IdsvrHaapiSdk11HaapiClient") SWIFT_AVAILABILITY(ios,introduced=14.0)
@interface HaapiClient : NSObject
/// Let the <code>HaapiClient</code> perform the given request as a HAAPI request asynchronously. The result of the request can be processed
/// by a completion handler that can be given to this method.
/// The method can fail when the <code>HaapiTokenManager</code> that this client is referencing, no longer exists or is in an invalid state.
/// This will be represented by passing a <code>HaapiError.haapiTokenManagerIsExpired</code> or <code>HaapiError.haapiTokenManagerIsClosed</code>
/// error <code>Result</code> to the completion handler.
/// \param urlRequest the request to make as HAAPI request
///
/// \param completionHandler a handler that takes <code>(Data?, URLResponse?, Error?)</code>
///
- (void)performDataTaskFor:(NSURLRequest * _Nonnull)urlRequest completionHandler:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Logger for Haapi.
SWIFT_CLASS("_TtC13IdsvrHaapiSdk11HaapiLogger")
@interface HaapiLogger : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// When <code>isDebugEnabled</code> is true, debug log statements will be available across the IdsvrHaapi frameworks. Default value is <code>false</code>.
/// note:
/// Setting <code>isDebugEnabled</code> should be done as early as possible before any Haapi objects are instantiated.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isDebugEnabled;)
+ (BOOL)isDebugEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsDebugEnabled:(BOOL)value;
/// When <code>isInfoEnabled</code> is true, info log statements will be available across the IdsvrHaapi frameworks. Default value is <code>true</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isInfoEnabled;)
+ (BOOL)isInfoEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsInfoEnabled:(BOOL)value;
/// When <code>isWarningEnabled</code> is true, warning log statements will be available across the IdsvrHaapi frameworks. Default value is <code>true</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isWarningEnabled;)
+ (BOOL)isWarningEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsWarningEnabled:(BOOL)value;
/// When <code>isErrorEnabled</code> is true, warning log statements will be available across the IdsvrHaapi frameworks. Default value is <code>true</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isErrorEnabled;)
+ (BOOL)isErrorEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsErrorEnabled:(BOOL)value;
/// When <code>isSensitiveValueMasked</code> is true, data is masked when it is logged. Default value is <code>true</code>.
/// note:
/// It is not secured to set <code>isSensitiveValueMasked</code> to false. It should only be used when debugging. Therefore, if it set to <code>false</code>,
/// warnings are printed in the console.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isSensitiveValueMasked;)
+ (BOOL)isSensitiveValueMasked SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsSensitiveValueMasked:(BOOL)value;
@end


/// <code>HaapiManager</code> manages the communication flow between a client and the Curity Identity Server by providing data models objects
/// for the different steps of the flow, which can be used in the UI components of the client application.
/// A HAAPI flow can be initiated by calling the <code>start</code> function, which will provide a first result. Afterwards, use
/// either <code>submitForm</code> or <code>followLink</code> to move forward. All these methods return an <code>HaapiResult</code>, which encloses a <code>HaapiRepresentation</code>, a <code>ProblemRepresentation</code> or an <code>Error</code>.
/// A <code>HaapiRepresentation</code> represents a new step in the flow.
/// A <code>ProblemRepresentation</code> indicates that a problem has occurred.
/// An <code>Error</code> encloses an exception, in which case the flow should be stopped.
/// The purpose of using this class is to obtain an <code>OAuthAuthorizationResponseStep</code> that contains the authorization response details.
/// seealso:
/// <code>OAuthTokenManager</code>
SWIFT_CLASS("_TtC13IdsvrHaapiSdk12HaapiManager") SWIFT_AVAILABILITY(ios,introduced=14.0)
@interface HaapiManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// <code>HaapiTokenManager</code> instances manage HAAPI tokens and facilitate interacting with the HAAPI service.
/// If needed, the <code>HaapiTokenManager</code> performs the attestation flow, by using the Device Check services on the iOS device.
/// The <code>HaapiTokenManager</code> is created by using the <code>HaapiTokenManagerBuilder</code>, like
/// \code
///    haapiTokenManager = HaapiTokenManagerBuilder(
///        tokenEndpoint: "https://curity.example.com/oauth/token"
///        clientId: "my-oauth-client-id"
///    ).build()
///
/// \endcodeThe <code>HaapiTokenManager</code> internally relies on an <code>URLSession</code> instance with default configuration to perform HTTP requests. However, it is possible to provide
/// an initialized <code>URLSession</code>-instance to the Builder upon instantiation, which ensures custom connection-related configuration can be supported.
/// Once an instance of the <code>HaapiTokenManager</code> is created, it can be used to obtain a HAAPI token. Once a HAAPI token is obtained, the <code>HaapiTokenManager</code>
/// can provide a client through the <code>createClient()</code> method. This client can be instructed to use a provided <code>URLSession</code> to make its requests, or use an internal
/// <code>URLSession</code> instead.
/// For example, create a default <code>HaapiClient</code> using the <code>HaapiTokenManager</code> is done like
/// \code
/// let haapiClient = haapiTokenManager.createClient()
///
/// \endcodeAlternatively, creating it with a custom <code>URLSession</code> is done like
/// \code
/// let haapiClient = haapiTokenManager.createClient(
///     urlSession: URLSession(
///         configuration: URLSessionConfiguration.default,
///         delegate: urlSessionDelegate,
///         delegateQueue: nil
///     )
///
/// \endcodeOnce a <code>HaapiTokenManager</code> is created, the <code>HaapiClient</code> that it can provide can be used to perform operations according to the HAAPI specifications.
/// An example request made using the <code>HaapiClient</code> looks like
/// \code
/// var authorizationRequest = URLRequest(url: FlowTests.authorizationUrl)
/// authorizationRequest.httpMethod = "GET"
///
/// haapiClient.performDataTask(for: authorizationRequest) { result in
///     switch result {
///     case .success(let responseAndData):
///         let response = responseAndData.response
///         let data = responseAndData.data
///         ...
///         break
///     case .failure(let error):
///         ...
///     }
/// }
///
/// \endcodeThe above example attempts to make a <code>GET</code> request to the authorization endpoint and provides a completing function for further processing of the results.
SWIFT_CLASS("_TtC13IdsvrHaapiSdk17HaapiTokenManager") SWIFT_AVAILABILITY(ios,introduced=14.0)
@interface HaapiTokenManager : NSObject
/// Return the <code>Dpop</code> that was used.
@property (nonatomic, readonly, strong) Dpop * _Nullable dpop;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSURLSession;
@class HaapiTokenResult;

SWIFT_AVAILABILITY(ios,introduced=14.0)
@interface HaapiTokenManager (SWIFT_EXTENSION(IdsvrHaapiSdk))
/// Create a <code>HaapiClient</code> instance that uses the <code>HaapiTokenManager</code>’s state (e.g. the HAAPI token and …)  for building outbound requests.
/// note:
/// When building HaapiTokenManger and <em>no</em> <code>URLSession</code> was injected , then the default URLSession is an <code>ephemeral URLSession</code>
/// \param urlSession The actual URLSession instance that the created client will use to make HTTP requests.
/// When not provided, an <code>URLSession</code> instance configured in HaapiManagerToken is used.
///
- (HaapiClient * _Nonnull)createClientWithUrlSession:(NSURLSession * _Nullable)urlSession SWIFT_WARN_UNUSED_RESULT;
/// Obtains a HAAPI token. Takes a completionHandler that is executed after the HAAPI token is obtained or an error occurred.
/// \param forceFresh The boolean to indicate whether a new HAAPI token should be obtained even when the internal state already has a valid HAAPI token it can use. The default value is <code>false</code>.
///
/// \param dpopNonce The most recent DPoP nonce. Any Identity Server responses may contain a DPoP-Nonce header with a nonce string.
/// This nonce needs be provided to all subsequent calls to this method.
///
/// \param completionHandler The handler that is called on the main thread after a HAAPI token was successfully obtained or an HaapiError occured.
///
- (void)getHaapiTokenWithForceFresh:(BOOL)forceFresh dpopNonce:(NSString * _Nullable)dpopNonce completionHandler:(void (^ _Nonnull)(DpopAccessTokenInfo * _Nullable, NSError * _Nullable))completionHandler;
/// Obtains a HAAPI token. Takes a completionHandler that is executed after the HAAPI token is obtained or an error occurred.
/// \param forceFresh The boolean to indicate whether a new HAAPI token should be obtained even when the internal state already has a valid HAAPI token it can use. The default value is <code>false</code>.
///
/// \param completionHandler The handler that is called on the main thread after a HAAPI token was successfully obtained or an HaapiError occured.
///
- (void)getHaapiTokenWithForceFresh:(BOOL)forceFresh completionHandler:(void (^ _Nonnull)(DpopAccessTokenInfo * _Nullable, NSError * _Nullable))completionHandler;
/// Closes this HAAPI Token Manager and frees the name of this manager to be used by another instance.
/// It is an error to use this manager after calling close(), and will cause undefined behavior.
- (void)close;
/// Clears all state of this manager pertaining to DeviceCheck attestation and access tokens.
- (void)clearState;
/// important:
/// Deprecated. Please use getHaapiToken(forceFresh:dpopNonce:completionHandler:)
- (void)getHaapiTokenAsyncWithForceFresh:(BOOL)forceFresh callbackDispatchQueue:(dispatch_queue_t _Nonnull)callbackDispatchQueue completionHandler:(void (^ _Nonnull)(DpopAccessTokenInfo * _Nullable, NSError * _Nullable))completionHandler SWIFT_UNAVAILABLE_MSG("'getHaapiTokenAsync' has been renamed to 'getHaapiTokenWithForceFresh': Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:");
/// important:
/// Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:
- (void)getHaapiTokenAsyncWithForceFresh:(BOOL)forceFresh callbackDispatchQueue:(dispatch_queue_t _Nonnull)callbackDispatchQueue dpopNonce:(NSString * _Nullable)dpopNonce completionHandler:(void (^ _Nonnull)(DpopAccessTokenInfo * _Nullable, NSError * _Nullable))completionHandler SWIFT_UNAVAILABLE_MSG("'getHaapiTokenAsync' has been renamed to 'getHaapiTokenWithForceFresh': Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:");
/// important:
/// Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:
- (HaapiTokenResult * _Nullable)getHaapiTokenWithForceFresh:(BOOL)forceFresh SWIFT_WARN_UNUSED_RESULT SWIFT_UNAVAILABLE_MSG("'getHaapiToken' has been renamed to 'getHaapiTokenWithForceFresh': Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:");
/// important:
/// Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:
- (HaapiTokenResult * _Nullable)getHaapiTokenWithForceFresh:(BOOL)forceFresh dpopNonce:(NSString * _Nullable)dpopNonce SWIFT_WARN_UNUSED_RESULT SWIFT_UNAVAILABLE_MSG("'getHaapiToken' has been renamed to 'getHaapiTokenWithForceFresh': Deprecated. Please use getHaapiTokenWithForceFresh:dpopNonce:completionHandler:");
@end


/// The <code>HaapiTokenManagerBuilder</code> is used to instantiate a <code>HaapiTokenManager</code> with the settings
/// that are appropriate for your environment by using the Builder pattern.
/// An example use of the <code>Builder</code> to create a default <code>HaapiTokenManager</code> could look like this:
/// \code
/// let urlSession = URLSession(configuration: configuration, delegate: trustAllCertsDelegate, delegateQueue: nil)
///
/// haapiTokenManager = HaapiTokenManagerBuilder(
///    tokenEndpoint: "https://my.curity.example.com/oauth/token",
///    clientId: "my-haapi-client"
/// )
/// .setInternalUrlSession(urlSession)
/// .build()
///
/// \endcode
SWIFT_CLASS("_TtC13IdsvrHaapiSdk24HaapiTokenManagerBuilder") SWIFT_AVAILABILITY(ios,introduced=14.0)
@interface HaapiTokenManagerBuilder : NSObject
/// Initialize the <code>Builder</code> with the mandatory <code>tokenEndpoint</code> and <code>clientId</code> parameters
- (nonnull instancetype)initWithTokenEndpoint:(NSURL * _Nonnull)tokenEndpoint clientId:(NSString * _Nonnull)clientId OBJC_DESIGNATED_INITIALIZER;
/// Set a name for the <code>HaapiTokenManager</code>. The name is used as prefix in identifying the storage location where the <code>HaapiTokenManager</code> persists state.
/// When nothing is set, the clientId is used as the default value.
/// note:
/// You cannot use two <code>HaapiTokenManager</code> instances with the same name. If this condition is not fulfill, an exception is thrown when build is invoked.
- (HaapiTokenManagerBuilder * _Nonnull)setName:(NSString * _Nonnull)name;
/// Set the <code>URLSession</code> instance that is used to make requests to the HAAPI services (e.g. the token endpoint and the HAAPI-enabled endpoints of the server)
/// When nothing is set, a <code>URLSession</code> with default settings is used.
- (HaapiTokenManagerBuilder * _Nonnull)setInternalUrlSession:(NSURLSession * _Nonnull)urlSession;
/// Set the minimum time to live (in seconds) that the HAAPI Token must be valid for. If the token expires before then, the <code>HaapiTokenManager</code> will try to refresh it.
/// When nothing is set, a value of 10 is used as minimum time to live
/// note:
/// If <code>minTtl</code> is lower or equal to 0 then an exception is thrown when build is invoked.
- (HaapiTokenManagerBuilder * _Nonnull)setHaapiTokenMinTtl:(NSTimeInterval)minTtl;
/// Allows the created <code>HaapiTokenManager</code> to run on a similator by turning off <code>DeviceCheck</code> attestation/-assertion.
/// When the compilation target is a simulator, <code>DeviceCheck</code> attestation/-assertion is automatically disabled.
/// This feature requires the server to be configured to have attestation validation disabled for this client.
- (HaapiTokenManagerBuilder * _Nonnull)disableDeviceCheckAttestation;
/// Set the maximum allowed retry count for attestation/assertion retries. It allows the created <code>HaapiTokenManager</code> to retry <code>DeviceCheck</code> attestation/assertion
/// when receiving a <code>DCError.serverUnavailable</code>.
/// note:
/// <code>DeviceCheck</code> attestation API can sometimes fail and return an error due to device roaming networks or poor connectivity.
/// When nothing is set, a value of 3 is used as the maximum allowed retry count. Providing a value lower than <code>1</code> disables the retry mechanism.
- (HaapiTokenManagerBuilder * _Nonnull)setAttestationMaxRetryCountWithMaxRetries:(NSInteger)maxRetries;
/// Build a new <code>HaapiTokenManager</code> instance from the state that is created inside the <code>Builder</code>
/// This method can abort your application if the desired name for a <code>HaapiTokenManager</code> already exists within the current context.
///
/// throws:
/// <code>HaapiError</code> if the configuration is incorrect.
- (HaapiTokenManager * _Nullable)buildAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A <code>Result holder</code> that contains either a <code>DpopAccessTokenInfo</code> or an <code>Error</code>
/// warning:
/// Only for <code>Objective-C</code> usage
/// note:
/// This object is only returned when using functions of HaapiTokenManger that are only visible in Objective-C
SWIFT_CLASS("_TtC13IdsvrHaapiSdk16HaapiTokenResult") SWIFT_AVAILABILITY(ios,introduced=14)
@interface HaapiTokenResult : NSObject
/// An optional data class that holds an <code>AccessToken</code> and <code>Dpop</code> instance.
@property (nonatomic, readonly, strong) DpopAccessTokenInfo * _Nullable dPopAccessTokenInfo;
/// An optional Error (NSError)
@property (nonatomic, readonly) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
