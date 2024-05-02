#include "temp.h"

void temp::temp2()
{

	cv::Mat Oimg = cv::imread("ori.png");

	//std::string filepath = "_label_NG_MDL-1_20240409(12)_240409113514.csv";

	std::string text = "";
	cv::Point origin(-200, 200);
	cv::Point origin2(30, 300);
	int fontFace = cv::FONT_HERSHEY_SIMPLEX;
	double fontScale = 1;
	double fontScale2 = 12;
	cv::Scalar color(0, 0, 255);
	int thickness = 4;
	int thickness2 = 10;

	std::vector<cv::Mat> Apr29(10), Apr30(20), May1(30), May2(15);
	std::vector<std::vector<cv::Mat>> all;
	all.push_back(Apr29);
	all.push_back(Apr30);
	all.push_back(May1);
	all.push_back(May2);

	std::tm timeinfo = {};
	timeinfo.tm_year = 2024 - 1900; // 연도는 1900년부터 시작하므로 2024년 - 1900
	timeinfo.tm_mon = 4 - 1; // 월은 0부터 시작하므로 5월 - 1
	timeinfo.tm_mday = 29; // 일
	timeinfo.tm_hour = 0; // 시
	timeinfo.tm_min = 0; // 분
	timeinfo.tm_sec = 45; // 초

	std::time_t time_t = std::mktime(&timeinfo);

	// std::time_t를 std::chrono::system_clock::time_point으로 변환
	auto timePoint = std::chrono::system_clock::from_time_t(time_t);

	auto twentyMinutes = std::chrono::minutes(20);

	for (std::vector<cv::Mat> temps : all) {

		for (cv::Mat temps2 : temps)
		{

			//text = "Test" + std::string(1, temp2) + "-" + std::to_string(j + 1);
			std::string a = std::to_string(std::rand() % 10);
			std::string b = std::to_string(std::rand() % 10);
			std::string c = std::to_string(std::rand() % 10);
			int d = std::rand() % 2;

			std::stringstream ss;
			ss << std::put_time(&timeinfo, "%Y%m%d-%H%M%S");
			std::string formattedDate = ss.str();

			text = "192.168.1.1_" + formattedDate + "-" + a + b + c;
			if (d == 0) {
				text += "_P.png";
			}
			else {
				text += "_F_etc.png";
			}
			temps2 = Oimg.clone();
			cv::putText(temps2, text, origin, fontFace, fontScale, color, thickness);
			cv::imwrite(text, temps2);

			std::time_t time = mktime(&timeinfo) + 20 * 60;
			localtime_s(&timeinfo, &time);

		}

		std::time_t time = mktime(&timeinfo) + 21 * 60 * 60;
		localtime_s(&timeinfo, &time);

	}
}
