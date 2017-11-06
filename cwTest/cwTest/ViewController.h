//
//  ViewController.h
//  cwTest
//
//  Created by 特购部落 on 2017/11/6.
//  Copyright © 2017年 张科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioUnit/AudioUnit.h>
#import <AudioToolbox/AudioToolbox.h>
@interface ViewController : UIViewController
{
     UILabel *frequencyLabel;
    UIButton *playButton;
    UISlider *frequencySlider;
    AudioComponentInstance toneUnit;
    
@public
    double frequency;
    double sampleRate;
    double theta;
}

@property (nonatomic, retain) IBOutlet UISlider *frequencySlider;
@property (nonatomic, retain) IBOutlet UIButton *playButton;
@property (nonatomic, retain) IBOutlet UILabel *frequencyLabel;

- (IBAction)sliderChanged:(UISlider *)frequencySlider;
- (IBAction)togglePlay:(UIButton *)selectedButton;
- (void)stop;

@end

