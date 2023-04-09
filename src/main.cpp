#include "rotMatrix/rotMatrix.h"

#include <iostream>

int main()
{
    Vector3f v = {1.2f, 3.1f, -0.6f};
    v = rotate3f(v, dToR(30.0f), dToR(-35.0f), dToR(60.5f));
    v = translate3f(v, 5.0f, 2.3f, -0.9f);
    std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << std::endl;
    return 0;
}