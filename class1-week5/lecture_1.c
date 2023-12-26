#include <stdio.h>

int main()
{
  char character_array[6];
  character_array[0] = 'H';
  character_array[1] = 'e';
  character_array[2] = 'l';
  character_array[3] = 'l';
  character_array[4] = 'o';
  character_array[5] = '\0';
  printf("character_array: %s\n", character_array);
  character_array[3] = '\0';
  printf("character_array: %s\n", character_array);
}