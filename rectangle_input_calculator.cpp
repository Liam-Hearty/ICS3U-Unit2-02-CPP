// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the Area and Perimeter of a determined rectangle


#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "enter the length of the rectangle (mm):" << std::endl;
    std::cin >> length;
    std::cout << "enter the width of the rectangle (mm):" << std::endl;
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm^2" << std::endl;
    std::cout << "Perimeter is " << perimeter << "mm" << std::endl;
}
