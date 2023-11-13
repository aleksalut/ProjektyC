#include <stdio.h>
#include <math.h>


int main(void) {
  int a,b,c;
  printf("Podaj liczby: ");
  scanf("%d,%d,%d",&a,&b,&c);
  printf("A: %d  B:%d C: %d ",a,b,c);
  if(a==0) {

    return 0;
  }
  double delta = (b*b)-(4*a*c);
  printf("Delta %lf", delta); 
  if (delta<0){
    printf("Funkcja nie ma miejsc zerowych");
  } else if (delta==0){
    double miejsce_zerowe = -b/(2.0*a);
    printf("Miejsce zerowe wynosi: %lf",miejsce_zerowe);
  } else if (delta>0) {
    double pierwiastekDelta = sqrt(delta);
    double miejsce_zerowe_1 = (-b - pierwiastekDelta)/(2.0*a);
    double miejsce_zerowe_2 = (-b + pierwiastekDelta)/(2.0*a);
    printf( "Miejsca zerowe wynosza: %lf, %lf", miejsce_zerowe_1, miejsce_zerowe_2);
  }

  return 0;
}