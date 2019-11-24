
#include "include/line.hpp"

//#include "include/calculate.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Line::Line(Point start, Point end, double lineThicknessHalf) {
	this->start             = start;
	this->end               = end;
	this->lineThicknessHalf = lineThicknessHalf;
    
	triangleA               = topx::Triangle(start, start, end);
    triangleB               = topx::Triangle(end, end, start);

    /**
    // from https://stackoverflow.com/questions/14066933/direct-way-of-computing-clockwise-angle-between-2-vectors
    dot = x1*x2 + y1*y2 + z1*z2    #between[x1, y1, z1] and [x2, y2, z2]
        lenSq1 = x1*x1 + y1*y1 + z1*z1
        lenSq2 = x2*x2 + y2*y2 + z2*z2
        angle = acos(dot/sqrt(lenSq1 * lenSq2))
    
    auto dot = triangleA.a.xyz.x * triangleA.c.xyz.x
        + triangleA.a.xyz.y * triangleA.c.xyz.y
        + triangleA.a.xyz.z * triangleA.c.xyz.z;

    auto lenSq1 = triangleA.a.xyz.x * triangleA.a.xyz.x
        + triangleA.a.xyz.y * triangleA.a.xyz.y
        + triangleA.a.xyz.z * triangleA.a.xyz.z;

    auto lenSq2 = triangleA.c.xyz.x * triangleA.c.xyz.x
        + triangleA.c.xyz.y * triangleA.c.xyz.y
        + triangleA.c.xyz.z * triangleA.c.xyz.z;

    auto angle = acos(dot/sqrt(lenSq1 * lenSq2));

    // distance
    auto distance = sqrt(pow(triangleA.c.xyz.x - triangleA.a.xyz.x, 2) +
                         pow(triangleA.c.xyz.y - triangleA.a.xyz.y, 2) +
                         pow(triangleA.c.xyz.z - triangleA.a.xyz.z, 2));
                         /**/
    //std::cout << "Distance between start and end: " << distance << "\n\n";

    //calculate();

    auto xyz = Xyz();
    //(x, y, z)=(sin(an)cos(an), sin(an)cos(an), cos(an))

    {   // x
        triangleA.a.xyz.x -= lineThicknessHalf;  // start point top
        triangleA.b.xyz.x += lineThicknessHalf;  // start point bottom
        triangleA.c.xyz.x -= lineThicknessHalf;  // start point (end point)

        triangleB.a.xyz.x -= lineThicknessHalf;  // end point top
        triangleB.b.xyz.x += lineThicknessHalf;  // end point bottom
        triangleB.c.xyz.x += lineThicknessHalf;  // end point (start point)
    }

    {   // y
        triangleA.a.xyz.y -= lineThicknessHalf;  // start point top
        triangleA.b.xyz.y += lineThicknessHalf;  // start point bottom
        triangleA.c.xyz.y -= lineThicknessHalf;  // start point (end point)

        triangleB.a.xyz.y -= lineThicknessHalf;  // end point top
        triangleB.b.xyz.y += lineThicknessHalf;  // end point bottom
        triangleB.c.xyz.y += lineThicknessHalf;  // end point (start point)
    }

    {   // z
        triangleA.a.xyz.z -= lineThicknessHalf;  // start point top
        triangleA.b.xyz.z += lineThicknessHalf;  // start point bottom
        triangleA.c.xyz.z -= lineThicknessHalf;  // start pnoint (end point)

        triangleB.a.xyz.z -= lineThicknessHalf;  // end point top
        triangleB.b.xyz.z += lineThicknessHalf;  // end point bottom
        triangleB.c.xyz.z += lineThicknessHalf;  // end point (start point)
    }
    
    {   // tex coords A
        triangleA.a.texCoords.x = 0.0;
        triangleA.a.texCoords.y = 0.0;

        triangleA.b.texCoords.x = 0.0;
        triangleA.b.texCoords.y = 1.0;

        triangleA.c.texCoords.x = 1.0;
        triangleA.c.texCoords.y = 0.0;
    }

    {   // tex coords B
        triangleB.a.texCoords.x = 0.0;
        triangleB.a.texCoords.y = 1.0;

        triangleB.b.texCoords.x = 1.0;
        triangleB.b.texCoords.y = 1.0;

        triangleB.c.texCoords.x = 1.0;
        triangleB.c.texCoords.y = 0.0;
    }
}

namespace sam {
	namespace line_drawer {
		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line) {
			std::cout << "\nLine\nTriangle A:\n{" << line.triangleA << "\n}\n\nTriangle B:\n{" << line.triangleB << "\n}";
			return os;
		}
	}
}
