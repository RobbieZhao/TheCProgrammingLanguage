#include <stdio.h>
#include <limits.h>
#include <float.h>

void print_ranges_of_integers()
{
  printf("Ranges of chars:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of signed char: %hhi to %hhi\n", SCHAR_MIN, SCHAR_MAX);
  printf("\t\tRange of unsigned char: %hhu to %hhu\n", 0, UCHAR_MAX);

  printf("\tPrinting by computation: \n");
  signed char signed_char_max = (signed char)(((unsigned char)~0) >> 1);
  signed char signed_char_min = ~signed_char_max;
  printf("\t\tRange of signed char: %hhi to %hhi\n", signed_char_min, signed_char_max);
  printf("\t\tRange of unsigned char: %hhu to %hhu\n", 0, (unsigned char)(~0));

  printf("Ranges of shorts:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of signed short: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
  printf("\t\tRange of unsigned short: %hu to %hu\n", 0, USHRT_MAX);

  printf("\tPrinting by computation: \n");
  signed short signed_short_max = (signed short)(((unsigned short)~0) >> 1);
  signed short signed_short_min = ~signed_short_max;
  printf("\t\tRange of signed short: %hd to %hd\n", signed_short_min, signed_short_max);
  printf("\t\tRange of unsigned short: %hu to %hu\n", 0, (unsigned short)(~0));

  printf("Ranges of ints:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of signed int: %d to %d\n", INT_MIN, INT_MAX);
  printf("\t\tRange of unsigned int: %u to %u\n", 0, UINT_MAX);

  printf("\tPrinting by computation: \n");
  signed int signed_int_max = (signed int)(((unsigned int)~0) >> 1);
  signed int signed_int_min = ~signed_int_max;
  printf("\t\tRange of signed int: %d to %d\n", signed_int_min, signed_int_max);
  printf("\t\tRange of unsigned int: %u to %u\n", 0, (unsigned int)(~0));

  printf("Ranges of longs:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("\t\tRange of unsigned long: %lu to %lu\n", 0, ULONG_MAX);

  printf("\tPrinting by computation: \n");
  signed long signed_long_max = (signed long)(((unsigned long)~0) >> 1);
  signed long signed_long_min = ~signed_long_max;
  printf("\t\tRange of signed long: %ld to %ld\n", signed_long_min, signed_long_max);
  printf("\t\tRange of unsigned long: %lu to %lu\n", 0, (unsigned long)(~0));
}

union ufloat
{
  float f;
  unsigned u;
};

void print_ranges_of_floats()
{
  printf("Ranges of floats:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of floats: %E to %E\n", FLT_MIN, FLT_MAX);

  printf("Ranges of doubles:\n");

  printf("\tPrinting from the headers: \n");
  printf("\t\tRange of doubles: %lE to %lE\n", DBL_MIN, DBL_MAX);

  // Never figured out how to compute the ranges of floats and doubles in a machine-independent way :(
}

int main()
{
  print_ranges_of_integers();
  print_ranges_of_floats();

  return 0;
}