#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int die1 = 0, die2 = 0;
  printf("Rolling the dice...\n");
  srand((unsigned)time(NULL));
  die1 = rand() % 6 + 1;
  die2 = rand() % 6 + 1;
  printf("Die 1:%d\nDie 2:%d\n",die1,die2);
  printf("Total value: %d\n", die1 + die2);
}
