#include <stdio.h>
int fitsBits(int x, int n) {
    //left shift (31-n) and then right shift to see whether the number equals to the original number.
    int result = x<<(32-n)>>n;
    result = !(result-x);
    return result;
}
int main () {
	  int result,x;
	  x=1;
  result = 0;
printf("%d\n",result);    
  result = (!!(x>>16))*16;
printf("%d\n",result);    
  result = result + (!!(x>>(8+result)))*8;
printf("%d\n",result);    
  result = result +(!!(x>>(4+result)))*4;
printf("%d\n",result);    
  result = result +(!!(x>>(2+result)))*2;
printf("%d\n",result);    
  result = result +(!!(x>>(1+result)));
printf("%d\n",result);    

    return 0;
}

/* function returning the max between two numbers */


