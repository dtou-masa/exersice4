#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int die1 = 0, die2 = 0;
  char name[20];

  printf("What is your name\n>");
  scanf("%s",name);
  printf("Hello, %s!\n", name);
  printf("Rolling the dice...\n");
  srand((unsigned)time(NULL));
  die1 = rand() % 6 + 1;
  die2 = rand() % 6 + 1;
  printf("Die 1:%d\nDie 2:%d\n",die1,die2);
  printf("Total value: %d\n", die1 + die2);
  
   if(die1 + die2 > 7)
    {
      printf("%s won\n", name);
    }
  else if(die1 + die2 <= 7)
    {
      printf("%s lost\n",name);
    }
  return 0;
}

