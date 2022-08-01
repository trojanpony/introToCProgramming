#include <stdio.h>

// write a definition of a C function named area as is described below …

//     Function area must have the prototype shown in file Exercise_01.h.
//     Function area accepts, as input, an object of type struct triangle.
//     Function area returns the area of the given triangle.

// Structure representing a point in Cartesian Coordinate System
struct point
{
  double x ;
  double y ;
} ;

// Structure representing a triangle by way of its three vertices
struct triangle
{
  struct point vertexA ;
  struct point vertexB ;
  struct point vertexC ;
} ;

// Function returning the area of a triangle
double area ( struct triangle t)
{
double triangleArea = ( ( t.vertexA.x * ( t.vertexB.y - t.vertexC.y ) ) +
                        ( t.vertexB.x * ( t.vertexC.y - t.vertexA.y ) ) +
                        ( t.vertexC.x * ( t.vertexA.y - t.vertexB.y ) ) ) / 2 ;


return fabs(triangleArea);
}