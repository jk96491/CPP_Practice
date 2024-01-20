#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    float x;
    float y;
    float z;

public:
    Vector(float _x, float _y, float _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }

    friend Vector operator+(Vector& lVlaue, Vector& rVlaue)
    {
        Vector new_vector(lVlaue.x + rVlaue.x, lVlaue.y + rVlaue.y, lVlaue.z + rVlaue.z);
        return new_vector;
    }

    friend Vector operator-(Vector& lVlaue, Vector& rVlaue)
    {
        Vector new_vector(lVlaue.x - rVlaue.x, lVlaue.y - rVlaue.y, lVlaue.z - rVlaue.z);
        return new_vector;
    }

    friend Vector operator*(float scalar, Vector& vec)
    {
        return Vector(vec.x * scalar, vec.y * scalar, vec.z * scalar);
    }

    friend Vector operator*(Vector& vec, float scalar)
    {
        return Vector(vec.x * scalar, vec.y * scalar, vec.z * scalar);
    }

    float distance()
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vector normalize()
    {
        float dist = distance();

        if (dist != 0)
            return Vector(x / dist, y / dist, z / dist);
        else
            return Vector(0, 0, 0);
    }

    friend void print_vector(Vector* vec);
};

void print_vector(Vector* vec)
{
    cout << "(" << vec->x << ", " << vec->y << ", " << vec->z << ")" << endl;
}
