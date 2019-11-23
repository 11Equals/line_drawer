
#include "line.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Line::Line() {

}

cur::Line::Line(Xyz start, Xyz end, double lineThicknessHalf) {
	this->start = start;
	this->end = end;
	this->lineThicknessHalf = lineThicknessHalf;

	triangleA = topx::Triangle(start, start, end);
    triangleB = topx::Triangle(end, end, start);


    {   // x
        triangleA.a.x -= lineThicknessHalf;  // start point top
        triangleA.b.x += lineThicknessHalf;  // start point bottom
        triangleA.c.x -= lineThicknessHalf;  // start point (end point)

        triangleB.a.x -= lineThicknessHalf;  // end point top
        triangleB.b.x += lineThicknessHalf;  // end point bottom
        triangleB.c.x += lineThicknessHalf;  // end point (start point)
    }

    {   // z
        triangleA.a.z -= lineThicknessHalf;  // start point top
        triangleA.b.z += lineThicknessHalf;  // start point bottom
        triangleA.c.z -= lineThicknessHalf;  // start pnoint (end point)

        triangleB.a.z -= lineThicknessHalf;  // end point top
        triangleB.b.z += lineThicknessHalf;  // end point bottom
        triangleB.c.z += lineThicknessHalf;  // end point (start point)
    }
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line) {
			std::cout << "\nLine\nTriangle A: " << line.triangleA << "\nTriangl B: " << line.triangleB;
			return os;
		}
	}
}
