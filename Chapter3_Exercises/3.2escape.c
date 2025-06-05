/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
function for the other direction as well, converting escape sequences into the real characters. 
*/

#include <stdio.h>
#include <stdlib.h>


void escape(char s[], char t[]);

int main() {

    char x[] = {"hello\nthis\tiscool"};
    char y[100];
    
    printf("\nHere is the array before: %s", x);
    escape(x,y);
    printf("\nHere is the array after: %s", y);
    
    
    return 0;
}

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;

    while (s[i] != '\0') {
        switch(s[i]) {
                case '\n' :
                    t[j++] = '\\';
                    t[j++] = 'n';
                    i++;
                    break;
                case  '\t' :
                    t[j++] = '\\';
                    t[j++] = 't';
                    i++;
                    break;
                default:
                    t[j++] =  s[i++];
            }
    }
    t[j] = '\0';
}