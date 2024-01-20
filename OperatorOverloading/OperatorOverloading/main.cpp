#include "Vector.h"

void print_vector(Vector* vec);

int main() {
    Vector v1(1.f, 2.f, 3.f);
    Vector v2(4.f, 5.f, 6.f);

    Vector sum = v1 + v2;
    cout << "Sum 일반 함수" << endl;
    print_vector(&sum);

    Vector diff = v1 - v2;
    cout << "Difference" << endl;
    print_vector(&diff);

    Vector scaled = 2.f * v1;
    scaled = scaled * 3.f;
    cout << "Scaled"<< endl;
    print_vector(&scaled);

    float distance = (v1 - v2).distance();
    cout << "distance : " << distance << endl;

    Vector normalize = (v1 - v2).normalize();
    cout << "normalize : " << endl;
    print_vector(&normalize);

    return 0;
}

