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

//DES加密
+(NSString *) encryptUseDES:(NSString *)clearText key:(NSString *)key;
//DES解密
+(NSString*) decryptUseDES:(NSString*)cipherText key:(NSString*)key;

@end
