#include "color.h"
#include "vec3.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	const int image_width = 256;
	const int image_height = 256;

	ofstream outfile;
	ifstream inputfile;
	outfile.open("test.ppm");


	outfile << "P3\n" << image_width << ' ' << image_height << "\n255\n";
	for (int j = image_height - 1; j >= 0; --j) {
		cerr << "\rScanlines remaining: " << j << ' ' << flush;
		for (int i = 0; i < image_width; ++i) {
			color pixel_color(double(i) / (image_width - 1),double(j) / (image_height - 1), 0.25);
			write_color(outfile, pixel_color);
		}
	}
	outfile.close();

	cerr << "\nDone.\n";
	system("echo hi.a");
	system("C:/cygwin64/bin/bash -c \"magick test.ppm test.png\"");

	outfile.close();
}
