#pragma once
#ifndef SAM_LINE_DRAWER_CALCULATE_HPP_INCLUDED
#define SAM_LINE_DRAWER_CALCULATE_HPP_INCLUDED

// from https://stackoverflow.com/questions/39664701/how-to-get-the-angle-pitch-yaw-between-two-3d-vectors-for-an-autoaim

#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>

namespace sam {
    namespace line_drawer {
        auto const pi = atan(1)*4;

        float Dot(std::vector<float> lhs, std::vector<float> rhs);
        float magnitude(std::vector<float> vec3);
        float Angle(std::vector<float> from, std::vector<float> to);
        //std::vector<float> normalise(std::vector<float> vect);

        void calculate() {
            std::vector<float> from{ 3, 1, -2 };
            std::vector<float> to{ 5, -3, -7 };

            float angle = Angle(from, to);
            std::cout<<"Angle xxxxx: "<<angle<<std::endl;
        }

        //Find Dot/ Scalar product 
        float Dot(std::vector<float> lhs, std::vector<float> rhs) {
            std::cout << "Dot product: " << static_cast<float>(std::inner_product(lhs.begin(), lhs.end(), rhs.begin(), 0)) << std::endl;
            return static_cast<float>(std::inner_product(lhs.begin(), lhs.end(), rhs.begin(), 0));
        }

        //Find the magnitude of the Vector
        float magnitude(std::vector<float> vec3) { //<! Vector magnitude
            std::cout << "Magnitude: " << sqrt((vec3[0] * vec3[0]) + (vec3[1] * vec3[1]) + (vec3[2] * vec3[2])) << std::endl;
            return sqrt((vec3[0] * vec3[0]) + (vec3[1] * vec3[1]) + (vec3[2] * vec3[2]));
        }

        //Normalize Vector. Not needed here
        std::vector<float> normalise(std::vector<float> vect)
        {
            std::vector<float> temp{ 0, 0, 0 };
            float length = magnitude(vect);

            temp[0] = vect[0]/length;
            temp[1] = vect[1]/length;
            temp[2] = vect[2]/length;
            return temp;
        }

        float Angle(std::vector<float> from, std::vector<float> to) {
            //Find the scalar/dot product of the provided 2 Vectors
            float dotProduct = Dot(from, to);
            //Find the product of both magnitudes of the vectors then divide dot from it
            dotProduct = dotProduct / (magnitude(from) * magnitude(to));
            //Get the arc cosin of the angle, you now have your angle in radians 
            std::cout << "arcAcos: " << acos(dotProduct) << std::endl;
            float arcAcos = acos(dotProduct);
            //Convert to degrees by Multiplying the arc cosin by 180/M_PI
            float angle = arcAcos * 180 / pi;
            return angle;
        }
    }
}
#endif // SAM_LINE_DRAWER_CALCULATE_HPP_INCLUDED

