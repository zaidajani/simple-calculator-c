#include <stdio.h>

int main() {
  int snum;
  int fnum;

  printf("Enter the first number: ");
  scanf("%d", &fnum);

  printf("Enter the second number: ");
  scanf("%d", &snum);

  printf("The sum of the numbers is %d", fnum + snum);
}