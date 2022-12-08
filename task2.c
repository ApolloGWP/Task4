#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
  char *first = 0;
  char *second = 0;
  char *third = NULL;
  int index;
  int c;

  opterr = 0;

  while ((c = getopt (argc, argv, "hoc:")) != -1)
    switch (c)
      {
      case 'h':
        first = "This is the new program!\n";
        break;
      case 'c':
        second = "Special mode of operation!\n";
        break;
      case '0':
        third = optarg;
        break;
      case '?':
        if (optopt == 'c')
          fprintf (stderr, "Option -%c requires an argument.\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf (stderr, "Unknown option character `\\x%x'.\n", optopt);
        return 1;
      default:
        abort ();
      }

  printf ("H = %s\n, C = %s\n, O = %s\n",
          first, second, third);

  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);
  return 0;
}
