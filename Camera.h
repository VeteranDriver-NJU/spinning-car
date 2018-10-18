//
// Created by aquafits on 18-10-18.
//

#ifndef DUMB_CAR_CAMERA_H
#define DUMB_CAR_CAMERA_H

#include <string>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <thread>

#include "Properties.h"
#include "Util.h"

using namespace std;
using namespace cv;

class Camera {
private:
    string mode;
    string ip_camera_address = "";
    VideoCapture capture = VideoCapture(0);
    Mat img = Mat();

public:
    Camera(const string &mode, const string &ip_camera_address) : mode(mode), ip_camera_address(ip_camera_address) {
        if (mode != "ip_camera") {
            cout << "init with mode \"ip_camera\" to link to ip camera" << endl;
            return;
        }

        capture.open(ip_camera_address);
    }

    Camera() {}


    ~Camera(){
        capture.release();
    }

    void update(){
        capture >> img;
    }


    Mat get_img(){
        return img;
    }

    Mat get_garyscale_img(){
        return grayscale(img);
    }

//    Mat get_gaussian_blur_img(){}
};

#endif //DUMB_CAR_CAMERA_H