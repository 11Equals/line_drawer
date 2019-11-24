
#include "include/xyz.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Xyz::Xyz() {
	
}

cur::Xyz::Xyz(double x) {
	this->x = x;
}

cur::Xyz::Xyz(double x, double y) {
	this->x = x;
	this->y = y;
}

cur::Xyz::Xyz(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Xyz const & xyz) {
			std::cout << xyz.x << ", " << xyz.y << ", " << xyz.z;
			return os;
		}
	}
}
