#include <stdio.h>
#define MAXLINE 1000

// The names of the parameters in this prototype do not match the
// definition of mygetline.
int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
    int len; // current line length
    int max; // max length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line

    max = 0;
    
    while ((len = mygetline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) { // there was a line (len of 0 is EOF)
        printf("%s\n", longest);
    }
    return 0;
}

int mygetline(char s[], int lim) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) {
            s[i] = c;
        }
    }

    if (c == '\n') {
        if (i <= lim - 1) {
            s[lim - 1] = c;
        }
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
