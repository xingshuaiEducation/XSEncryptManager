# XSEncryptManager
加密管理者,目前只支持16位DES加密    

1.cocoapod引入：    
  pod 'XSEncryptManager', :git => 'https://github.com/xingshuaiEducation/XSEncryptManager.git'    

2.引入头文件：    
  import <XSEncryptManager.h>    

3.使用代码：    
  加密：    
  NSString *ceshi = [DESUtil encryptUseDES:@"迪奥" key:@"1234567812345678"];    
  解密：    
  ceshi = [DESUtil decryptUseDES:ceshi key:@"1234567812345678"];
