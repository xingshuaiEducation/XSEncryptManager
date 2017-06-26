//
//  XSEncryptManager.h
//  testDemo
//
//  Created by suxx on 2017/6/24.
//  Copyright © 2017年 suxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
#import "GTMBase64.h"

@interface XSEncryptManager : NSObject

@end

/********************* DES 加密解密 *************************/
@interface DESUtil : NSObject

/**
 DES加密

 @param clearText 需要加密的内容
 @param key 加密的密钥，为16
 @return 加密后的内容
 */
+(NSString *) encryptUseDES:(NSString *)clearText key:(NSString *)key;

/**
 DES解密

 @param cipherText 需要解密的内容
 @param key 解密的16位密钥
 @return 解密后的内容
 */
+(NSString*) decryptUseDES:(NSString*)cipherText key:(NSString*)key;

@end
