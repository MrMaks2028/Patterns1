#pragma once
#include <iostream>
#include <string>
class ImageEntity{
	void setData(std::string data);
	void getData(std::string data);
	void setPixel(char color);
	void drawRect(int x1, int y1,int x2, int y2);
	void drawCircle(int x, int y, int rad);

private:
	int* canvas = new int[100];
};

