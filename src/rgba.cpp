
#include "include/rgba.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Rgba::Rgba() {

}

cur::Rgba::Rgba(double r, double g, double b, double a) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Rgba const & rgba) {
			std::cout << rgba.r << ", " << rgba.r << ", " << rgba.b << ", " << rgba.a;
			return os;
		}
	}
}
