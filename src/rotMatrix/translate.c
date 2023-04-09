#include "rotMatrix.h"

Vector2i translate2i(Vector2i vector, int x, int y)
{
    Vector2i translated_vector;

    translated_vector.x = vector.x + x;
    translated_vector.y = vector.y + y;

    return translated_vector;
}

Vector2f translate2f(Vector2f vector, float x, float y)
{
    Vector2f translated_vector;

    translated_vector.x = vector.x + x;
    translated_vector.y = vector.y + y;

    return translated_vector;
}

Vector3i translate3i(Vector3i vector, int x, int y, int z)
{
    Vector3i translated_vector;

    translated_vector.x = vector.x + x;
    translated_vector.y = vector.y + y;
    translated_vector.z = vector.z + z;

    return translated_vector;
}

Vector3f translate3f(Vector3f vector, float x, float y, float z)
{
    Vector3f translated_vector;

    translated_vector.x = vector.x + x;
    translated_vector.y = vector.y + y;
    translated_vector.z = vector.z + z;

    return translated_vector;
}