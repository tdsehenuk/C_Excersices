/*

Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.

*/

#include <stdio.h>

int htoi(char s[]);

int main () {
    int c;
    char array[10]; // to store the input hex string 
    int i = 0;
    int result = 0;

    // read input one char at a time until newline, EOF, or max size
    while((c = getchar()) != EOF && i < 9 && c != '\n') {
        array[i++] = c;
    }
    array[i] = '\0'; // terminate string manually

    printf("You entered: %s", array);
    
    result = htoi(array); // convert hex string to int
    printf("your result is: %d", result);

    return 0;
}

int htoi(char s[]) {
    int i = 0; 
    int result = 0; // store the converted int

    // skip over "0x" or "0X" if it's there
    if((s[0] == '0' &&  (s[1] == 'X' || s[1] == 'x'))) {
        i = 2;
    }

    // go through each character until end of string
    for (; s[i] != '\0'; i++) {
        char c = s[i];
        int digit = 0;

        // handle number digits
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } 
        // handle lowercase hex
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } 
        // handle uppercase hex
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } 
        // if not valid hex, just bail
        else {
            break;
        }

        // shift previous result left by 4 (base 16), then add digit
        result = 16 * result + digit;

        // debug print to watch the conversion step by step
        printf("Digit: %d, Result now: %d\n", digit, result);
    }

    return result;
}
