#include "rush01.h"

int parse_input(char *str, int clues[CLUE_COUNT])
{
 int i;
 int clue;

 i = 0;
 clue = 0;
 while (clue < CLUE_COUNT)
 {
  if (str[i] < '1' || str[i] > '4')
   return (0);
  clues[clue] = str[i] - '0';
  i++;
  clue++;
  if (clue < CLUE_COUNT)
  {
   if (str[i] != ' ')
    return (0);
   i++;
  }
 }
 if (str[i] != '\0')
  return (0);
 return (1);
}