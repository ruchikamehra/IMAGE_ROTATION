# IMAGE_ROTATION
PROJECT : IMAGE ROTATION IN C++
OpenCV is an open-source C++ library for image processing and computer vision. It has several hundreds of inbuilt functions which implement image processing and computer vision algorithms which make developing advanced computer vision applications easy and efficient.
OpenCV inbuilt function used in this program are as follows:
•	imread function : This function loads an image from the specified file and return is as a Mat object. If the function cannot read the file, it will return an empty Mat object.
Syntax : Mat imread(const String& filename, int flags )
 In Filename, you have to provide the relative or absolute path of the image file.
 Flags: There are several possible values for the flag argument. In the above program, I did not pass any value to this argument such that default IMREAD_COLOR argument will be used.


•	ROTATION : 
To rotate an image, OpenCV has some more convenient ways to build it like the method of getRotationMatrix2D and wrapAffine ,where we can set the desired location of the image, the rotation in angles, and the scaling factor in a single method.
wrapAffine function to implement simple remapping routines.
To rotate an image, we need to know few things :
1.	The centre with respect to which the image will rotate.
2.	The angle to be rotated in OpenCV a positive angle in counter-clockwise
3.	A scale factor =1.0
Syntax : getRotationMatrix2D(imagecentre, angle, scaling factor)


•	WAIT KEY: 
waitKey(0) function waits for a key press forever. When any key is pressed, this function returns the ASCII value of the key and your program will continue.
Syntax : waitkey(0)

•	DISPLAYING IMAGE :
Imshow function : This function shows the image in a window specified by winname. If the window is created with WINDOW_AUTOSIZE flag, image will be displayed in its original size. 
Syntax : imshow(windowName, image);
WindowName represents the name of the window which is created by the namedWindow() function.
Image which holds the path of the image.
This function should be followed by cv::waitKey function which displays the image for specified milliseconds. Otherwise, it won’t display the image.
imshow(“Original_image”,image )
imshow(“rotated_image", image_rotated)

•	DESTROY WINDOW :
This function closes the opened window identified with the name, windowName and de-allocate any associated memory usage. This function is not essential for the above program because when the program exits, operating system usually close all the opened windows and de-allocate any associated memory usage.
Syntax: destroyWindow(windowName);
             
