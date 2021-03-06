#import <UIKit/UIKit.h>

#import <LegacyComponents/LegacyComponents.h>

#import "TGDialogListCellAssetsSource.h"

@class TGDialogListController;

@interface TGDialogListCompanion : NSObject

@property (nonatomic, weak) TGDialogListController *dialogListController;

@property (nonatomic) bool showListEditingControl;
@property (nonatomic) bool forwardMode;
@property (nonatomic) bool privacyMode;
@property (nonatomic) bool showBroadcastsMenu;
@property (nonatomic) bool showSecretInForwardMode;
@property (nonatomic) bool showGroupsOnly;
@property (nonatomic) bool botStartMode;

@property (nonatomic) int unreadCount;

- (id<TGDialogListCellAssetsSource>)dialogListCellAssetsSource;

- (id)processSearchResultItem:(id)item;

- (void)dialogListReady;

- (void)clearData;

- (void)loadMoreItems;

- (void)composeMessageAndOpenSearch:(bool)openSearch;
- (void)navigateToBroadcastLists;
- (void)navigateToNewGroup;

- (void)conversationSelected:(TGConversation *)conversation;
- (void)deleteItem:(TGConversation *)conversation animated:(bool)animated;
- (void)clearItem:(TGConversation *)conversation animated:(bool)animated;

- (void)beginSearch:(NSString *)queryString inMessages:(bool)inMessages;
- (void)searchResultSelectedUser:(TGUser *)user;
- (void)searchResultSelectedConversation:(TGConversation *)conversation;
- (void)searchResultSelectedConversation:(TGConversation *)conversation atMessageId:(int)messageId;
- (void)searchResultSelectedMessage:(TGMessage *)message;

- (bool)shouldDisplayEmptyListPlaceholder;

- (void)wakeUp;

- (void)resetLocalization;

- (bool)isConversationOpened:(int64_t)conversationId;
- (int64_t)openedConversationId;

- (void)hintMoveConversationAtIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex;

@end
