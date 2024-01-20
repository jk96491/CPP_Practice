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

    Vector operator+(Vector& other)
    {
        Vector new_vector(x + other.x, y + other.y, z + other.z);
        return new_vector;
    }

    Vector operator-(Vector& other)
    {
        Vector new_vector(x - other.x, y - other.y, z - other.z);
        return new_vector;
    }

    Vector operator*(float scalar)
    {
        Vector new_vector(x * scalar, y * scalar, z * scalar);
        return new_vector;
    }

    float distance()
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vector normalize()
    {
        float dist = distance();
        Vector new_vector(x / dist, y / dist, z / dist);

        return new_vector;
    }

    friend void print_vector(Vector* vec);
};

void print_vector(Vector* vec)
{
    cout << "(" << vec->x << ", " << vec->y << ", " << vec->z << ")" << endl;
}
