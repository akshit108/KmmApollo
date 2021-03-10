#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ApollokmmOkioByteString, ApollokmmApollo_apiScalarTypeAdapters, ApollokmmApollo_apiResponse<T>, ApollokmmApollo_apiOperationVariables, ApollokmmUserQuery, ApollokmmUserQueryData, ApollokmmUserQueryActive, ApollokmmUserQueryBankDetails, ApollokmmUserQueryVehicle, ApollokmmUserQueryBooking, ApollokmmUserQueryDamageReport, ApollokmmUserQueryContent, ApollokmmUserQuerySerializedDatum, ApollokmmUserQueryUser, ApollokmmUserQueryVoucher, ApollokmmUserQueryHandoverContent, ApollokmmUserQueryDesiredHandoverAddress, ApollokmmUserQueryHandoverAddress, ApollokmmUserQueryOffer, ApollokmmUserQueryDeal, ApollokmmUserQueryDiscount, ApollokmmUserQueryIdentityProof, ApollokmmUserQueryLabels, ApollokmmUserQueryMailingAddress, ApollokmmUserQueryScoring, ApollokmmUserQuerySelfDisclosure, ApollokmmKotlinEnum<E>, ApollokmmCustomType, ApollokmmKotlinByteArray, ApollokmmApollo_apiResponseBuilder<T>, ApollokmmApollo_apiError, ApollokmmOkioBuffer, ApollokmmOkioTimeout, ApollokmmApollo_apiResponseField, ApollokmmApollo_apiResponseFieldCustomTypeField, ApollokmmKotlinThrowable, ApollokmmKotlinArray<T>, ApollokmmKotlinException, ApollokmmKotlinRuntimeException, ApollokmmKotlinIllegalStateException, ApollokmmKotlinByteIterator, ApollokmmApollo_apiCustomTypeValue<T>, ApollokmmApollo_apiErrorLocation, ApollokmmApollo_apiResponseFieldCondition, ApollokmmApollo_apiResponseFieldType;

