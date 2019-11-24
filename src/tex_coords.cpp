
#include "include/tex_coords.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::TexCoords::TexCoords() {

}

cur::TexCoords::TexCoords(double x, double y) {
	this->x = x;
	this->y = y;
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::TexCoords const & texCoords) {
			std::cout << texCoords.x << ", " << texCoords.y;
			return os;
		}
	}
}
