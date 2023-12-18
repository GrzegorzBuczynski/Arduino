#include <stdio.h>

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))


int main(){
  // printf() displays the string inside quotation
int x =1500;
  printf("%b\n", x);
int y =x;
bitWrite(y, 0, 1);
printf("%b", y);
  return 0;
}