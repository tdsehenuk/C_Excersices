#include <stdio.h>

int main () {

    char minsignedChar = 0;
    short minsignedShort = 0;
    int minsignedInt = 0;
    long minsignedLong = 0;

    char maxsignedChar = 0;
    short maxsignedShort = 0;
    int maxsignedInt = 0;
    long maxsignedLong = 0;

    char maxunsignedChar = 0;
    short maxunsignedShort = 0;
    int maxunsignedInt = 0;
    long maxunsignedLong = 0;

    printf("\nSigned min char value: %d max char value: %d", minsignedChar, maxsignedChar);
    printf("\nSigned min short value: %d max char value: %d", minsignedShort,  maxsignedShort);
    printf("\nSigned min int value: %d max char value: %d", minsignedInt, maxsignedInt );
    printf("\nSigned min long value: %d max char value: %d", minsignedLong,maxsignedLong);
    printf("\nUnsigned max char value: %d", maxunsignedChar );
    printf("\nUnsigned max short value: %d", maxunsignedShort);
    printf("\nUnsigned max int value: %d", maxunsignedInt);
    printf("\nUnsigned max long value: %d", maxunsignedLong);

    return 0;
}