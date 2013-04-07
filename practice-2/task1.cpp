#include <iostream>

#include <cg/operations/intersect.h>

int main(){
		double x1, x2, y1, y2, x4, x3, y3, y4;
		std::cin >> x1 >> y1;
		std::cin >> x2 >> y2;
		cg::point_2 a(x1, y1);
		cg::point_2 b(x2, y2);
		std::cin >> x3 >> y3;
		std::cin >> x4 >> y4;
		cg::point_2 x(x3, y3);
		cg::point_2 y(x4, y4);

		std::cout << cg::is_intersecting_lines(cg::segment_2t<double>(a, b), cg::segment_2t<double>(x, y));
		return 0;
}