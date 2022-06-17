#pragma once
#include <iostream>
#include <string>
class Entity{
public: 
virtual void setData(std::string data) = 0;
virtual void getData(std::string data) = 0;
};