@protocol ApollokmmApollo_apiOperationName, ApollokmmOkioBufferedSource, ApollokmmApollo_apiResponseFieldMapper, ApollokmmApollo_apiOperationData, ApollokmmApollo_apiOperation, ApollokmmApollo_apiQuery, ApollokmmApollo_apiResponseFieldMarshaller, ApollokmmApollo_apiResponseReader, ApollokmmKotlinComparable, ApollokmmApollo_apiScalarType, ApollokmmApollo_apiCustomTypeAdapter, ApollokmmApollo_apiExecutionContext, ApollokmmOkioSink, ApollokmmOkioSource, ApollokmmApollo_apiInputFieldMarshaller, ApollokmmApollo_apiResponseWriter, ApollokmmApollo_apiResponseReaderObjectReader, ApollokmmApollo_apiResponseReaderListItemReader, ApollokmmApollo_apiResponseReaderListReader, ApollokmmApollo_apiExecutionContextElement, ApollokmmApollo_apiExecutionContextKey, ApollokmmOkioBufferedSink, ApollokmmApollo_apiInputFieldWriter, ApollokmmApollo_apiResponseWriterListItemWriter, ApollokmmApollo_apiResponseWriterListWriter, ApollokmmKotlinIterator, ApollokmmApollo_apiInputFieldWriterListItemWriter, ApollokmmApollo_apiInputFieldWriterListWriter;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface ApollokmmBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface ApollokmmBase (ApollokmmBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface ApollokmmMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ApollokmmMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorApollokmmKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface ApollokmmNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface ApollokmmByte : ApollokmmNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface ApollokmmUByte : ApollokmmNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface ApollokmmShort : ApollokmmNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface ApollokmmUShort : ApollokmmNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface ApollokmmInt : ApollokmmNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface ApollokmmUInt : ApollokmmNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface ApollokmmLong : ApollokmmNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface ApollokmmULong : ApollokmmNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface ApollokmmFloat : ApollokmmNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface ApollokmmDouble : ApollokmmNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface ApollokmmBoolean : ApollokmmNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Apollo_apiOperation")))
@protocol ApollokmmApollo_apiOperation
@required
- (ApollokmmOkioByteString *)composeRequestBody __attribute__((swift_name("composeRequestBody()")));
- (ApollokmmOkioByteString *)composeRequestBodyScalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("composeRequestBody(scalarTypeAdapters:)")));
- (ApollokmmOkioByteString *)composeRequestBodyAutoPersistQueries:(BOOL)autoPersistQueries withQueryDocument:(BOOL)withQueryDocument scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("composeRequestBody(autoPersistQueries:withQueryDocument:scalarTypeAdapters:)")));
- (id<ApollokmmApollo_apiOperationName>)name __attribute__((swift_name("name()")));
- (NSString *)operationId __attribute__((swift_name("operationId()")));
- (ApollokmmApollo_apiResponse<id> *)parseSource:(id<ApollokmmOkioBufferedSource>)source __attribute__((swift_name("parse(source:)")));
- (ApollokmmApollo_apiResponse<id> *)parseSource:(id<ApollokmmOkioBufferedSource>)source scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("parse(source:scalarTypeAdapters:)")));
- (ApollokmmApollo_apiResponse<id> *)parseByteString:(ApollokmmOkioByteString *)byteString __attribute__((swift_name("parse(byteString:)")));
- (ApollokmmApollo_apiResponse<id> *)parseByteString:(ApollokmmOkioByteString *)byteString scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("parse(byteString:scalarTypeAdapters:)")));
- (NSString *)queryDocument __attribute__((swift_name("queryDocument()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)responseFieldMapper __attribute__((swift_name("responseFieldMapper()")));
- (ApollokmmApollo_apiOperationVariables *)variables __attribute__((swift_name("variables()")));
- (id _Nullable)wrapDataData:(id<ApollokmmApollo_apiOperationData> _Nullable)data __attribute__((swift_name("wrapData(data:)")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol ApollokmmApollo_apiQuery <ApollokmmApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery")))
@interface ApollokmmUserQuery : ApollokmmBase <ApollokmmApollo_apiQuery>
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmOkioByteString *)composeRequestBody __attribute__((swift_name("composeRequestBody()")));
- (ApollokmmOkioByteString *)composeRequestBodyScalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("composeRequestBody(scalarTypeAdapters:)")));
- (ApollokmmOkioByteString *)composeRequestBodyAutoPersistQueries:(BOOL)autoPersistQueries withQueryDocument:(BOOL)withQueryDocument scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("composeRequestBody(autoPersistQueries:withQueryDocument:scalarTypeAdapters:)")));
- (ApollokmmUserQuery *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiOperationName>)name __attribute__((swift_name("name()")));
- (NSString *)operationId __attribute__((swift_name("operationId()")));
- (ApollokmmApollo_apiResponse<ApollokmmUserQueryData *> *)parseSource:(id<ApollokmmOkioBufferedSource>)source __attribute__((swift_name("parse(source:)")));
- (ApollokmmApollo_apiResponse<ApollokmmUserQueryData *> *)parseSource:(id<ApollokmmOkioBufferedSource>)source scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("parse(source:scalarTypeAdapters:)")));
- (ApollokmmApollo_apiResponse<ApollokmmUserQueryData *> *)parseByteString:(ApollokmmOkioByteString *)byteString __attribute__((swift_name("parse(byteString:)")));
- (ApollokmmApollo_apiResponse<ApollokmmUserQueryData *> *)parseByteString:(ApollokmmOkioByteString *)byteString scalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("parse(byteString:scalarTypeAdapters:)")));
- (NSString *)queryDocument __attribute__((swift_name("queryDocument()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)responseFieldMapper __attribute__((swift_name("responseFieldMapper()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ApollokmmApollo_apiOperationVariables *)variables __attribute__((swift_name("variables()")));
- (ApollokmmUserQueryData * _Nullable)wrapDataData:(ApollokmmUserQueryData * _Nullable)data __attribute__((swift_name("wrapData(data:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Active")))
@interface ApollokmmUserQueryActive : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(ApollokmmInt * _Nullable)id __attribute__((swift_name("init(__typename:id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryActive *)doCopy__typename:(NSString *)__typename id:(ApollokmmInt * _Nullable)id __attribute__((swift_name("doCopy(__typename:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) ApollokmmInt * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.ActiveCompanion")))
@interface ApollokmmUserQueryActiveCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryActive *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.BankDetails")))
@interface ApollokmmUserQueryBankDetails : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename alternateBankingAccountHolder:(NSString * _Nullable)alternateBankingAccountHolder iban:(NSString *)iban bic:(NSString * _Nullable)bic __attribute__((swift_name("init(__typename:alternateBankingAccountHolder:iban:bic:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (ApollokmmUserQueryBankDetails *)doCopy__typename:(NSString *)__typename alternateBankingAccountHolder:(NSString * _Nullable)alternateBankingAccountHolder iban:(NSString *)iban bic:(NSString * _Nullable)bic __attribute__((swift_name("doCopy(__typename:alternateBankingAccountHolder:iban:bic:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable alternateBankingAccountHolder __attribute__((swift_name("alternateBankingAccountHolder")));
@property (readonly) NSString * _Nullable bic __attribute__((swift_name("bic")));
@property (readonly) NSString *iban __attribute__((swift_name("iban")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.BankDetailsCompanion")))
@interface ApollokmmUserQueryBankDetailsCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryBankDetails *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Booking")))
@interface ApollokmmUserQueryBooking : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id status:(NSString *)status startDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate billingStartDate:(NSString * _Nullable)billingStartDate billingEndDate:(NSString * _Nullable)billingEndDate kmDriven:(ApollokmmInt * _Nullable)kmDriven includedMonthlyKilometers:(ApollokmmInt * _Nullable)includedMonthlyKilometers typeOfDelivery:(NSString * _Nullable)typeOfDelivery estimatedDeliveryDate:(NSString * _Nullable)estimatedDeliveryDate placeOfDelivery:(NSString * _Nullable)placeOfDelivery typeOfReturn:(NSString * _Nullable)typeOfReturn dateOfReturn:(NSString * _Nullable)dateOfReturn placeOfReturn:(NSString * _Nullable)placeOfReturn pricePerExcessKilometerGross:(ApollokmmDouble * _Nullable)pricePerExcessKilometerGross handoverKilometers:(ApollokmmInt * _Nullable)handoverKilometers handoverCertificate:(ApollokmmBoolean * _Nullable)handoverCertificate monthlyRate:(ApollokmmDouble * _Nullable)monthlyRate minimumAge:(ApollokmmInt * _Nullable)minimumAge vehicle:(ApollokmmUserQueryVehicle * _Nullable)vehicle damageReports:(NSArray<id> * _Nullable)damageReports __attribute__((swift_name("init(__typename:id:status:startDate:endDate:billingStartDate:billingEndDate:kmDriven:includedMonthlyKilometers:typeOfDelivery:estimatedDeliveryDate:placeOfDelivery:typeOfReturn:dateOfReturn:placeOfReturn:pricePerExcessKilometerGross:handoverKilometers:handoverCertificate:monthlyRate:minimumAge:vehicle:damageReports:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (ApollokmmDouble * _Nullable)component16 __attribute__((swift_name("component16()")));
- (ApollokmmInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (ApollokmmBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (ApollokmmDouble * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ApollokmmInt * _Nullable)component20 __attribute__((swift_name("component20()")));
- (ApollokmmUserQueryVehicle * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSArray<id> * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (ApollokmmInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (ApollokmmInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (ApollokmmUserQueryBooking *)doCopy__typename:(NSString *)__typename id:(NSString *)id status:(NSString *)status startDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate billingStartDate:(NSString * _Nullable)billingStartDate billingEndDate:(NSString * _Nullable)billingEndDate kmDriven:(ApollokmmInt * _Nullable)kmDriven includedMonthlyKilometers:(ApollokmmInt * _Nullable)includedMonthlyKilometers typeOfDelivery:(NSString * _Nullable)typeOfDelivery estimatedDeliveryDate:(NSString * _Nullable)estimatedDeliveryDate placeOfDelivery:(NSString * _Nullable)placeOfDelivery typeOfReturn:(NSString * _Nullable)typeOfReturn dateOfReturn:(NSString * _Nullable)dateOfReturn placeOfReturn:(NSString * _Nullable)placeOfReturn pricePerExcessKilometerGross:(ApollokmmDouble * _Nullable)pricePerExcessKilometerGross handoverKilometers:(ApollokmmInt * _Nullable)handoverKilometers handoverCertificate:(ApollokmmBoolean * _Nullable)handoverCertificate monthlyRate:(ApollokmmDouble * _Nullable)monthlyRate minimumAge:(ApollokmmInt * _Nullable)minimumAge vehicle:(ApollokmmUserQueryVehicle * _Nullable)vehicle damageReports:(NSArray<id> * _Nullable)damageReports __attribute__((swift_name("doCopy(__typename:id:status:startDate:endDate:billingStartDate:billingEndDate:kmDriven:includedMonthlyKilometers:typeOfDelivery:estimatedDeliveryDate:placeOfDelivery:typeOfReturn:dateOfReturn:placeOfReturn:pricePerExcessKilometerGross:handoverKilometers:handoverCertificate:monthlyRate:minimumAge:vehicle:damageReports:)")));
- (NSArray<ApollokmmUserQueryDamageReport *> * _Nullable)damageReportsFilterNotNull __attribute__((swift_name("damageReportsFilterNotNull()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable billingEndDate __attribute__((swift_name("billingEndDate")));
@property (readonly) NSString * _Nullable billingStartDate __attribute__((swift_name("billingStartDate")));
@property (readonly) NSArray<id> * _Nullable damageReports __attribute__((swift_name("damageReports")));
@property (readonly) NSString * _Nullable dateOfReturn __attribute__((swift_name("dateOfReturn")));
@property (readonly) NSString * _Nullable endDate __attribute__((swift_name("endDate")));
@property (readonly) NSString * _Nullable estimatedDeliveryDate __attribute__((swift_name("estimatedDeliveryDate")));
@property (readonly) ApollokmmBoolean * _Nullable handoverCertificate __attribute__((swift_name("handoverCertificate")));
@property (readonly) ApollokmmInt * _Nullable handoverKilometers __attribute__((swift_name("handoverKilometers")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) ApollokmmInt * _Nullable includedMonthlyKilometers __attribute__((swift_name("includedMonthlyKilometers")));
@property (readonly) ApollokmmInt * _Nullable kmDriven __attribute__((swift_name("kmDriven")));
@property (readonly) ApollokmmInt * _Nullable minimumAge __attribute__((swift_name("minimumAge")));
@property (readonly) ApollokmmDouble * _Nullable monthlyRate __attribute__((swift_name("monthlyRate")));
@property (readonly) NSString * _Nullable placeOfDelivery __attribute__((swift_name("placeOfDelivery")));
@property (readonly) NSString * _Nullable placeOfReturn __attribute__((swift_name("placeOfReturn")));
@property (readonly) ApollokmmDouble * _Nullable pricePerExcessKilometerGross __attribute__((swift_name("pricePerExcessKilometerGross")));
@property (readonly) NSString * _Nullable startDate __attribute__((swift_name("startDate")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable typeOfDelivery __attribute__((swift_name("typeOfDelivery")));
@property (readonly) NSString * _Nullable typeOfReturn __attribute__((swift_name("typeOfReturn")));
@property (readonly) ApollokmmUserQueryVehicle * _Nullable vehicle __attribute__((swift_name("vehicle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.BookingCompanion")))
@interface ApollokmmUserQueryBookingCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryBooking *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Companion")))
@interface ApollokmmUserQueryCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) id<ApollokmmApollo_apiOperationName> OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@property (readonly) NSString *QUERY_DOCUMENT __attribute__((swift_name("QUERY_DOCUMENT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Content")))
@interface ApollokmmUserQueryContent : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(ApollokmmInt * _Nullable)id headline:(NSString * _Nullable)headline body:(NSString * _Nullable)body __attribute__((swift_name("init(__typename:id:headline:body:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (ApollokmmUserQueryContent *)doCopy__typename:(NSString *)__typename id:(ApollokmmInt * _Nullable)id headline:(NSString * _Nullable)headline body:(NSString * _Nullable)body __attribute__((swift_name("doCopy(__typename:id:headline:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSString * _Nullable headline __attribute__((swift_name("headline")));
@property (readonly) ApollokmmInt * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.ContentCompanion")))
@interface ApollokmmUserQueryContentCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryContent *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DamageReport")))
@interface ApollokmmUserQueryDamageReport : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt needsSecondStep:(ApollokmmBoolean * _Nullable)needsSecondStep serializedData:(NSArray<id> * _Nullable)serializedData __attribute__((swift_name("init(__typename:id:createdAt:updatedAt:needsSecondStep:serializedData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (ApollokmmBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (ApollokmmUserQueryDamageReport *)doCopy__typename:(NSString *)__typename id:(NSString *)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt needsSecondStep:(ApollokmmBoolean * _Nullable)needsSecondStep serializedData:(NSArray<id> * _Nullable)serializedData __attribute__((swift_name("doCopy(__typename:id:createdAt:updatedAt:needsSecondStep:serializedData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSArray<ApollokmmUserQuerySerializedDatum *> * _Nullable)serializedDataFilterNotNull __attribute__((swift_name("serializedDataFilterNotNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) ApollokmmBoolean * _Nullable needsSecondStep __attribute__((swift_name("needsSecondStep")));
@property (readonly) NSArray<id> * _Nullable serializedData __attribute__((swift_name("serializedData")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DamageReportCompanion")))
@interface ApollokmmUserQueryDamageReportCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryDamageReport *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol ApollokmmApollo_apiOperationData
@required
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Data")))
@interface ApollokmmUserQueryData : ApollokmmBase <ApollokmmApollo_apiOperationData>
- (instancetype)initWithUser:(ApollokmmUserQueryUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (ApollokmmUserQueryUser * _Nullable)component1 __attribute__((swift_name("component1()")));
- (ApollokmmUserQueryData *)doCopyUser:(ApollokmmUserQueryUser * _Nullable)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ApollokmmUserQueryUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DataCompanion")))
@interface ApollokmmUserQueryDataCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryData *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Deal")))
@interface ApollokmmUserQueryDeal : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id status:(NSString *)status subStatus:(NSString * _Nullable)subStatus lostReasonDetail:(NSString * _Nullable)lostReasonDetail desiredDateOfDelivery:(NSString * _Nullable)desiredDateOfDelivery monthlyRate:(double)monthlyRate startingFee:(ApollokmmDouble * _Nullable)startingFee deliveryFee:(ApollokmmDouble * _Nullable)deliveryFee infoboxText:(NSString * _Nullable)infoboxText minimumAge:(ApollokmmInt * _Nullable)minimumAge voucher:(ApollokmmUserQueryVoucher * _Nullable)voucher minimumDuration:(NSString * _Nullable)minimumDuration bookableOptions:(NSArray<id> * _Nullable)bookableOptions isSigned:(BOOL)isSigned handoverContent:(ApollokmmUserQueryHandoverContent * _Nullable)handoverContent desiredHandoverAddress:(ApollokmmUserQueryDesiredHandoverAddress * _Nullable)desiredHandoverAddress handoverType:(NSString * _Nullable)handoverType handoverDate:(NSString * _Nullable)handoverDate handoverAddress:(ApollokmmUserQueryHandoverAddress * _Nullable)handoverAddress offer:(ApollokmmUserQueryOffer *)offer date:(NSString *)date bookings:(NSArray<id> * _Nullable)bookings __attribute__((swift_name("init(__typename:id:status:subStatus:lostReasonDetail:desiredDateOfDelivery:monthlyRate:startingFee:deliveryFee:infoboxText:minimumAge:voucher:minimumDuration:bookableOptions:isSigned:handoverContent:desiredHandoverAddress:handoverType:handoverDate:handoverAddress:offer:date:bookings:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> * _Nullable)bookableOptionsFilterNotNull __attribute__((swift_name("bookableOptionsFilterNotNull()")));
- (NSArray<ApollokmmUserQueryBooking *> * _Nullable)bookingsFilterNotNull __attribute__((swift_name("bookingsFilterNotNull()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (ApollokmmInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (ApollokmmUserQueryVoucher * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSArray<id> * _Nullable)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (ApollokmmUserQueryHandoverContent * _Nullable)component16 __attribute__((swift_name("component16()")));
- (ApollokmmUserQueryDesiredHandoverAddress * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryHandoverAddress * _Nullable)component20 __attribute__((swift_name("component20()")));
- (ApollokmmUserQueryOffer *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (NSArray<id> * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (ApollokmmDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (ApollokmmDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (ApollokmmUserQueryDeal *)doCopy__typename:(NSString *)__typename id:(NSString *)id status:(NSString *)status subStatus:(NSString * _Nullable)subStatus lostReasonDetail:(NSString * _Nullable)lostReasonDetail desiredDateOfDelivery:(NSString * _Nullable)desiredDateOfDelivery monthlyRate:(double)monthlyRate startingFee:(ApollokmmDouble * _Nullable)startingFee deliveryFee:(ApollokmmDouble * _Nullable)deliveryFee infoboxText:(NSString * _Nullable)infoboxText minimumAge:(ApollokmmInt * _Nullable)minimumAge voucher:(ApollokmmUserQueryVoucher * _Nullable)voucher minimumDuration:(NSString * _Nullable)minimumDuration bookableOptions:(NSArray<id> * _Nullable)bookableOptions isSigned:(BOOL)isSigned handoverContent:(ApollokmmUserQueryHandoverContent * _Nullable)handoverContent desiredHandoverAddress:(ApollokmmUserQueryDesiredHandoverAddress * _Nullable)desiredHandoverAddress handoverType:(NSString * _Nullable)handoverType handoverDate:(NSString * _Nullable)handoverDate handoverAddress:(ApollokmmUserQueryHandoverAddress * _Nullable)handoverAddress offer:(ApollokmmUserQueryOffer *)offer date:(NSString *)date bookings:(NSArray<id> * _Nullable)bookings __attribute__((swift_name("doCopy(__typename:id:status:subStatus:lostReasonDetail:desiredDateOfDelivery:monthlyRate:startingFee:deliveryFee:infoboxText:minimumAge:voucher:minimumDuration:bookableOptions:isSigned:handoverContent:desiredHandoverAddress:handoverType:handoverDate:handoverAddress:offer:date:bookings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSArray<id> * _Nullable bookableOptions __attribute__((swift_name("bookableOptions")));
@property (readonly) NSArray<id> * _Nullable bookings __attribute__((swift_name("bookings")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) ApollokmmDouble * _Nullable deliveryFee __attribute__((swift_name("deliveryFee")));
@property (readonly) NSString * _Nullable desiredDateOfDelivery __attribute__((swift_name("desiredDateOfDelivery")));
@property (readonly) ApollokmmUserQueryDesiredHandoverAddress * _Nullable desiredHandoverAddress __attribute__((swift_name("desiredHandoverAddress")));
@property (readonly) ApollokmmUserQueryHandoverAddress * _Nullable handoverAddress __attribute__((swift_name("handoverAddress")));
@property (readonly) ApollokmmUserQueryHandoverContent * _Nullable handoverContent __attribute__((swift_name("handoverContent")));
@property (readonly) NSString * _Nullable handoverDate __attribute__((swift_name("handoverDate")));
@property (readonly) NSString * _Nullable handoverType __attribute__((swift_name("handoverType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable infoboxText __attribute__((swift_name("infoboxText")));
@property (readonly) BOOL isSigned __attribute__((swift_name("isSigned")));
@property (readonly) NSString * _Nullable lostReasonDetail __attribute__((swift_name("lostReasonDetail")));
@property (readonly) ApollokmmInt * _Nullable minimumAge __attribute__((swift_name("minimumAge")));
@property (readonly) NSString * _Nullable minimumDuration __attribute__((swift_name("minimumDuration")));
@property (readonly) double monthlyRate __attribute__((swift_name("monthlyRate")));
@property (readonly) ApollokmmUserQueryOffer *offer __attribute__((swift_name("offer")));
@property (readonly) ApollokmmDouble * _Nullable startingFee __attribute__((swift_name("startingFee")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable subStatus __attribute__((swift_name("subStatus")));
@property (readonly) ApollokmmUserQueryVoucher * _Nullable voucher __attribute__((swift_name("voucher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DealCompanion")))
@interface ApollokmmUserQueryDealCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryDeal *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DesiredHandoverAddress")))
@interface ApollokmmUserQueryDesiredHandoverAddress : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename street:(NSString * _Nullable)street postalCode:(NSString * _Nullable)postalCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("init(__typename:street:postalCode:city:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (ApollokmmUserQueryDesiredHandoverAddress *)doCopy__typename:(NSString *)__typename street:(NSString * _Nullable)street postalCode:(NSString * _Nullable)postalCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("doCopy(__typename:street:postalCode:city:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable postalCode __attribute__((swift_name("postalCode")));
@property (readonly) NSString * _Nullable street __attribute__((swift_name("street")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DesiredHandoverAddressCompanion")))
@interface ApollokmmUserQueryDesiredHandoverAddressCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryDesiredHandoverAddress *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Discount")))
@interface ApollokmmUserQueryDiscount : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename amountOff:(ApollokmmInt * _Nullable)amountOff newRate:(ApollokmmDouble * _Nullable)newRate type:(NSString * _Nullable)type __attribute__((swift_name("init(__typename:amountOff:newRate:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ApollokmmDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (ApollokmmUserQueryDiscount *)doCopy__typename:(NSString *)__typename amountOff:(ApollokmmInt * _Nullable)amountOff newRate:(ApollokmmDouble * _Nullable)newRate type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(__typename:amountOff:newRate:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) ApollokmmInt * _Nullable amountOff __attribute__((swift_name("amountOff")));
@property (readonly, getter=doNewRate) ApollokmmDouble * _Nullable newRate __attribute__((swift_name("newRate")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.DiscountCompanion")))
@interface ApollokmmUserQueryDiscountCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryDiscount *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.HandoverAddress")))
@interface ApollokmmUserQueryHandoverAddress : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename dealerName:(NSString * _Nullable)dealerName street:(NSString * _Nullable)street postalCode:(NSString * _Nullable)postalCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("init(__typename:dealerName:street:postalCode:city:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (ApollokmmUserQueryHandoverAddress *)doCopy__typename:(NSString *)__typename dealerName:(NSString * _Nullable)dealerName street:(NSString * _Nullable)street postalCode:(NSString * _Nullable)postalCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("doCopy(__typename:dealerName:street:postalCode:city:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable dealerName __attribute__((swift_name("dealerName")));
@property (readonly) NSString * _Nullable postalCode __attribute__((swift_name("postalCode")));
@property (readonly) NSString * _Nullable street __attribute__((swift_name("street")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.HandoverAddressCompanion")))
@interface ApollokmmUserQueryHandoverAddressCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryHandoverAddress *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.HandoverContent")))
@interface ApollokmmUserQueryHandoverContent : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename content:(NSArray<id> * _Nullable)content active:(ApollokmmUserQueryActive * _Nullable)active __attribute__((swift_name("init(__typename:content:active:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<id> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryActive * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<ApollokmmUserQueryContent *> * _Nullable)contentFilterNotNull __attribute__((swift_name("contentFilterNotNull()")));
- (ApollokmmUserQueryHandoverContent *)doCopy__typename:(NSString *)__typename content:(NSArray<id> * _Nullable)content active:(ApollokmmUserQueryActive * _Nullable)active __attribute__((swift_name("doCopy(__typename:content:active:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) ApollokmmUserQueryActive * _Nullable active __attribute__((swift_name("active")));
@property (readonly) NSArray<id> * _Nullable content __attribute__((swift_name("content")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.HandoverContentCompanion")))
@interface ApollokmmUserQueryHandoverContentCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryHandoverContent *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.IdentityProof")))
@interface ApollokmmUserQueryIdentityProof : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename result:(NSString *)result __attribute__((swift_name("init(__typename:result:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryIdentityProof *)doCopy__typename:(NSString *)__typename result:(NSString *)result __attribute__((swift_name("doCopy(__typename:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString *result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.IdentityProofCompanion")))
@interface ApollokmmUserQueryIdentityProofCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryIdentityProof *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Labels")))
@interface ApollokmmUserQueryLabels : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename en:(NSString *)en de:(NSString *)de __attribute__((swift_name("init(__typename:en:de:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ApollokmmUserQueryLabels *)doCopy__typename:(NSString *)__typename en:(NSString *)en de:(NSString *)de __attribute__((swift_name("doCopy(__typename:en:de:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString *de __attribute__((swift_name("de")));
@property (readonly) NSString *en __attribute__((swift_name("en")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.LabelsCompanion")))
@interface ApollokmmUserQueryLabelsCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryLabels *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.MailingAddress")))
@interface ApollokmmUserQueryMailingAddress : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename street:(NSString *)street postalCode:(NSString *)postalCode city:(NSString *)city country:(NSString *)country __attribute__((swift_name("init(__typename:street:postalCode:city:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (ApollokmmUserQueryMailingAddress *)doCopy__typename:(NSString *)__typename street:(NSString *)street postalCode:(NSString *)postalCode city:(NSString *)city country:(NSString *)country __attribute__((swift_name("doCopy(__typename:street:postalCode:city:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *postalCode __attribute__((swift_name("postalCode")));
@property (readonly) NSString *street __attribute__((swift_name("street")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.MailingAddressCompanion")))
@interface ApollokmmUserQueryMailingAddressCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryMailingAddress *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Offer")))
@interface ApollokmmUserQueryOffer : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id isAvailable:(BOOL)isAvailable make:(NSString *)make model:(NSString *)model version:(NSString * _Nullable)version teaserImage:(NSString *)teaserImage startingFee:(double)startingFee portfolio:(NSString *)portfolio equipmentList:(NSString * _Nullable)equipmentList ps:(ApollokmmInt * _Nullable)ps kw:(ApollokmmInt * _Nullable)kw drive:(NSString * _Nullable)drive fuelType:(NSString * _Nullable)fuelType gearingType:(NSString * _Nullable)gearingType earliestAvailabilityDays:(ApollokmmInt * _Nullable)earliestAvailabilityDays annualKm:(ApollokmmInt * _Nullable)annualKm excessKmFee:(ApollokmmDouble * _Nullable)excessKmFee excessMonthlyKm:(ApollokmmInt * _Nullable)excessMonthlyKm partialDeductible:(ApollokmmInt * _Nullable)partialDeductible fullyDeductable:(ApollokmmInt * _Nullable)fullyDeductable estimatedDeliveryTime:(NSString * _Nullable)estimatedDeliveryTime __attribute__((swift_name("init(__typename:id:isAvailable:make:model:version:teaserImage:startingFee:portfolio:equipmentList:ps:kw:drive:fuelType:gearingType:earliestAvailabilityDays:annualKm:excessKmFee:excessMonthlyKm:partialDeductible:fullyDeductable:estimatedDeliveryTime:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (ApollokmmInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (ApollokmmInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (ApollokmmInt * _Nullable)component16 __attribute__((swift_name("component16()")));
- (ApollokmmInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (ApollokmmDouble * _Nullable)component18 __attribute__((swift_name("component18()")));
- (ApollokmmInt * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ApollokmmInt * _Nullable)component20 __attribute__((swift_name("component20()")));
- (ApollokmmInt * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (ApollokmmUserQueryOffer *)doCopy__typename:(NSString *)__typename id:(NSString *)id isAvailable:(BOOL)isAvailable make:(NSString *)make model:(NSString *)model version:(NSString * _Nullable)version teaserImage:(NSString *)teaserImage startingFee:(double)startingFee portfolio:(NSString *)portfolio equipmentList:(NSString * _Nullable)equipmentList ps:(ApollokmmInt * _Nullable)ps kw:(ApollokmmInt * _Nullable)kw drive:(NSString * _Nullable)drive fuelType:(NSString * _Nullable)fuelType gearingType:(NSString * _Nullable)gearingType earliestAvailabilityDays:(ApollokmmInt * _Nullable)earliestAvailabilityDays annualKm:(ApollokmmInt * _Nullable)annualKm excessKmFee:(ApollokmmDouble * _Nullable)excessKmFee excessMonthlyKm:(ApollokmmInt * _Nullable)excessMonthlyKm partialDeductible:(ApollokmmInt * _Nullable)partialDeductible fullyDeductable:(ApollokmmInt * _Nullable)fullyDeductable estimatedDeliveryTime:(NSString * _Nullable)estimatedDeliveryTime __attribute__((swift_name("doCopy(__typename:id:isAvailable:make:model:version:teaserImage:startingFee:portfolio:equipmentList:ps:kw:drive:fuelType:gearingType:earliestAvailabilityDays:annualKm:excessKmFee:excessMonthlyKm:partialDeductible:fullyDeductable:estimatedDeliveryTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) ApollokmmInt * _Nullable annualKm __attribute__((swift_name("annualKm")));
@property (readonly) NSString * _Nullable drive __attribute__((swift_name("drive")));
@property (readonly) ApollokmmInt * _Nullable earliestAvailabilityDays __attribute__((swift_name("earliestAvailabilityDays")));
@property (readonly) NSString * _Nullable equipmentList __attribute__((swift_name("equipmentList")));
@property (readonly) NSString * _Nullable estimatedDeliveryTime __attribute__((swift_name("estimatedDeliveryTime")));
@property (readonly) ApollokmmDouble * _Nullable excessKmFee __attribute__((swift_name("excessKmFee")));
@property (readonly) ApollokmmInt * _Nullable excessMonthlyKm __attribute__((swift_name("excessMonthlyKm")));
@property (readonly) NSString * _Nullable fuelType __attribute__((swift_name("fuelType")));
@property (readonly) ApollokmmInt * _Nullable fullyDeductable __attribute__((swift_name("fullyDeductable")));
@property (readonly) NSString * _Nullable gearingType __attribute__((swift_name("gearingType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isAvailable __attribute__((swift_name("isAvailable")));
@property (readonly) ApollokmmInt * _Nullable kw __attribute__((swift_name("kw")));
@property (readonly) NSString *make __attribute__((swift_name("make")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) ApollokmmInt * _Nullable partialDeductible __attribute__((swift_name("partialDeductible")));
@property (readonly) NSString *portfolio __attribute__((swift_name("portfolio")));
@property (readonly) ApollokmmInt * _Nullable ps __attribute__((swift_name("ps")));
@property (readonly) double startingFee __attribute__((swift_name("startingFee")));
@property (readonly) NSString *teaserImage __attribute__((swift_name("teaserImage")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.OfferCompanion")))
@interface ApollokmmUserQueryOfferCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryOffer *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Scoring")))
@interface ApollokmmUserQueryScoring : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename result:(ApollokmmInt * _Nullable)result __attribute__((swift_name("init(__typename:result:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryScoring *)doCopy__typename:(NSString *)__typename result:(ApollokmmInt * _Nullable)result __attribute__((swift_name("doCopy(__typename:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) ApollokmmInt * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.ScoringCompanion")))
@interface ApollokmmUserQueryScoringCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryScoring *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.SelfDisclosure")))
@interface ApollokmmUserQuerySelfDisclosure : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename hasPermanentContract:(ApollokmmBoolean * _Nullable)hasPermanentContract employedUntil:(NSString * _Nullable)employedUntil employedSince:(NSString * _Nullable)employedSince incomeNet:(ApollokmmInt * _Nullable)incomeNet incomeOther:(ApollokmmInt * _Nullable)incomeOther __attribute__((swift_name("init(__typename:hasPermanentContract:employedUntil:employedSince:incomeNet:incomeOther:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ApollokmmBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (ApollokmmInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (ApollokmmInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (ApollokmmUserQuerySelfDisclosure *)doCopy__typename:(NSString *)__typename hasPermanentContract:(ApollokmmBoolean * _Nullable)hasPermanentContract employedUntil:(NSString * _Nullable)employedUntil employedSince:(NSString * _Nullable)employedSince incomeNet:(ApollokmmInt * _Nullable)incomeNet incomeOther:(ApollokmmInt * _Nullable)incomeOther __attribute__((swift_name("doCopy(__typename:hasPermanentContract:employedUntil:employedSince:incomeNet:incomeOther:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable employedSince __attribute__((swift_name("employedSince")));
@property (readonly) NSString * _Nullable employedUntil __attribute__((swift_name("employedUntil")));
@property (readonly) ApollokmmBoolean * _Nullable hasPermanentContract __attribute__((swift_name("hasPermanentContract")));
@property (readonly) ApollokmmInt * _Nullable incomeNet __attribute__((swift_name("incomeNet")));
@property (readonly) ApollokmmInt * _Nullable incomeOther __attribute__((swift_name("incomeOther")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.SelfDisclosureCompanion")))
@interface ApollokmmUserQuerySelfDisclosureCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQuerySelfDisclosure *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.SerializedDatum")))
@interface ApollokmmUserQuerySerializedDatum : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id value:(NSString *)value labels:(ApollokmmUserQueryLabels * _Nullable)labels type:(NSString *)type options:(NSString * _Nullable)options sequenceNumber:(ApollokmmInt * _Nullable)sequenceNumber __attribute__((swift_name("init(__typename:id:value:labels:type:options:sequenceNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ApollokmmUserQueryLabels * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (ApollokmmInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (ApollokmmUserQuerySerializedDatum *)doCopy__typename:(NSString *)__typename id:(NSString *)id value:(NSString *)value labels:(ApollokmmUserQueryLabels * _Nullable)labels type:(NSString *)type options:(NSString * _Nullable)options sequenceNumber:(ApollokmmInt * _Nullable)sequenceNumber __attribute__((swift_name("doCopy(__typename:id:value:labels:type:options:sequenceNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) ApollokmmUserQueryLabels * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) NSString * _Nullable options __attribute__((swift_name("options")));
@property (readonly) ApollokmmInt * _Nullable sequenceNumber __attribute__((swift_name("sequenceNumber")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.SerializedDatumCompanion")))
@interface ApollokmmUserQuerySerializedDatumCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQuerySerializedDatum *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.User")))
@interface ApollokmmUserQueryUser : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id salutation:(NSString * _Nullable)salutation academicTitle:(NSString * _Nullable)academicTitle firstname:(NSString *)firstname lastname:(NSString *)lastname isProfileComplete:(BOOL)isProfileComplete hasEmploymentDetails:(BOOL)hasEmploymentDetails email:(NSString *)email phone:(NSString * _Nullable)phone crcReferralCode:(NSString * _Nullable)crcReferralCode numberOfReferrals:(ApollokmmInt * _Nullable)numberOfReferrals referralSavings:(ApollokmmDouble * _Nullable)referralSavings birthdate:(NSString * _Nullable)birthdate isPerson:(BOOL)isPerson employmentType:(NSString * _Nullable)employmentType canCompleteProfile:(BOOL)canCompleteProfile hasPersonalData:(BOOL)hasPersonalData hasProofOfOtherIncome:(BOOL)hasProofOfOtherIncome hasBankDetails:(BOOL)hasBankDetails hasDriversLicense:(BOOL)hasDriversLicense hasProofOfIncome:(BOOL)hasProofOfIncome hasIdentityProof:(BOOL)hasIdentityProof identityProof:(ApollokmmUserQueryIdentityProof * _Nullable)identityProof hasSelfDisclosure:(BOOL)hasSelfDisclosure selfDisclosure:(ApollokmmUserQuerySelfDisclosure * _Nullable)selfDisclosure newsletterSubscribed:(BOOL)newsletterSubscribed hasScoring:(BOOL)hasScoring scoring:(ApollokmmUserQueryScoring * _Nullable)scoring mailingAddress:(ApollokmmUserQueryMailingAddress * _Nullable)mailingAddress bankDetails:(ApollokmmUserQueryBankDetails * _Nullable)bankDetails deals:(NSArray<ApollokmmUserQueryDeal *> *)deals errors:(NSArray<id> *)errors __attribute__((swift_name("init(__typename:id:salutation:academicTitle:firstname:lastname:isProfileComplete:hasEmploymentDetails:email:phone:crcReferralCode:numberOfReferrals:referralSavings:birthdate:isPerson:employmentType:canCompleteProfile:hasPersonalData:hasProofOfOtherIncome:hasBankDetails:hasDriversLicense:hasProofOfIncome:hasIdentityProof:identityProof:hasSelfDisclosure:selfDisclosure:newsletterSubscribed:hasScoring:scoring:mailingAddress:bankDetails:deals:errors:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (ApollokmmInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (ApollokmmDouble * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (BOOL)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (BOOL)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component20 __attribute__((swift_name("component20()")));
- (BOOL)component21 __attribute__((swift_name("component21()")));
- (BOOL)component22 __attribute__((swift_name("component22()")));
- (BOOL)component23 __attribute__((swift_name("component23()")));
- (ApollokmmUserQueryIdentityProof * _Nullable)component24 __attribute__((swift_name("component24()")));
- (BOOL)component25 __attribute__((swift_name("component25()")));
- (ApollokmmUserQuerySelfDisclosure * _Nullable)component26 __attribute__((swift_name("component26()")));
- (BOOL)component27 __attribute__((swift_name("component27()")));
- (BOOL)component28 __attribute__((swift_name("component28()")));
- (ApollokmmUserQueryScoring * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (ApollokmmUserQueryMailingAddress * _Nullable)component30 __attribute__((swift_name("component30()")));
- (ApollokmmUserQueryBankDetails * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSArray<ApollokmmUserQueryDeal *> *)component32 __attribute__((swift_name("component32()")));
- (NSArray<id> *)component33 __attribute__((swift_name("component33()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (ApollokmmUserQueryUser *)doCopy__typename:(NSString *)__typename id:(NSString *)id salutation:(NSString * _Nullable)salutation academicTitle:(NSString * _Nullable)academicTitle firstname:(NSString *)firstname lastname:(NSString *)lastname isProfileComplete:(BOOL)isProfileComplete hasEmploymentDetails:(BOOL)hasEmploymentDetails email:(NSString *)email phone:(NSString * _Nullable)phone crcReferralCode:(NSString * _Nullable)crcReferralCode numberOfReferrals:(ApollokmmInt * _Nullable)numberOfReferrals referralSavings:(ApollokmmDouble * _Nullable)referralSavings birthdate:(NSString * _Nullable)birthdate isPerson:(BOOL)isPerson employmentType:(NSString * _Nullable)employmentType canCompleteProfile:(BOOL)canCompleteProfile hasPersonalData:(BOOL)hasPersonalData hasProofOfOtherIncome:(BOOL)hasProofOfOtherIncome hasBankDetails:(BOOL)hasBankDetails hasDriversLicense:(BOOL)hasDriversLicense hasProofOfIncome:(BOOL)hasProofOfIncome hasIdentityProof:(BOOL)hasIdentityProof identityProof:(ApollokmmUserQueryIdentityProof * _Nullable)identityProof hasSelfDisclosure:(BOOL)hasSelfDisclosure selfDisclosure:(ApollokmmUserQuerySelfDisclosure * _Nullable)selfDisclosure newsletterSubscribed:(BOOL)newsletterSubscribed hasScoring:(BOOL)hasScoring scoring:(ApollokmmUserQueryScoring * _Nullable)scoring mailingAddress:(ApollokmmUserQueryMailingAddress * _Nullable)mailingAddress bankDetails:(ApollokmmUserQueryBankDetails * _Nullable)bankDetails deals:(NSArray<ApollokmmUserQueryDeal *> *)deals errors:(NSArray<id> *)errors __attribute__((swift_name("doCopy(__typename:id:salutation:academicTitle:firstname:lastname:isProfileComplete:hasEmploymentDetails:email:phone:crcReferralCode:numberOfReferrals:referralSavings:birthdate:isPerson:employmentType:canCompleteProfile:hasPersonalData:hasProofOfOtherIncome:hasBankDetails:hasDriversLicense:hasProofOfIncome:hasIdentityProof:identityProof:hasSelfDisclosure:selfDisclosure:newsletterSubscribed:hasScoring:scoring:mailingAddress:bankDetails:deals:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<NSString *> *)errorsFilterNotNull __attribute__((swift_name("errorsFilterNotNull()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable academicTitle __attribute__((swift_name("academicTitle")));
@property (readonly) ApollokmmUserQueryBankDetails * _Nullable bankDetails __attribute__((swift_name("bankDetails")));
@property (readonly) NSString * _Nullable birthdate __attribute__((swift_name("birthdate")));
@property (readonly) BOOL canCompleteProfile __attribute__((swift_name("canCompleteProfile")));
@property (readonly) NSString * _Nullable crcReferralCode __attribute__((swift_name("crcReferralCode")));
@property (readonly) NSArray<ApollokmmUserQueryDeal *> *deals __attribute__((swift_name("deals")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable employmentType __attribute__((swift_name("employmentType")));
@property (readonly) NSArray<id> *errors __attribute__((swift_name("errors")));
@property (readonly) NSString *firstname __attribute__((swift_name("firstname")));
@property (readonly) BOOL hasBankDetails __attribute__((swift_name("hasBankDetails")));
@property (readonly) BOOL hasDriversLicense __attribute__((swift_name("hasDriversLicense")));
@property (readonly) BOOL hasEmploymentDetails __attribute__((swift_name("hasEmploymentDetails")));
@property (readonly) BOOL hasIdentityProof __attribute__((swift_name("hasIdentityProof")));
@property (readonly) BOOL hasPersonalData __attribute__((swift_name("hasPersonalData")));
@property (readonly) BOOL hasProofOfIncome __attribute__((swift_name("hasProofOfIncome")));
@property (readonly) BOOL hasProofOfOtherIncome __attribute__((swift_name("hasProofOfOtherIncome")));
@property (readonly) BOOL hasScoring __attribute__((swift_name("hasScoring")));
@property (readonly) BOOL hasSelfDisclosure __attribute__((swift_name("hasSelfDisclosure")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) ApollokmmUserQueryIdentityProof * _Nullable identityProof __attribute__((swift_name("identityProof")));
@property (readonly) BOOL isPerson __attribute__((swift_name("isPerson")));
@property (readonly) BOOL isProfileComplete __attribute__((swift_name("isProfileComplete")));
@property (readonly) NSString *lastname __attribute__((swift_name("lastname")));
@property (readonly) ApollokmmUserQueryMailingAddress * _Nullable mailingAddress __attribute__((swift_name("mailingAddress")));
@property (readonly) BOOL newsletterSubscribed __attribute__((swift_name("newsletterSubscribed")));
@property (readonly) ApollokmmInt * _Nullable numberOfReferrals __attribute__((swift_name("numberOfReferrals")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) ApollokmmDouble * _Nullable referralSavings __attribute__((swift_name("referralSavings")));
@property (readonly) NSString * _Nullable salutation __attribute__((swift_name("salutation")));
@property (readonly) ApollokmmUserQueryScoring * _Nullable scoring __attribute__((swift_name("scoring")));
@property (readonly) ApollokmmUserQuerySelfDisclosure * _Nullable selfDisclosure __attribute__((swift_name("selfDisclosure")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.UserCompanion")))
@interface ApollokmmUserQueryUserCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryUser *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Vehicle")))
@interface ApollokmmUserQueryVehicle : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename id:(NSString *)id licensePlate:(NSString *)licensePlate make:(NSString *)make model:(NSString *)model version:(NSString * _Nullable)version ps:(int32_t)ps kw:(int32_t)kw drive:(NSString * _Nullable)drive fuelType:(NSString *)fuelType gearingType:(NSString *)gearingType carImage:(NSString *)carImage manuals:(NSArray<id> * _Nullable)manuals exteriorColor:(NSString * _Nullable)exteriorColor __attribute__((swift_name("init(__typename:id:licensePlate:make:model:version:ps:kw:drive:fuelType:gearingType:carImage:manuals:exteriorColor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSArray<id> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (ApollokmmUserQueryVehicle *)doCopy__typename:(NSString *)__typename id:(NSString *)id licensePlate:(NSString *)licensePlate make:(NSString *)make model:(NSString *)model version:(NSString * _Nullable)version ps:(int32_t)ps kw:(int32_t)kw drive:(NSString * _Nullable)drive fuelType:(NSString *)fuelType gearingType:(NSString *)gearingType carImage:(NSString *)carImage manuals:(NSArray<id> * _Nullable)manuals exteriorColor:(NSString * _Nullable)exteriorColor __attribute__((swift_name("doCopy(__typename:id:licensePlate:make:model:version:ps:kw:drive:fuelType:gearingType:carImage:manuals:exteriorColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<NSString *> * _Nullable)manualsFilterNotNull __attribute__((swift_name("manualsFilterNotNull()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString *carImage __attribute__((swift_name("carImage")));
@property (readonly) NSString * _Nullable drive __attribute__((swift_name("drive")));
@property (readonly) NSString * _Nullable exteriorColor __attribute__((swift_name("exteriorColor")));
@property (readonly) NSString *fuelType __attribute__((swift_name("fuelType")));
@property (readonly) NSString *gearingType __attribute__((swift_name("gearingType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t kw __attribute__((swift_name("kw")));
@property (readonly) NSString *licensePlate __attribute__((swift_name("licensePlate")));
@property (readonly) NSString *make __attribute__((swift_name("make")));
@property (readonly) NSArray<id> * _Nullable manuals __attribute__((swift_name("manuals")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) int32_t ps __attribute__((swift_name("ps")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.VehicleCompanion")))
@interface ApollokmmUserQueryVehicleCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryVehicle *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.Voucher")))
@interface ApollokmmUserQueryVoucher : ApollokmmBase
- (instancetype)initWith__typename:(NSString *)__typename code:(NSString * _Nullable)code discount:(ApollokmmUserQueryDiscount * _Nullable)discount units:(ApollokmmInt * _Nullable)units campaignId:(NSString * _Nullable)campaignId __attribute__((swift_name("init(__typename:code:discount:units:campaignId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ApollokmmUserQueryDiscount * _Nullable)component3 __attribute__((swift_name("component3()")));
- (ApollokmmInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (ApollokmmUserQueryVoucher *)doCopy__typename:(NSString *)__typename code:(NSString * _Nullable)code discount:(ApollokmmUserQueryDiscount * _Nullable)discount units:(ApollokmmInt * _Nullable)units campaignId:(NSString * _Nullable)campaignId __attribute__((swift_name("doCopy(__typename:code:discount:units:campaignId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiResponseFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) NSString * _Nullable campaignId __attribute__((swift_name("campaignId")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) ApollokmmUserQueryDiscount * _Nullable discount __attribute__((swift_name("discount")));
@property (readonly) ApollokmmInt * _Nullable units __attribute__((swift_name("units")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQuery.VoucherCompanion")))
@interface ApollokmmUserQueryVoucherCompanion : ApollokmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ApollokmmApollo_apiResponseFieldMapper>)Mapper __attribute__((swift_name("Mapper()")));
- (ApollokmmUserQueryVoucher *)invokeReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("invoke(reader:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApolloKmmRepository")))
@interface ApollokmmApolloKmmRepository : ApollokmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(ApollokmmApollo_apiResponse<ApollokmmUserQueryData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ApollokmmGreeting : ApollokmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface ApollokmmPlatform : ApollokmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol ApollokmmKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface ApollokmmKotlinEnum<E> : ApollokmmBase <ApollokmmKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((swift_name("Apollo_apiScalarType")))
@protocol ApollokmmApollo_apiScalarType
@required
- (NSString *)className __attribute__((swift_name("className()")));
- (NSString *)typeName __attribute__((swift_name("typeName()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomType")))
@interface ApollokmmCustomType : ApollokmmKotlinEnum<ApollokmmCustomType *> <ApollokmmApollo_apiScalarType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ApollokmmCustomType *id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface ApollokmmOkioByteString : ApollokmmBase <ApollokmmKotlinComparable>
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(ApollokmmOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)endsWithSuffix:(ApollokmmKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(ApollokmmOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (int32_t)indexOfOther:(ApollokmmKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(ApollokmmOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(ApollokmmKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(ApollokmmOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (ApollokmmOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(ApollokmmKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(ApollokmmOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (ApollokmmOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (ApollokmmOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (ApollokmmOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(ApollokmmKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(ApollokmmOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (ApollokmmOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (ApollokmmOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (ApollokmmOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (ApollokmmKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiScalarTypeAdapters")))
@interface ApollokmmApollo_apiScalarTypeAdapters : ApollokmmBase
- (instancetype)initWithCustomAdapters:(NSDictionary<id<ApollokmmApollo_apiScalarType>, id<ApollokmmApollo_apiCustomTypeAdapter>> *)customAdapters __attribute__((swift_name("init(customAdapters:)"))) __attribute__((objc_designated_initializer));
- (id<ApollokmmApollo_apiCustomTypeAdapter>)adapterForScalarType:(id<ApollokmmApollo_apiScalarType>)scalarType __attribute__((swift_name("adapterFor(scalarType:)")));
@property (readonly) NSDictionary<id<ApollokmmApollo_apiScalarType>, id<ApollokmmApollo_apiCustomTypeAdapter>> *customAdapters __attribute__((swift_name("customAdapters")));
@end;

__attribute__((swift_name("Apollo_apiOperationName")))
@protocol ApollokmmApollo_apiOperationName
@required
- (NSString *)name __attribute__((swift_name("name()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiResponse")))
@interface ApollokmmApollo_apiResponse<T> : ApollokmmBase
- (instancetype)initWithBuilder:(ApollokmmApollo_apiResponseBuilder<T> *)builder __attribute__((swift_name("init(builder:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOperation:(id<ApollokmmApollo_apiOperation>)operation data:(T _Nullable)data errors:(NSArray<ApollokmmApollo_apiError *> * _Nullable)errors dependentKeys:(NSSet<NSString *> *)dependentKeys isFromCache:(BOOL)isFromCache extensions:(NSDictionary<NSString *, id> *)extensions executionContext:(id<ApollokmmApollo_apiExecutionContext>)executionContext __attribute__((swift_name("init(operation:data:errors:dependentKeys:isFromCache:extensions:executionContext:)"))) __attribute__((objc_designated_initializer));
- (id<ApollokmmApollo_apiOperation>)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<ApollokmmApollo_apiError *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSSet<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<NSString *, id> *)component6 __attribute__((swift_name("component6()")));
- (id<ApollokmmApollo_apiExecutionContext>)component7 __attribute__((swift_name("component7()")));
- (ApollokmmApollo_apiResponse<T> *)doCopyOperation:(id<ApollokmmApollo_apiOperation>)operation data:(T _Nullable)data errors:(NSArray<ApollokmmApollo_apiError *> * _Nullable)errors dependentKeys:(NSSet<NSString *> *)dependentKeys isFromCache:(BOOL)isFromCache extensions:(NSDictionary<NSString *, id> *)extensions executionContext:(id<ApollokmmApollo_apiExecutionContext>)executionContext __attribute__((swift_name("doCopy(operation:data:errors:dependentKeys:isFromCache:extensions:executionContext:)")));
- (T _Nullable)data __attribute__((swift_name("data()"))) __attribute__((deprecated("Use property instead")));
- (NSSet<NSString *> *)dependentKeys __attribute__((swift_name("dependentKeys()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<ApollokmmApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors()"))) __attribute__((deprecated("Use property instead")));
- (NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("extensions()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)fromCache __attribute__((swift_name("fromCache()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiOperation>)operation __attribute__((swift_name("operation()"))) __attribute__((deprecated("Use property instead")));
- (ApollokmmApollo_apiResponseBuilder<T> *)toBuilder __attribute__((swift_name("toBuilder()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=data_) T _Nullable data __attribute__((swift_name("data")));
@property (readonly, getter=dependentKeys_) NSSet<NSString *> *dependentKeys __attribute__((swift_name("dependentKeys")));
@property (readonly, getter=errors_) NSArray<ApollokmmApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) id<ApollokmmApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly, getter=extensions_) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly, getter=fromCache_) BOOL fromCache __attribute__((swift_name("fromCache"))) __attribute__((deprecated("Use isFromCache Instead")));
@property (readonly) BOOL isFromCache __attribute__((swift_name("isFromCache")));
@property (readonly, getter=operation_) id<ApollokmmApollo_apiOperation> operation __attribute__((swift_name("operation")));
@end;

__attribute__((swift_name("OkioSource")))
@protocol ApollokmmOkioSource
@required
- (void)close __attribute__((swift_name("close()")));
- (int64_t)readSink:(ApollokmmOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("read(sink:byteCount:)")));
- (ApollokmmOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((swift_name("OkioBufferedSource")))
@protocol ApollokmmOkioBufferedSource <ApollokmmOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(ApollokmmOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(ApollokmmOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(ApollokmmOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(ApollokmmOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<ApollokmmOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(ApollokmmOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(ApollokmmOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(ApollokmmKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(ApollokmmKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<ApollokmmOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (ApollokmmKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (ApollokmmKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (ApollokmmOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (ApollokmmOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(ApollokmmKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(ApollokmmOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<ApollokmmOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) ApollokmmOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("Apollo_apiResponseFieldMapper")))
@protocol ApollokmmApollo_apiResponseFieldMapper
@required
- (id _Nullable)mapResponseReader:(id<ApollokmmApollo_apiResponseReader>)responseReader __attribute__((swift_name("map(responseReader:)")));
@end;

__attribute__((swift_name("Apollo_apiOperationVariables")))
@interface ApollokmmApollo_apiOperationVariables : ApollokmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)marshal __attribute__((swift_name("marshal()")));
- (NSString *)marshalScalarTypeAdapters:(ApollokmmApollo_apiScalarTypeAdapters *)scalarTypeAdapters __attribute__((swift_name("marshal(scalarTypeAdapters:)")));
- (id<ApollokmmApollo_apiInputFieldMarshaller>)marshaller __attribute__((swift_name("marshaller()")));
- (NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("valueMap()")));
@end;

__attribute__((swift_name("Apollo_apiResponseFieldMarshaller")))
@protocol ApollokmmApollo_apiResponseFieldMarshaller
@required
- (void)marshalWriter:(id<ApollokmmApollo_apiResponseWriter>)writer __attribute__((swift_name("marshal(writer:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseReader")))
@protocol ApollokmmApollo_apiResponseReader
@required
- (ApollokmmBoolean * _Nullable)readBooleanField:(ApollokmmApollo_apiResponseField *)field __attribute__((swift_name("readBoolean(field:)")));
- (id _Nullable)readCustomTypeField:(ApollokmmApollo_apiResponseFieldCustomTypeField *)field __attribute__((swift_name("readCustomType(field:)")));
- (ApollokmmDouble * _Nullable)readDoubleField:(ApollokmmApollo_apiResponseField *)field __attribute__((swift_name("readDouble(field:)")));
- (id _Nullable)readFragmentField:(ApollokmmApollo_apiResponseField *)field block:(id (^)(id<ApollokmmApollo_apiResponseReader>))block __attribute__((swift_name("readFragment(field:block:)")));
- (id _Nullable)readFragmentField:(ApollokmmApollo_apiResponseField *)field objectReader:(id<ApollokmmApollo_apiResponseReaderObjectReader>)objectReader __attribute__((swift_name("readFragment(field:objectReader:)")));
- (ApollokmmInt * _Nullable)readIntField:(ApollokmmApollo_apiResponseField *)field __attribute__((swift_name("readInt(field:)")));
- (NSArray<id> * _Nullable)readListField:(ApollokmmApollo_apiResponseField *)field block:(id (^)(id<ApollokmmApollo_apiResponseReaderListItemReader>))block __attribute__((swift_name("readList(field:block:)")));
- (NSArray<id> * _Nullable)readListField:(ApollokmmApollo_apiResponseField *)field listReader:(id<ApollokmmApollo_apiResponseReaderListReader>)listReader __attribute__((swift_name("readList(field:listReader:)")));
- (ApollokmmLong * _Nullable)readLongField:(ApollokmmApollo_apiResponseField *)field __attribute__((swift_name("readLong(field:)")));
- (id _Nullable)readObjectField:(ApollokmmApollo_apiResponseField *)field block:(id (^)(id<ApollokmmApollo_apiResponseReader>))block __attribute__((swift_name("readObject(field:block:)")));
- (id _Nullable)readObjectField:(ApollokmmApollo_apiResponseField *)field objectReader:(id<ApollokmmApollo_apiResponseReaderObjectReader>)objectReader __attribute__((swift_name("readObject(field:objectReader:)")));
- (NSString * _Nullable)readStringField:(ApollokmmApollo_apiResponseField *)field __attribute__((swift_name("readString(field:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface ApollokmmKotlinThrowable : ApollokmmBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (ApollokmmKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ApollokmmKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface ApollokmmKotlinException : ApollokmmKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface ApollokmmKotlinRuntimeException : ApollokmmKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ApollokmmKotlinIllegalStateException : ApollokmmKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface ApollokmmKotlinCancellationException : ApollokmmKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ApollokmmKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ApollokmmKotlinByteArray : ApollokmmBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ApollokmmByte *(^)(ApollokmmInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ApollokmmKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol ApollokmmApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(ApollokmmApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (ApollokmmApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiResponseBuilder")))
@interface ApollokmmApollo_apiResponseBuilder<T> : ApollokmmBase
- (ApollokmmApollo_apiResponse<T> *)build __attribute__((swift_name("build()")));
- (ApollokmmApollo_apiResponseBuilder<T> *)dataData:(T _Nullable)data __attribute__((swift_name("data(data:)")));
- (ApollokmmApollo_apiResponseBuilder<T> *)dependentKeysDependentKeys:(NSSet<NSString *> * _Nullable)dependentKeys __attribute__((swift_name("dependentKeys(dependentKeys:)")));
- (ApollokmmApollo_apiResponseBuilder<T> *)errorsErrors:(NSArray<ApollokmmApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (ApollokmmApollo_apiResponseBuilder<T> *)executionContextExecutionContext:(id<ApollokmmApollo_apiExecutionContext>)executionContext __attribute__((swift_name("executionContext(executionContext:)")));
- (ApollokmmApollo_apiResponseBuilder<T> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (ApollokmmApollo_apiResponseBuilder<T> *)fromCacheFromCache:(BOOL)fromCache __attribute__((swift_name("fromCache(fromCache:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface ApollokmmApollo_apiError : ApollokmmBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<ApollokmmApollo_apiErrorLocation *> *)locations customAttributes:(NSDictionary<NSString *, id> *)customAttributes __attribute__((swift_name("init(message:locations:customAttributes:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)customAttributes __attribute__((swift_name("customAttributes()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<ApollokmmApollo_apiErrorLocation *> *)locations __attribute__((swift_name("locations()"))) __attribute__((deprecated("Use property instead")));
- (NSString * _Nullable)message __attribute__((swift_name("message()"))) __attribute__((deprecated("Use property instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=customAttributes_) NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes")));
@property (readonly, getter=locations_) NSArray<ApollokmmApollo_apiErrorLocation *> *locations __attribute__((swift_name("locations")));
@property (readonly, getter=message_) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol ApollokmmApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ApollokmmApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ApollokmmApollo_apiExecutionContextElement> _Nullable)getKey:(id<ApollokmmApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ApollokmmApollo_apiExecutionContext>)minusKeyKey:(id<ApollokmmApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ApollokmmApollo_apiExecutionContext>)plusContext:(id<ApollokmmApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("OkioSink")))
@protocol ApollokmmOkioSink
@required
- (void)close __attribute__((swift_name("close()")));
- (void)flush __attribute__((swift_name("flush()")));
- (ApollokmmOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (void)writeSource:(ApollokmmOkioBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end;

__attribute__((swift_name("OkioBufferedSink")))
@protocol ApollokmmOkioBufferedSink <ApollokmmOkioSink>
@required
- (id<ApollokmmOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<ApollokmmOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<ApollokmmOkioBufferedSink>)writeSource:(ApollokmmKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<ApollokmmOkioBufferedSink>)writeSource:(ApollokmmKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<ApollokmmOkioBufferedSink>)writeByteString:(ApollokmmOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<ApollokmmOkioBufferedSink>)writeByteString:(ApollokmmOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<ApollokmmOkioBufferedSink>)writeSource:(id<ApollokmmOkioSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (int64_t)writeAllSource:(id<ApollokmmOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<ApollokmmOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<ApollokmmOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<ApollokmmOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<ApollokmmOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<ApollokmmOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<ApollokmmOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<ApollokmmOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<ApollokmmOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<ApollokmmOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<ApollokmmOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<ApollokmmOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<ApollokmmOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) ApollokmmOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface ApollokmmOkioBuffer : ApollokmmBase <ApollokmmOkioBufferedSource, ApollokmmOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (ApollokmmOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (ApollokmmOkioBuffer *)doCopyToOut:(ApollokmmOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (ApollokmmOkioBuffer *)doCopyToOut:(ApollokmmOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (ApollokmmOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (ApollokmmOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(ApollokmmOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(ApollokmmOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(ApollokmmOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(ApollokmmOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<ApollokmmOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(ApollokmmOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(ApollokmmOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(ApollokmmKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(ApollokmmKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readSink:(ApollokmmOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("read(sink:byteCount:)")));
- (int64_t)readAllSink:(id<ApollokmmOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (ApollokmmKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (ApollokmmKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (ApollokmmOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (ApollokmmOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(ApollokmmKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(ApollokmmOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<ApollokmmOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (ApollokmmOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (ApollokmmOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (ApollokmmOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ApollokmmOkioBuffer *)writeSource:(ApollokmmKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (ApollokmmOkioBuffer *)writeSource:(ApollokmmKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (void)writeSource:(ApollokmmOkioBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (ApollokmmOkioBuffer *)writeByteString:(ApollokmmOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (ApollokmmOkioBuffer *)writeByteString:(ApollokmmOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (ApollokmmOkioBuffer *)writeSource:(id<ApollokmmOkioSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (int64_t)writeAllSource:(id<ApollokmmOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (ApollokmmOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (ApollokmmOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (ApollokmmOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (ApollokmmOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (ApollokmmOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (ApollokmmOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (ApollokmmOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (ApollokmmOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (ApollokmmOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (ApollokmmOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (ApollokmmOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (ApollokmmOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) ApollokmmOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioTimeout")))
@interface ApollokmmOkioTimeout : ApollokmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Apollo_apiInputFieldMarshaller")))
@protocol ApollokmmApollo_apiInputFieldMarshaller
@required
- (void)marshalWriter_:(id<ApollokmmApollo_apiInputFieldWriter>)writer __attribute__((swift_name("marshal(writer_:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseWriter")))
@protocol ApollokmmApollo_apiResponseWriter
@required
- (void)writeBooleanField:(ApollokmmApollo_apiResponseField *)field value:(ApollokmmBoolean * _Nullable)value __attribute__((swift_name("writeBoolean(field:value:)")));
- (void)writeCustomField:(ApollokmmApollo_apiResponseFieldCustomTypeField *)field value:(id _Nullable)value __attribute__((swift_name("writeCustom(field:value:)")));
- (void)writeDoubleField:(ApollokmmApollo_apiResponseField *)field value:(ApollokmmDouble * _Nullable)value __attribute__((swift_name("writeDouble(field:value:)")));
- (void)writeFragmentMarshaller:(id<ApollokmmApollo_apiResponseFieldMarshaller> _Nullable)marshaller __attribute__((swift_name("writeFragment(marshaller:)")));
- (void)writeIntField:(ApollokmmApollo_apiResponseField *)field value:(ApollokmmInt * _Nullable)value __attribute__((swift_name("writeInt(field:value:)")));
- (void)writeListField:(ApollokmmApollo_apiResponseField *)field values:(NSArray<id> * _Nullable)values block:(void (^)(NSArray<id> * _Nullable, id<ApollokmmApollo_apiResponseWriterListItemWriter>))block __attribute__((swift_name("writeList(field:values:block:)")));
- (void)writeListField:(ApollokmmApollo_apiResponseField *)field values:(NSArray<id> * _Nullable)values listWriter:(id<ApollokmmApollo_apiResponseWriterListWriter>)listWriter __attribute__((swift_name("writeList(field:values:listWriter:)")));
- (void)writeLongField:(ApollokmmApollo_apiResponseField *)field value:(ApollokmmLong * _Nullable)value __attribute__((swift_name("writeLong(field:value:)")));
- (void)writeObjectField:(ApollokmmApollo_apiResponseField *)field marshaller:(id<ApollokmmApollo_apiResponseFieldMarshaller> _Nullable)marshaller __attribute__((swift_name("writeObject(field:marshaller:)")));
- (void)writeStringField:(ApollokmmApollo_apiResponseField *)field value:(NSString * _Nullable)value __attribute__((swift_name("writeString(field:value:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseField")))
@interface ApollokmmApollo_apiResponseField : ApollokmmBase
- (NSDictionary<NSString *, id> *)arguments __attribute__((swift_name("arguments()"))) __attribute__((deprecated("Use property instead")));
- (NSArray<ApollokmmApollo_apiResponseFieldCondition *> *)conditions __attribute__((swift_name("conditions()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)fieldName __attribute__((swift_name("fieldName()"))) __attribute__((deprecated("Use property instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)optional __attribute__((swift_name("optional()"))) __attribute__((deprecated("Use property instead")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(ApollokmmApollo_apiOperationVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
- (NSString *)responseName __attribute__((swift_name("responseName()"))) __attribute__((deprecated("Use property instead")));
- (ApollokmmApollo_apiResponseFieldType *)type __attribute__((swift_name("type()"))) __attribute__((deprecated("Use property instead")));
@property (readonly, getter=arguments_) NSDictionary<NSString *, id> *arguments __attribute__((swift_name("arguments")));
@property (readonly, getter=conditions_) NSArray<ApollokmmApollo_apiResponseFieldCondition *> *conditions __attribute__((swift_name("conditions")));
@property (readonly, getter=fieldName_) NSString *fieldName __attribute__((swift_name("fieldName")));
@property (readonly, getter=optional_) BOOL optional __attribute__((swift_name("optional")));
@property (readonly, getter=responseName_) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly, getter=type_) ApollokmmApollo_apiResponseFieldType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiResponseField.CustomTypeField")))
@interface ApollokmmApollo_apiResponseFieldCustomTypeField : ApollokmmApollo_apiResponseField
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ApollokmmApollo_apiScalarType>)scalarType __attribute__((swift_name("scalarType()"))) __attribute__((deprecated("Use property instead")));
@property (readonly, getter=scalarType_) id<ApollokmmApollo_apiScalarType> scalarType __attribute__((swift_name("scalarType")));
@end;

__attribute__((swift_name("Apollo_apiResponseReaderObjectReader")))
@protocol ApollokmmApollo_apiResponseReaderObjectReader
@required
- (id)readReader:(id<ApollokmmApollo_apiResponseReader>)reader __attribute__((swift_name("read(reader:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseReaderListItemReader")))
@protocol ApollokmmApollo_apiResponseReaderListItemReader
@required
- (BOOL)readBoolean __attribute__((swift_name("readBoolean()")));
- (id)readCustomTypeScalarType:(id<ApollokmmApollo_apiScalarType>)scalarType __attribute__((swift_name("readCustomType(scalarType:)")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (NSArray<id> *)readListBlock:(id (^)(id<ApollokmmApollo_apiResponseReaderListItemReader>))block __attribute__((swift_name("readList(block:)")));
- (NSArray<id> *)readListListReader:(id<ApollokmmApollo_apiResponseReaderListReader>)listReader __attribute__((swift_name("readList(listReader:)")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (id)readObjectBlock:(id (^)(id<ApollokmmApollo_apiResponseReader>))block __attribute__((swift_name("readObject(block:)")));
- (id)readObjectObjectReader:(id<ApollokmmApollo_apiResponseReaderObjectReader>)objectReader __attribute__((swift_name("readObject(objectReader:)")));
- (NSString *)readString __attribute__((swift_name("readString()")));
@end;

__attribute__((swift_name("Apollo_apiResponseReaderListReader")))
@protocol ApollokmmApollo_apiResponseReaderListReader
@required
- (id)readReader_:(id<ApollokmmApollo_apiResponseReaderListItemReader>)reader __attribute__((swift_name("read(reader_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ApollokmmKotlinArray<T> : ApollokmmBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ApollokmmInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ApollokmmKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ApollokmmKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface ApollokmmKotlinByteIterator : ApollokmmBase <ApollokmmKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ApollokmmByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface ApollokmmApollo_apiCustomTypeValue<T> : ApollokmmBase
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface ApollokmmApollo_apiErrorLocation : ApollokmmBase
- (instancetype)initWithLine:(int64_t)line column:(int64_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (int64_t)column __attribute__((swift_name("column()"))) __attribute__((deprecated("Use property instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int64_t)line __attribute__((swift_name("line()"))) __attribute__((deprecated("Use property instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=column_) int64_t column __attribute__((swift_name("column")));
@property (readonly, getter=line_) int64_t line __attribute__((swift_name("line")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol ApollokmmApollo_apiExecutionContextElement <ApollokmmApollo_apiExecutionContext>
@required
@property (readonly) id<ApollokmmApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol ApollokmmApollo_apiExecutionContextKey
@required
@end;

__attribute__((swift_name("Apollo_apiInputFieldWriter")))
@protocol ApollokmmApollo_apiInputFieldWriter
@required
- (void)writeBooleanFieldName:(NSString *)fieldName value:(ApollokmmBoolean * _Nullable)value __attribute__((swift_name("writeBoolean(fieldName:value:)")));
- (void)writeCustomFieldName:(NSString *)fieldName scalarType:(id<ApollokmmApollo_apiScalarType>)scalarType value:(id _Nullable)value __attribute__((swift_name("writeCustom(fieldName:scalarType:value:)")));
- (void)writeDoubleFieldName:(NSString *)fieldName value:(ApollokmmDouble * _Nullable)value __attribute__((swift_name("writeDouble(fieldName:value:)")));
- (void)writeIntFieldName:(NSString *)fieldName value:(ApollokmmInt * _Nullable)value __attribute__((swift_name("writeInt(fieldName:value:)")));
- (void)writeListFieldName:(NSString *)fieldName block:(void (^)(id<ApollokmmApollo_apiInputFieldWriterListItemWriter>))block __attribute__((swift_name("writeList(fieldName:block:)")));
- (void)writeListFieldName:(NSString *)fieldName listWriter:(id<ApollokmmApollo_apiInputFieldWriterListWriter> _Nullable)listWriter __attribute__((swift_name("writeList(fieldName:listWriter:)")));
- (void)writeLongFieldName:(NSString *)fieldName value:(ApollokmmLong * _Nullable)value __attribute__((swift_name("writeLong(fieldName:value:)")));
- (void)writeMapFieldName:(NSString *)fieldName value:(NSDictionary<NSString *, id> * _Nullable)value __attribute__((swift_name("writeMap(fieldName:value:)")));
- (void)writeNumberFieldName:(NSString *)fieldName value:(id _Nullable)value __attribute__((swift_name("writeNumber(fieldName:value:)")));
- (void)writeObjectFieldName:(NSString *)fieldName marshaller:(id<ApollokmmApollo_apiInputFieldMarshaller> _Nullable)marshaller __attribute__((swift_name("writeObject(fieldName:marshaller:)")));
- (void)writeStringFieldName:(NSString *)fieldName value:(NSString * _Nullable)value __attribute__((swift_name("writeString(fieldName:value:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseWriterListItemWriter")))
@protocol ApollokmmApollo_apiResponseWriterListItemWriter
@required
- (void)writeBooleanValue:(ApollokmmBoolean * _Nullable)value __attribute__((swift_name("writeBoolean(value:)")));
- (void)writeCustomScalarType:(id<ApollokmmApollo_apiScalarType>)scalarType value:(id _Nullable)value __attribute__((swift_name("writeCustom(scalarType:value:)")));
- (void)writeDoubleValue:(ApollokmmDouble * _Nullable)value __attribute__((swift_name("writeDouble(value:)")));
- (void)writeIntValue:(ApollokmmInt * _Nullable)value __attribute__((swift_name("writeInt(value:)")));
- (void)writeListItems:(NSArray<id> * _Nullable)items block:(void (^)(NSArray<id> * _Nullable, id<ApollokmmApollo_apiResponseWriterListItemWriter>))block __attribute__((swift_name("writeList(items:block:)")));
- (void)writeListItems:(NSArray<id> * _Nullable)items listWriter:(id<ApollokmmApollo_apiResponseWriterListWriter>)listWriter __attribute__((swift_name("writeList(items:listWriter:)")));
- (void)writeLongValue:(ApollokmmLong * _Nullable)value __attribute__((swift_name("writeLong(value:)")));
- (void)writeObjectMarshaller:(id<ApollokmmApollo_apiResponseFieldMarshaller> _Nullable)marshaller __attribute__((swift_name("writeObject(marshaller:)")));
- (void)writeStringValue:(NSString * _Nullable)value __attribute__((swift_name("writeString(value:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseWriterListWriter")))
@protocol ApollokmmApollo_apiResponseWriterListWriter
@required
- (void)writeItems:(NSArray<id> * _Nullable)items listItemWriter:(id<ApollokmmApollo_apiResponseWriterListItemWriter>)listItemWriter __attribute__((swift_name("write(items:listItemWriter:)")));
@end;

__attribute__((swift_name("Apollo_apiResponseField.Condition")))
@interface ApollokmmApollo_apiResponseFieldCondition : ApollokmmBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiResponseField.Type_")))
@interface ApollokmmApollo_apiResponseFieldType : ApollokmmKotlinEnum<ApollokmmApollo_apiResponseFieldType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *string __attribute__((swift_name("string")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *int_ __attribute__((swift_name("int_")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *long_ __attribute__((swift_name("long_")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *enum_ __attribute__((swift_name("enum_")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *object __attribute__((swift_name("object")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *list __attribute__((swift_name("list")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *custom __attribute__((swift_name("custom")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *fragment __attribute__((swift_name("fragment")));
@property (class, readonly) ApollokmmApollo_apiResponseFieldType *fragments __attribute__((swift_name("fragments")));
@end;

__attribute__((swift_name("Apollo_apiInputFieldWriterListItemWriter")))
@protocol ApollokmmApollo_apiInputFieldWriterListItemWriter
@required
- (void)writeBooleanValue:(ApollokmmBoolean * _Nullable)value __attribute__((swift_name("writeBoolean(value:)")));
- (void)writeCustomScalarType:(id<ApollokmmApollo_apiScalarType>)scalarType value:(id _Nullable)value __attribute__((swift_name("writeCustom(scalarType:value:)")));
- (void)writeDoubleValue:(ApollokmmDouble * _Nullable)value __attribute__((swift_name("writeDouble(value:)")));
- (void)writeIntValue:(ApollokmmInt * _Nullable)value __attribute__((swift_name("writeInt(value:)")));
- (void)writeListBlock:(void (^)(id<ApollokmmApollo_apiInputFieldWriterListItemWriter>))block __attribute__((swift_name("writeList(block:)")));
- (void)writeListListWriter:(id<ApollokmmApollo_apiInputFieldWriterListWriter> _Nullable)listWriter __attribute__((swift_name("writeList(listWriter:)")));
- (void)writeLongValue:(ApollokmmLong * _Nullable)value __attribute__((swift_name("writeLong(value:)")));
- (void)writeMapValue:(NSDictionary<NSString *, id> * _Nullable)value __attribute__((swift_name("writeMap(value:)")));
- (void)writeNumberValue:(id _Nullable)value __attribute__((swift_name("writeNumber(value:)")));
- (void)writeObjectMarshaller_:(id<ApollokmmApollo_apiInputFieldMarshaller> _Nullable)marshaller __attribute__((swift_name("writeObject(marshaller_:)")));
- (void)writeStringValue:(NSString * _Nullable)value __attribute__((swift_name("writeString(value:)")));
@end;

__attribute__((swift_name("Apollo_apiInputFieldWriterListWriter")))
@protocol ApollokmmApollo_apiInputFieldWriterListWriter
@required
- (void)writeListItemWriter:(id<ApollokmmApollo_apiInputFieldWriterListItemWriter>)listItemWriter __attribute__((swift_name("write(listItemWriter:)")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
