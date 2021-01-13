#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	string path;
	cout << "enter the path of the image";
	getline(cin, path);
	Mat image = imread(path);
	if (image.empty())
	{
		cout << "cannot read the path";
		return 0;

	}
	int angle;
	cout << "enter angle";
	cin >> angle;
	namedWindow("window");
	namedWindow("rotated_image");
	Point2f p(image.cols / 2.0, image.rows / 2.0);
	imshow("window", image);
	Mat matrotation = getRotationMatrix2D(p, angle, 1.0);
	Rect2f bbox = RotatedRect(Point2f(), image.size(), angle).boundingRect2f();
	matrotation.at<double>(0, 2) += bbox.width / 2.0 - image.cols / 2.0;
	matrotation.at<double>(1, 2) += bbox.height / 2.0 - image.rows / 2.0;
	Mat image_rotated;
	warpAffine(image, image_rotated, matrotation, bbox.size());
	imshow("rotated_image", image_rotated);
	waitKey(0);
	destroyWindow("window");
	destroyWindow("rotated_image");
}