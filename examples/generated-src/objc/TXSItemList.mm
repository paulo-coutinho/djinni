// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#import "TXSItemList.h"


@implementation TXSItemList

- (nonnull instancetype)initWithItems:(nonnull NSArray<NSString *> *)items
{
    if (self = [super init]) {
        _items = [items copy];
    }
    return self;
}

+ (nonnull instancetype)itemListWithItems:(nonnull NSArray<NSString *> *)items
{
    return [[self alloc] initWithItems:items];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p items:%@>", self.class, (void *)self, self.items];
}

#endif
@end
