//
// CQMFloatingController.h
// CQMFloatingController
//
// Created by cocopon on 2011/05/19.
// Copyright (c) 2012 cocopon <cocopon@me.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

@interface CQMFloatingController : UIViewController <UIAppearanceContainer>

- (id)initWithContentViewController:(UIViewController *)viewController;

@property (nonatomic, strong) UIViewController *contentViewController;
- (void)setContentViewController:(UIViewController *)viewController animated:(BOOL)animated;

@property (nonatomic) CGSize frameSize;
- (void)setFrameSize:(CGSize)frameSize animated:(BOOL)animated;

@property (nonatomic, strong) UIColor *frameColor;
- (void)setFrameColor:(UIColor*)frameColor animated:(BOOL)animated;

@property (nonatomic, readonly, getter = isVisible) BOOL visible;

- (IBAction)present;
- (IBAction)dismiss;

- (void)presentWithCompletion:(void(^)(void))block;
- (void)dismissWithCompletion:(void(^)(void))block;

@end
