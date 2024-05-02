#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include "temp.h"


int main()
{

	/*cv::Mat Oimg, Pimg;

	Oimg = cv::imread("_O_img_NG_MDL-1_20240409(12)_240409113514.bmp");
	Pimg = cv::imread("_P_img_NG_MDL-1_20240409(12)_240409113514.bmp");

	std::string text = "";
	cv::Point origin(100, 500);
	cv::Point origin2(30, 300);
	int fontFace = cv::FONT_HERSHEY_SIMPLEX;
	double fontScale = 0.8;
	double fontScale2 = 12;
	cv::Scalar color(0, 0, 255);
	int thickness = 2;
	int thickness2 = 10;

	std::vector<cv::Mat> os(8), ps(8);
	std::string sign = "NG";
	char temp = 'A';
	bool indicator = false;

	for (int i = 0; i < 8; i++) {
		char temp2 = temp + i;
		if (i < 2) {}
		else if (i < 4) {
			sign = "OK";
		}
		else {
			indicator = true;
		}
		for (int j = 0; j < 8; j++) {
			if (indicator) {
				if (j % 2 == 0) {
					sign = "NG";
				}
				else {
					sign = "OK";
				}
			}
			text = "Test" + std::string(1, temp2) + "-" + std::to_string(j + 1);
			os[j] = Oimg.clone();
			cv::putText(os[j], text, origin, fontFace, fontScale, color, thickness);
			cv::putText(os[j], "O", origin2, fontFace, fontScale2, color, thickness2);
			std::string filename = "./bin/img/Test" + std::string(1, temp2)
				+ "/Test" + std::string(1, temp2) + "_O_img_" + sign + "_MDL -" + std::to_string(j + 1)
				+ "_20240409(12)_240409113514.bmp";
			cv::imwrite(filename, os[j]);

			text = "Test" + std::string(1, temp2) + "-" + std::to_string(j + 1);
			ps[j] = Pimg.clone();
			cv::putText(ps[j], text, origin, fontFace, fontScale, color, thickness);
			cv::putText(ps[j], "P", origin2, fontFace, fontScale2, color, thickness2);
			std::string filename2 = "./bin/img/Test" + std::string(1, temp2)
				+ "/Test" + std::string(1, temp2) + "_P_img_" + sign + "_MDL -" + std::to_string(j + 1)
				+ "_20240409(12)_240409113514.bmp";
			cv::imwrite(filename2, ps[j]);

		}
	}*/

	temp temp1;

	temp1.temp2();
	//cv::waitKey();
	//cv::destroyAllWindows();


//cv::waitKey();
//cv::destroyAllWindows();




	return 1;
}