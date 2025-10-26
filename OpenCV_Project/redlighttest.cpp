// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>
// #include <opencv2/imgproc.hpp>
// #include <iostream>
// using namespace cv;
// using namespace std;
//
// int main() {
//     string path="redlighttest.png";
//     Mat  img=imread(path);
//     Mat  imgHSV,imgMask;
//     if(img.empty()){
//
//             cout<<"could not load image"<<endl;
//         }
//         else{
//             cout<<"image loaded successfully"<<endl;
//         }
//     cvtColor(img,imgHSV,COLOR_BGR2HSV);
//     int hmin=15,hmax=150,smin=15,smax=150,vmin=15,vmax=150;
//     namedWindow("Trackbars",WINDOW_NORMAL);
//     resizeWindow("Trackbars",640,200);
//     createTrackbar("Hue Min","Trackbars",&hmin,179);
//     createTrackbar("Hue Max","Trackbars",&hmax,179);
//     createTrackbar("Sat Min","Trackbars",&smin,255);
//     createTrackbar("Sat Max","Trackbars",&smax,255);
//     createTrackbar("Val Min","Trackbars",&vmin,255);
//     createTrackbar("Val Max","Trackbars",&vmax,255);
//     while (true) {
//         Scalar lower=Scalar(hmin,smin,vmin);
//         Scalar upper=Scalar(hmax,smax,vmax);
//         inRange(imgHSV,lower,upper,imgMask);
//         imshow("image Mask",imgMask);
//         waitKey(1);
//     };
//
//
//   return 0;
// }