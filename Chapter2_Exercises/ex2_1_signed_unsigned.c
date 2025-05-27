#include <stdio.h> 
// Requirement ID: SR-2.1-10: The following program shall no usage of <limits.h> in code. 

int main () {

    /*
     * Compute minimum signed values by setting the sign bit (leftmost bit).
     * This follows two's complement representation, where the sign bit
     * defines the minimum negative number.
     * Compute maximum signed values by calculating (2^(bits-1)) - 1,
     * which sets all bits to 1 except the sign bit.
    */

    //The following program shall compute the minimum and maximum values of a signed char using bitwise operations.
    signed char minsignedChar = (signed char)(1 << (sizeof(char) * 8 - 1));
    signed char maxsignedChar = (signed char)(((1 << (sizeof(char) * 8 - 1)) - 1));

    //The following program shall compute the minimum and maximum values of a signed short using bitwise operations.
    signed short minsignedShort = (signed short)(1 << (sizeof(short) * 8 - 1));
    signed short maxsignedShort = (signed short)(((1 << (sizeof(short) * 8 - 1)) - 1));

    //The following program shall compute the minimum and maximum values of a signed int using bitwise operations.
    signed int minsignedInt = (1 << (sizeof(int) * 8 - 1));
    signed int maxsignedInt = ((1U << (sizeof(int) * 8 - 1)) - 1);

    //The following program shall compute the minimum and maximum values of a signed long using bitwise operations.
    signed long minsignedLong = (1L << (sizeof(long) * 8 - 1));
    signed long maxsignedLong = ((1UL << (sizeof(long) * 8 - 1)) - 1);

    /*
     * Compute maximum unsigned values by bitwise inverting zero (~0),
     * resulting in all bits set to 1.
    */

    //SR-2.1-05 The following program shall compute the maximum values of a unsigned char using bitwise operations.
    unsigned char maxunsignedChar = (unsigned char)(~0);
    //SR-2.1-06 The following program shall compute the maximum values of a unsigned short using bitwise operations.
    unsigned short maxunsignedShort = (unsigned short)(~0);
    //SR-2.1-07 The following program shall compute the maximum values of a unsigned int using bitwise operations.
    unsigned int maxunsignedInt = ~0U;
    //SR-2.1-08 The following program shall compute the maximum values of a unsigned long using bitwise operations.
    unsigned long maxunsignedLong = ~0UL;
    
    /*
     * Print results using format specifiers:
     * %d = signed char, short, int
     * %ld = signed long
     * %u = unsigned char, short, int
     * %lu = unsigned long
     */

    // SR-2.1-09: Display computed minimum and maximum values with labels
    printf("\nSigned min char value: %d max char value: %d", minsignedChar, maxsignedChar);
    printf("\nSigned min short value: %d max short value: %d", minsignedShort,  maxsignedShort);
    printf("\nSigned min int value: %d max int value: %d", minsignedInt, maxsignedInt );
    printf("\nSigned min long value: %d max long value: %ld", minsignedLong,maxsignedLong);
    printf("\nUnsigned max char value: %u", maxunsignedChar );
    printf("\nUnsigned max short value: %u", maxunsignedShort);
    printf("\nUnsigned max int value: %u", maxunsignedInt);
    printf("\nUnsigned max long value: %lu", maxunsignedLong);

    return 0;
}