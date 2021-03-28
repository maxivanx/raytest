#pragma once
#ifndef COLOR_H
#define COLOR_H
#include "vec3.h"
#include <iostream>
#include <fstream>
using namespace std;
ofstream outfile;


void write_color(ostream& outfile, color pixel_color) {
	
	// Write the translated [0,255] value of each color component.
	outfile << static_cast<int>(255.999 * pixel_color.x()) << ' '
		<< static_cast<int>(255.999 * pixel_color.y()) << ' '
		<< static_cast<int>(255.999 * pixel_color.z()) << '\n';
}
#endif
