#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, temp; 
  int r[100];
  for (i = 0; i < 100; i++) {
    r[i] = -1;
  }

  for (i = 0; i < 100; i++) {
    temp = rand() % 100;
    if (r[temp] == -1) {
      r[temp] = 0;
      printf("%d\n", temp);
    } else {
      i--;
    }
  }
  return 0;
}
