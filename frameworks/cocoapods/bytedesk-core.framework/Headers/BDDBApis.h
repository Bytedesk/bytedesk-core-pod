//
//  KFDSDBApis.h
//  bdcore
//
//  Created by 萝卜丝 on 2018/11/18.
//  Copyright © 2018年 Bytedesk.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BDThreadModel;
@class BDQueueModel;
@class BDMessageModel;
@class BDGroupModel;
@class BDWorkGroupModel;
@class BDContactModel;

typedef void (^SuccessCallbackBlock)(NSDictionary *dict);
typedef void (^FailedCallbackBlock)(NSError *error);

@interface BDDBApis : NSObject

+ (BDDBApis *)sharedInstance;

#pragma mark - 访客端接口


#pragma mark - 客服端接口

- (BOOL) insertThread:(BDThreadModel *)thread;
- (BOOL) deleteThread:(NSString *)tId;

/**
 为保证会话列表中同一个访客、联系人、群组，只保留一条记录

 @param uId <#uId description#>
 @return <#return value description#>
 */
- (BOOL) deleteThreadUser:(NSString *)uId;
- (NSMutableArray *) getThreads;
- (BOOL) clearThreads;
- (BOOL) clearThreadUnreadCount:(NSString *)tId;

- (BOOL) insertQueue:(BDQueueModel *)queue;
- (BOOL) deleteQueue:(NSString *)qId;
- (NSMutableArray *) getQueues;
- (NSNumber *) getQueueCount;
- (BOOL) clearQueues;

- (BOOL) insertMessage:(BDMessageModel *)message;
- (NSMutableArray *)getMessagesWithType:(NSString *)type withUid:(NSString *)uid;

- (BOOL) updateMessage:(NSNumber *)localId withStatus:(NSString *)status;
- (BOOL) updateMessage:(NSNumber *)localId withMessageId:(NSNumber *)messageId;
- (BOOL) deleteMessage:(NSString *)mid;

- (BOOL) insertContact:(BDContactModel *)contact;
- (NSMutableArray *) getContacts;
- (BOOL) clearContacts;

- (BOOL) insertGroup:(BDGroupModel *)group;
- (NSMutableArray *) getGroups;
- (BOOL) clearGroups;

- (BOOL) insertWorkGroup:(BDWorkGroupModel *)workGroup;
- (NSMutableArray *) getWorkGroups;
- (BOOL) clearWorkGroups;

#pragma mark - 公共接口



@end
