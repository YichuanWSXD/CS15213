#include <stdio.h>
int fitsBits(int x, int n) {
    //left shift (31-n) and then right shift to see whether the number equals to the original number.
    int result = x<<(32-n)>>n;
    result = !(result-x);
    return result;
}
int main () {
    
    /* local variable definition */
    int x =0x80;
    int b = 0;
    
    int ret = fitsBits(0x80000000,32);
    
    printf( "Max value is : %d\t %x\n", ret,ret );
    
    return 0;
}

/* function returning the max between two numbers */


