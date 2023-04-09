#pragma once

#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

/**
 * Vectors
*/

/**
 * @brief A 2D integer vector
*/
typedef struct Vector2i_s
{
    int x;
    int y;
} Vector2i;

/**
 * @brief A 3D integer vector
*/
typedef struct Vector3i_s
{
    int x;
    int y;
    int z;
} Vector3i;

/**
 * @brief A 2D floating point vector
*/
typedef struct Vector2f_s
{
    float x;
    float y;
} Vector2f;

/**
 * @brief A 3D floating point vector
*/
typedef struct Vector3f_s
{
    float x;
    float y;
    float z;
} Vector3f;


/**
 * Rotations
*/
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Rotates a 2D integer vector counter clockwise
 * 
 * @param vector Vector to be rotated
 * @param radians Number of radians to rotate by
 * 
 * @return Rotated version of the 2D integer vector
*/
Vector2i rotate2i(Vector2i vector, float radians);

/**
 * @brief Rotates a 2D floating point vector counter clockwise
 * 
 * @param vector Vector to be rotated
 * @param radians Number of radians to rotate by
 * 
 * @return Rotated version of the 2D floating point vector
*/
Vector2f rotate2f(Vector2f vector, float radians);

/**
 * @brief Rotates a 3D integer vector counter clockwise, first x, then y, then z
 * 
 * @param vector Vector to be rotated
 * @param x_radians Number of radians to rotate by on the x axis
 * @param y_radians Number of radians to rotate by on the y axis
 * @param z_radians Number of radians to rotate by on the z axis
 * 
 * @return Rotated version of the 3D integer vector
*/
Vector3i rotate3i(Vector3i vector, float x_radians, float y_radians, float z_radians);

/**
 * @brief Rotates a 3D floating point vector counter clockwise, first x, then y, then z
 * 
 * @param vector Vector to be rotated
 * @param x_radians Number of radians to rotate by on the x axis
 * @param y_radians Number of radians to rotate by on the y axis
 * @param z_radians Number of radians to rotate by on the z axis
 * 
 * @return Rotated version of the 3D floating point vector
*/
Vector3f rotate3f(Vector3f vector, float x_radians, float y_radians, float z_radians);

#ifdef __cplusplus
}
#endif


/**
 * Translations
*/
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Translates a 2D integer vector
 * 
 * @param x Value to add to the x coordinate
 * @param y Value to add to the y coordinate
*/
Vector2i translate2i(Vector2i vector, int x, int y);

/**
 * @brief Translates a 2D floating point vector
 * 
 * @param x Value to add to the x coordinate
 * @param y Value to add to the y coordinate
*/
Vector2f translate2f(Vector2f vector, float x, float y);

/**
 * @brief Translates a 3D integer vector
 * 
 * @param x Value to add to the x coordinate
 * @param y Value to add to the y coordinate
 * @param z Value to add to the z coordiante
*/
Vector3i translate3i(Vector3i vector, int x, int y, int z);

/**
 * @brief Translates a 3D floating point vector
 * 
 * @param x Value to add to the x coordinate
 * @param y Value to add to the y coordinate
 * @param z Value to add to the z coordinate
*/
Vector3f translate3f(Vector3f vector, float x, float y, float z);

#ifdef __cplusplus
}
#endif


/**
 * Helper Functions
*/
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Converts degrees to radians
*/
float dToR(float degrees);

#ifdef __cplusplus
}
#endif