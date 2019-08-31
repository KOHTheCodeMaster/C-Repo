#include <stdio.h>
#include <stdlib.h>

//  <| ================ String Length ================ |>

int strLength(const char *s) {

    int count = 0, i = 0;
    while (s[i++] != '\0')
        count++;
    return count;

}

//  <| ================ String Equals ================ |>

int strEquals(char *s1, char *s2) {

    int s1Len = strLength(s1);
    int s2Len = strLength(s2);
    int i = 0;

    if (s1Len != s2Len)
        return 0;

    while (i < s1Len) {
        if (s1[i] != s2[i++])
            return 0;
    }
    return 1;

}

//  <| ================ Reverse String ================ |>

char *reverseString(char *str) {

    int i, j = 0, length = strLength(str);

    if (length <= 0)
        return NULL;

    char *revStr = (char *) malloc(sizeof(char) * length);

    for (i = length - 1; i >= 0; i--)
        revStr[j++] = str[i];
    revStr[j] = '\0';

    return revStr;

}

//  <| ================ Check Palindrome String ================ |>

int isPalindromeStr(char *str) {

    char *revStr = reverseString(str);
//    printf("i : %s | t : %s\n", str, revStr);

    return strEquals(str, revStr);
}

//  <| ================ Demo String Palindrome ================ |>

int demoStringPalindrome() {

    char s[100];

    printf("Enter String (Max. Length - 100): ");
//    scanf("%s", s);
    gets(s);

    if (isPalindromeStr(s))
        printf("%s is a Palindrome!", s);
    else
        printf("%s is not a Palindrome!", s);

    return 1;
}

int main() {

    printf("Begin.\n");

    demoStringPalindrome();

    printf("\n\nEnd.\n");

    return 1;

}
