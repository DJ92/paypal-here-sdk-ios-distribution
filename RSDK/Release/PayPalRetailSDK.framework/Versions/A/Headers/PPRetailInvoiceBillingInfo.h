/**
 * PPRetailInvoiceBillingInfo.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/paypal-invoicing/lib/BillingInfo.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailTokenExpirationHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Container for information about the payer or intended payer on an invoice
 */
@interface PPRetailInvoiceBillingInfo : PPRetailObject

    /**
    * The email address of the payer @required @length(1,260) @format(email)
    */
    @property (nonatomic,strong,nullable) NSString* email;
    /**
    * The first name of the payer @length(,30)
    */
    @property (nonatomic,strong,nullable) NSString* firstName;
    /**
    * The last name of the payer @length(,30)
    */
    @property (nonatomic,strong,nullable) NSString* lastName;
    /**
    * The business name of the payer
    */
    @property (nonatomic,strong,nullable) NSString* businessName;
    /**
    * The address of the payer @length(,100)
    */
    @property (nonatomic,strong,nullable) PPRetailInvoiceAddress* address;
    /**
    * Language of the email sent to the payer. Will
 * only be used if payer doesn't have a PayPal account.
    */
    @property (nonatomic,strong,nullable) NSString* language;
    /**
    * Option to display additional information
 * such as business hours. 40 characters max.
    */
    @property (nonatomic,strong,nullable) NSString* additionalInfo;
    /**
    * Preferred notification channel of the
 * payer. Email by default.
    */
    @property (nonatomic,strong,nullable) NSString* notificationChannel;
    /**
    * Country code (in E.164 format). Assume length is n.
    */
    @property (nonatomic,strong,nullable) NSString* countryCode;
    /**
    * In-country phone number (in E.164 format).
 * Maximum (15 - n) digits
    */
    @property (nonatomic,strong,nullable) NSString* nationalNumber;





    /**
     * Check to see if this object has any value
     */
    -(BOOL)hasAnyValue;




@end
