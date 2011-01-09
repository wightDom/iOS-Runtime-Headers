/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSURLConnectionDelegateProxy : NSObject 
{
    id delegate;
    NSUInteger flags;
}


- (void)setDelegate:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 willStopBufferingData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end