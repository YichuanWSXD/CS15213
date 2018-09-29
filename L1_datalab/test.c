#include <stdio.h>
int fitsBits(int x, int n) {
    //left shift (31-n) and then right shift to see whether the number equals to the original number.
    int result = x<<(32-n)>>n;
    result = !(result-x);
    return result;
}
int main () {
unsigned temp = 0;
  if((temp&0x7f800000)==0){
	temp = (temp&0x80000000)|((temp&0x007fffff)<<1);
  }
  else if((temp&0x7f800000)!=0x7f800000){
     temp+= (1<<23);
     if((temp &0x7f800000)==0x7f800000){
             temp=(temp>>23)<<23;
     }
  }
 printf("%d\n",temp); 
}
/* function returning the max between two numbers */


