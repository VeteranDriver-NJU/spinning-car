#include <iostream>
#include "Camera.h"

int main() {
    Camera camera;

//    Camera camera = Camera("ip_camera", "http://admin:123@192.168.0.103:8081");
    Mat original_img;
    Mat grayscale_img;

    while (true){
        camera.update();
        original_img = camera.get_img();
        imshow("ip camera: original", original_img);
        grayscale_img = camera.get_garyscale_img();
        imshow("ip camera: grayscale", grayscale_img);

        int key = waitKey(10);
        if (key == 27) {
            cout << "ecs break" << endl;
            break;
        }
    }
    return 0;
}