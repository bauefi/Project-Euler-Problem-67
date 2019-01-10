#ifndef TRIANGLE_H
#define TRIANGLE_H

#define DIMENSIONS 100

/*Reads in the triangle from a file into a int double array */
void readInTriangle(int empty_array[][DIMENSIONS], const char* filename);

/*Sets all fields of a triangle to 0 */
void setTriangleZero(int triangle[][DIMENSIONS],int dimensions);

/*prints the maximum sum of any path to triangle[0][0]*/
void maxPath(int triangle[][DIMENSIONS], int dimensions);
#endif
