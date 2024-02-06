#include <stdio.h>

int main(void){
  float l, w, h, v;
  printf("L=?"); scanf("%f", &l);
  printf("W=?"); scanf("%f", &w);
  printf("H=?"); scanf("%f", &h);

  v = l*w*h;
  printf("Volume= %f", v);
}
