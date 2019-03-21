#import <Cordova/CDVPlugin.h>

@interface AppIconChanger : CDVPlugin

- (void) isSupported:(CDVInvokedUrlCommand*)command;
- (void) changeIcon:(CDVInvokedUrlCommand*)command;
- (void) getAppIconName:(CDVInvokedUrlCommand*)command;

@end
