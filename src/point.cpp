
#include "include/point.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Point::Point() {
    rgba.r = 1.0;
    rgba.g = 1.0;
    rgba.b = 1.0;
    rgba.a = 1.0;
}

namespace sam {
    namespace line_drawer {
        std::ostream & operator<<(std::ostream & os, sam::line_drawer::Point const & point) {
            //std::cout << "\nPoint\nXYZ: " << point.xyz << "\nRGBA: " << point.rgba << "\nTexCoords: " << point.texCoords;
            std::cout << "point\nXYZ: " << point.xyz << "\nTexCoords: " << point.texCoords;
            return os;
        }
    }
}
