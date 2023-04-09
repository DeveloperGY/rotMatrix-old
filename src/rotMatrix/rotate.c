#include "rotMatrix.h"

Vector2i rotate2i(Vector2i vector, float radians)
{
    Vector2i rotated_vector;

    int og_x = vector.x;
    int og_y = vector.y;

    // pre compute
    float p_sin = sinf(radians);
    float p_cos = cosf(radians);

    rotated_vector.x = og_x * p_cos - og_y * p_sin;
    rotated_vector.y = og_x * p_sin + og_y * p_cos;

    return rotated_vector;
}

Vector2f rotate2f(Vector2f vector, float radians)
{
    Vector2f rotated_vector;

    float og_x = vector.x;
    float og_y = vector.y;

    rotated_vector.x = og_x * cosf(radians) - og_y * sinf(radians);
    rotated_vector.y = og_x * sinf(radians) + og_y * cosf(radians);

    return rotated_vector;
}

Vector3i rotate3i(Vector3i vector, float x_radians, float y_radians, float z_radians)
{
    Vector3i rotated_vector;

    int og_x = vector.x;
    int og_y = vector.y;
    int og_z = vector.z;

    // pre compute
    float x_sin = sinf(x_radians);
    float x_cos = cosf(x_radians);

    float y_sin = sinf(y_radians);
    float y_cos = cosf(y_radians);

    float z_sin = sinf(z_radians);
    float z_cos = cosf(z_radians);

    // rotate x

    rotated_vector.x = og_x; // set here to initialize value
    rotated_vector.y = og_y*x_cos - og_z*x_sin;
    rotated_vector.z = og_y*x_sin + og_z*x_cos;

    // set coordinates for next rotation

    og_y = rotated_vector.y;
    og_z = rotated_vector.z;

    // rotate y

    rotated_vector.x = og_x*y_cos + og_z*y_sin;
    rotated_vector.z = og_z*y_cos - og_x*y_sin;

    // set coordinates for next rotation

    og_x = rotated_vector.x;
    og_z = rotated_vector.z;

    // rotate z

    rotated_vector.x = og_x*z_cos - og_y*z_sin;
    rotated_vector.y = og_x*z_sin + og_y*z_cos;

    return rotated_vector;
}

Vector3f rotate3f(Vector3f vector, float x_radians, float y_radians, float z_radians)
{
    Vector3f rotated_vector;

    float og_x = vector.x;
    float og_y = vector.y;
    float og_z = vector.z;

    // pre compute
    float x_sin = sinf(x_radians);
    float x_cos = cosf(x_radians);

    float y_sin = sinf(y_radians);
    float y_cos = cosf(y_radians);

    float z_sin = sinf(z_radians);
    float z_cos = cosf(z_radians);

    // rotate x

    rotated_vector.x = og_x; // set here to initialize value
    rotated_vector.y = og_y*x_cos - og_z*x_sin;
    rotated_vector.z = og_y*x_sin + og_z*x_cos;

    // set coordinates for next rotation

    og_y = rotated_vector.y;
    og_z = rotated_vector.z;

    // rotate y

    rotated_vector.x = og_x*y_cos + og_z*y_sin;
    rotated_vector.z = og_z*y_cos - og_x*y_sin;

    // set coordinates for next rotation

    og_x = rotated_vector.x;
    og_z = rotated_vector.z;

    // rotate z

    rotated_vector.x = og_x*z_cos - og_y*z_sin;
    rotated_vector.y = og_x*z_sin + og_y*z_cos;

    return rotated_vector;
}