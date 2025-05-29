/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
45
*/

#include <stdio.h>
void squeeze(char s[], int c);
void squeeze2(char s1[], char s2[]);

//make main and test given squeeze

int main() {

    char *s1 = "battle";
    char *s2 = "le";

    squeeze2(s1, s2);
    printf("after it gets sqeezed its %s", s1);

    return 0;
}

 void squeeze2(char s1[], char s2[]) {
    int i;
    int j;
    int k;
    int found = 0;

    for(int i = 0; s1[i] != '\0'; i++) {
        for(int j = 0; j != '\0'; j++) {
            if(s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }
        s1[k] = s1[i];
        k++;
    }

    s1[k] = '\0';
 }




 void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
    s[j++] = s[i];
    s[j] = '\0';
 }
