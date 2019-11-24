
#include "include/triangle.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Triangle::Triangle() {

}

cur::Triangle::Triangle(Point a, Point b, Point c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Triangle const & triangle) {
			std::cout << "\nA " << triangle.a << "\nB " << triangle.b << "\nC " << triangle.c;
			return os;
		}
	}
}
