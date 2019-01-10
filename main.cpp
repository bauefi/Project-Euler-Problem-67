#include <iostream>
#include "triangle.h"

using namespace std;

int main(){
  int triangle[DIMENSIONS][DIMENSIONS];
  readInTriangle(triangle,"p067_triangle.txt");
  maxPath(triangle,DIMENSIONS);
  cout << "The maximum sum for any path is " << triangle[0][0] << endl;
  return 0;
}
