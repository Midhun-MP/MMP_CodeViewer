/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
                                      * MMPCodeViewer.h *
 
                                     *  MMPCodeViewer *
 
                              * Created by Midhun on 5/20/13 *
 
                      * Copyright (c) 2013 Midhun. All rights reserved.*
 
                    * This class displays the code in a formatted manner *
 
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
#import <UIKit/UIKit.h>

#pragma mark Theme Enum

typedef enum MMPCodeViewerTheme
{
    MMPCodeSingleColor,                         //Default, single color
    MMPCodeDoubleColor                          //Alternative color for lines
}MMPCodeViewerTheme;

@interface MMPCodeViewer : UIView
{
    
}
#pragma mark Public Functions

- (void)readFileData:(NSString *)filePath;      //Reads the data from file, pass the path as argument (Reads from bundle as well as document directory
- (void)displayData:(NSString *)dataAsString;   //This method receives the code string as it's argument
- (void)chooseTheme:(MMPCodeViewerTheme)theme;  //You can choose themes by using this method
- (void)disableScroll;                          //This method is used to disable the scrolling of code block
@end