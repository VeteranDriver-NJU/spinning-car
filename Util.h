//
// Created by aquafits on 18-10-18.
//

#ifndef DUMB_CAR_UTIL_H
#define DUMB_CAR_UTIL_H

#include <iostream>

#include <opencv2/opencv.hpp>
#include "Properties.h"

using namespace std;
using namespace cv;

Mat grayscale(Mat &img){
    Mat gray;
    cvtColor(img, gray, CV_RGB2GRAY);
    return gray;
}

//Mat gaussian_blur(Mat &img, int kernel_size){
//    Mat gaussion;
//    //TODO
//}

//Mat x_thresh(Mat &img, int sobel_kernel = 3, int thresh_x = 0, int thresh_y = 255){
//    Mat gray = grayscale(img);
//    Mat grad;
//    //TODO
//}

#endif //DUMB_CAR_UTIL_H
