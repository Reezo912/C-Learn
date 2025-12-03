#include <stdio.h>

int main(void) {
  int ratingCounters[11], i, response;

  for (i = 1; i <= 10; ++i)
    ratingCounters[i] = 0;

  //  for (i = 1; i <= 20; ++i) {
  do {
    scanf("%i", &response);
    if (response == 999)
      break;
    else if (response < 1 || response > 10)
      printf("Bad response: %i\n", response);
    else
      ++ratingCounters[response];
  } while (1);

  printf("\n\nRating   Number of Responses\n");
  printf("------ -------------------\n");

  for (i = 1; i <= 10; ++i)
    printf("%4i%14i\n", i, ratingCounters[i]);

  return 0;
}
