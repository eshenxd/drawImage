#ifndef _DRAW_IMAGE_H_
#define _DRAW_IMAGE_H_

#include "header.h"

void draw_image(CvRect area, IplImage* img);//������

void draw_image(CvRect area, std::string showMsg, IplImage* img, CvScalar color=CV_RGB(0, 0, 255));//���������Ϣ&������

void draw_image(int* pos,IplImage* img);//��֪�����Խǵ㻭����

void draw_image(int* pos,std::string showMsg,IplImage* img,CvScalar color);//��֪�����Խǵ㻭����&���������Ϣ

#endif