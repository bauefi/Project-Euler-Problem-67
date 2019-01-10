#include <iostream>
#include "triangle.h"
#include <fstream>

using namespace std;

void readInTriangle(int empty_array[][DIMENSIONS], const char* filename){
  setTriangleZero(empty_array, DIMENSIONS);

  //1. Open ifstream to the file with the triangle
  ifstream in_stream;
  in_stream.open(filename);

  int row = 0;
  int col = 0;
  int number = 0;
  char next_char;

  while(true){
    //Exit condition when all numbers have been read in
    if(in_stream.fail()){
      break;
    }

    //Check whether the end of a line is reached
    next_char = in_stream.peek();
    if(next_char == '\n'){
      ++row, /*swtitch to the next line of the array*/
      col = 0;
    }

    in_stream >> number;
    empty_array[row][col] = number;
    ++col;
  }
}

void setTriangleZero(int triangle[][DIMENSIONS],int dimensions){
  for(int row=0; row<dimensions; row++){
    for(int col=0; col<dimensions; col++){
      triangle[row][col] = 0;
    }
  }
}

void maxPath(int triangle[][DIMENSIONS], int dimensions){
  int col_limit = dimensions;
  for(int row = dimensions-2; row>=0; row--){
    for(int col = 0; col <= (col_limit-2); col++){
      triangle[row][col] = triangle[row][col] + max(triangle[row+1][col],triangle[row+1][col+1]);
    }
    dimensions--;
  }
}
