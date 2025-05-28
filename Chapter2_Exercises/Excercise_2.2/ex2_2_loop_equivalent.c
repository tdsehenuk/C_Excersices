/*
Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||. 
        
        (for i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;


*/
#include <stdio.h>

int main() {
    //initilize the variables needed
    int i = 0;
    int lim = 100;
    char s[100];
    int c;

    //always check these conditions otherwise break out of loop
    while(1) {
        if(i >= (lim - 1)) break; 
        
        c = getchar();

        if(c == '\n') break;
        if(c == EOF) break; 

        s[i++] = c;
    }
    
    //enter the null  terminator
    s[i] = '\0';
    //print the input
    printf("You entered: %s\n", s);


    return 0; 
}