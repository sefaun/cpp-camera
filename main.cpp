#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Kamera açılamadı!" << std::endl;
        return -1;
    }

    cv::Mat frame;

    while (true) {
        cap >> frame;

        if (frame.empty()) break;

        unsigned char* buffer = frame.data;
        int size = frame.total() * frame.elemSize();

        std::cout << "Buffer size: " << size << " byte" << std::endl;

        cv::imshow("Kamera", frame);
        if (cv::waitKey(1) == 27) break; // ESC
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
