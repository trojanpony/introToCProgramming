#include <stdio.h>

int main(int argc, char *argv[])
{
// program accepts an argument that is the name of the file to read
// program prints out the number of characters that are letters, punctuation, and how many whitespace characters are in the file

  FILE *fp;
  char ch;
  fp = fopen(argv[1], "r");
  int letters = 0;
  int lowercase = 0;
  int uppercase = 0;
  int punctuation = 0;
  int whitespace = 0;
  if (fp == NULL)
  {
    printf("Unable to open file NON_EXISTENT_FILE.txt for reading", argv[0]);
    return 1;
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch >= 'a' && ch <= 'z')
    {
      lowercase++;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      uppercase++;
    }
    else if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r')
    {
      whitespace++;
    }
    else
    {
      punctuation++;
    }
  }
  letters = lowercase + uppercase;
  printf("The file %s has %d letters, %d punctuation, and %d whitespace characters.\n", argv[1], letters, punctuation, whitespace);
  printf("Of the %d letters, %d are lowercase and %d are uppercase\n", letters, lowercase, uppercase);

  return 0;
}