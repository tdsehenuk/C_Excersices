#include <stdio.h> // 

int main () {

    signed char minsignedChar = (signed char)(1 << (sizeof(char) * 8 - 1));
    signed short minsignedShort = (signed short)(1 << (sizeof(short) * 8 - 1));
    signed int minsignedInt = (1 << (sizeof(int) * 8 - 1));
    signed long minsignedLong = (1L << (sizeof(long) * 8 - 1));

    signed char maxsignedChar = (signed char)(((1 << (sizeof(char) * 8 - 1)) - 1));
    signed short maxsignedShort = (signed short)(((1 << (sizeof(short) * 8 - 1)) - 1));
    signed int maxsignedInt = ((1U << (sizeof(int) * 8 - 1)) - 1);
    signed long maxsignedLong = ((1UL << (sizeof(long) * 8 - 1)) - 1);

    unsigned char maxunsignedChar = (unsigned char)(~0);
    unsigned short maxunsignedShort = (unsigned short)(~0);
    unsigned int maxunsignedInt = ~0U;
    unsigned long maxunsignedLong = ~0UL;

    printf("\nSigned min char value: %d max char value: %d", minsignedChar, maxsignedChar);
    printf("\nSigned min short value: %d max char value: %d", minsignedShort,  maxsignedShort);
    printf("\nSigned min int value: %d max char value: %d", minsignedInt, maxsignedInt );
    printf("\nSigned min long value: %d max char value: %d", minsignedLong,maxsignedLong);
    printf("\nUnsigned max char value: %u", maxunsignedChar );
    printf("\nUnsigned max short value: %u", maxunsignedShort);
    printf("\nUnsigned max int value: %u", maxunsignedInt);
    printf("\nUnsigned max long value: %lu", maxunsignedLong);

    return 0;
}