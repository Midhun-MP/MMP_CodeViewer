MMP_CodeViewer
==============

This library can be used for displaying code blocks in your iOS app in a well formatted manner

##Steps:
---------

1. Add the `libMMPCodeViewer.a` and Include folder to your project
2. Import the MMPCodeViewer.h , using `#import "MMPCodeViewer.h"`


###Creating a code container:

~~~
MMPCodeViewer *codeContainer = [[MMPCodeViewer alloc] initWithFrame:CGRectMake(0, 0, 300, 300)];

[self.view addSubview:codeContainer];
~~~


###Choosing theme

`[views chooseTheme:MMPCodeSingleColor];`

#####Possible Values

1. `MMPCodeSingleColor`	: Shows the code in a simple background
2. `MMPCodeDoubleColor`	: Shows the code in alternative background


###Adding data
For setting data there is two methods available
1. `- (void)readFileData:(NSString *)filePath;`		//Reads the data from file, pass the path as argument (Reads from bundle as well as document directory
2. `- (void)displayData:(NSString *)dataAsString;`      //This method receives the code string as it's argument


For Further Details Contact:

	Midhun M P
	Email : midhunmp7@gmail.com