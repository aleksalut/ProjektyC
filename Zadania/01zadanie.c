#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Podaj trzy liczby całkowite:");
  scanf("%d,%d,%d", &a, &b, &c);
  if(a>b && a>c){
    printf("Największa liczba to: %d\n", a);
  }
  else if(b>a && b>c){
    printf( "Największa liczba to: %d\n", b);

  }
  else if(c>a && c>b){
    printf( "Największa liczba to: %d\n", c);
  }
  return 0;
    }