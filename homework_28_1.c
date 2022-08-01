// The program creates a number of triangles and stores them in an array. Each triangle has an owner and three vertices. A triangle’s owner is a string up to 12
// characters long. Each vertex has x‑ & y‑coordinates.
// The function initializeTriangleArray (provided for you) initializes the array of triangles. The variable numberOfTriangles indicates how many triangles are actually stored within the array.

// You are to complete the program so that it produces output whose appearance and content are similar to the sample output shown in file sample_output_8751.txt. The program prints – for each triangle – the name of that triangle’s owner, the coordinates of that triangle’s vertices, and, for each vertex, the length of the side opposite that vertex.

// Sample output
// The triangles are ...

// Owner           Vertex A                Vertex B                Vertex C            
//                 Opposite Side Length    Opposite Side Length    Opposite Side Length
// ------------    --------------------    --------------------    --------------------
// Pilar           (  -3.85,  -0.93 )      (   4.91,   3.29 )      (   8.29,   5.39 )
//                 3.98                    13.69                   9.73                
// ------------    --------------------    --------------------    --------------------
// Rafael          (  -2.55,  -0.87 )      (  -3.27,  -3.41 )      (   7.81,   2.04 )
//                 12.35                   10.77                   2.64                
// ------------    --------------------    --------------------    --------------------
// Massimiliano    (  -2.72,  -2.39 )      (   5.74,   7.51 )      (  -8.45,   9.53 )
//                 14.32                   13.22                   13.02               
// ------------    --------------------    --------------------    --------------------
// Adisa           (   7.08,  -0.58 )      (  -0.47,   3.18 )      (   0.01,  -1.65 )
//                 4.86                    7.15                    8.43                
// ------------    --------------------    --------------------    --------------------
// Ekene           (  -4.61,  -7.01 )      (   6.64,   1.53 )      (   2.07,   1.56 )
//                 4.58                    10.86                   14.13               
// ------------    --------------------    --------------------    --------------------
// Khuyen          (  -3.06,  -0.53 )      (   7.81,   6.07 )      (   6.20,  -5.61 )
//                 11.79                   10.55                   12.72               
// ------------    --------------------    --------------------    --------------------


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_OWNERS 12
#define MAX_NAME_LEN 12
#define MAX_ARRAY_SIZE 10

struct point
{
  double x ;
  double y ;
} ;

struct triangle
{
  char owner [MAX_NAME_LEN + 1] ; // + 1 is ensure space for null terminator
  struct point vertexA ;
  struct point vertexB ;
  struct point vertexC ;
} ;

void initializeTriangleArray ( struct triangle triangleArray [], int * numberOfTriangles )
{
  // This function provided to students for the purpose of initializing
  // the triangleArray and the size of that array.
  char owner [NUM_OWNERS] [MAX_NAME_LEN + 1]
    = { "Jill",    "Rafael", "Khuyen",       "Adisa",
        "Anne",    "Pilar",  "Anjaneya",     "Masako",
        "Takisha", "Micha",  "Massimiliano", "Ekene"
      } ; // up to 12 letters per name, plus null terminator
  int ownerSelected [NUM_OWNERS] = { 0 } ; // all initially false
  *numberOfTriangles = 3 + rand() % 8 ; //   arraySize must be at most MAX_ARRAY_SIZE
  if ( *numberOfTriangles > MAX_ARRAY_SIZE )
    *numberOfTriangles = MAX_ARRAY_SIZE ;
  for ( int i = 0 ; i < *numberOfTriangles ; i ++ )
  {
  double x1 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  double y1 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  double x2 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  double y2 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  double x3 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  double y3 = ((double) rand()) / RAND_MAX * 20.0 - 10.0 ;
  triangleArray[i] = (struct triangle) { .vertexA = (struct point) {x1,y1},
                                         .vertexB = (struct point) {x2,y2},
                                         .vertexC = (struct point) {x3,y3} } ;
  int j = 0 ;
  do
    j = rand() % NUM_OWNERS ;
  while ( ownerSelected[j] ) ;
  ownerSelected[j] = 1 ;
  strncpy ( triangleArray[i].owner, owner[j], MAX_NAME_LEN ) ;
  } // end for loop
} // end initializeTriangleArray function

int main ( int argc, char * argv [] )
{
  if ( argc < 2 )
  {
    printf ( "Usage: %s <seed>\n", argv[0] ) ;
    exit(1) ;
  } // end if
  else
  {
  unsigned int seed ;
  seed = (unsigned int) strtoul ( argv[1], NULL, 10 ) ;
  srand ( seed ) ;
  } // end else

  struct triangle triangleArray [MAX_ARRAY_SIZE] ;
  int numberOfTriangles = 0 ;

  // call function to initialize array and number of triangles ...
  initializeTriangleArray ( triangleArray, & numberOfTriangles ) {
    for (i=0; i < numberOfTriangles; i++)
    {
      printf("")
    }
  }

} // end main function
