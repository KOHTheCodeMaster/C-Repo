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

//  <| ================ Alphabets Frequency ================ |>

int *strBothCaseFrequency(char *s) {

    int i, length = strLength(s);
    int *freq = (int *) malloc(sizeof(int) * length);

    //  Initialize freq with 0
    for (i = 0; i < 52; i++)
        freq[i] = 0;

    for (i = 0; i < length; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            freq[s[i] - 'A']++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            freq[s[i] - 'a' + 26]++;
    }

    return freq;

}

int *strUpperCaseFrequency(char *s) {

    int i, length = strLength(s);
    int *freq = (int *) malloc(sizeof(int) * length);

    //  Initialize freq with 0
    for (i = 0; i < 26; i++)
        freq[i] = 0;

    //  Increment the value at index : (int) (current character - 'A')
    for (i = 0; i < length; i++)
        freq[s[i] - 'A']++;

    return freq;

}

int *strLowerCaseFrequency(char *s) {

    int i, length = strLength(s);
    int *freq = (int *) malloc(sizeof(int) * length);

    //  Initialize freq with 0
    for (i = 0; i < 26; i++)
        freq[i] = 0;

    //  Increment the value at index : (int) (current character - 'a')
    for (i = 0; i < length; i++) {
        freq[s[i] - 'a']++;
    }

    return freq;

}

//  <| ================ Display Character Frequency ================ |>

void displayBothCaseFrequency(int *a) {

    for (int i = 0; i < 52; i++)
        if (i < 26)
            printf("%d. %c : %d\n", i + 1, i + 'A', a[i]);
        else
            printf("%d. %c : %d\n", i - 25, i + 'a' - 26, a[i]);

}

void displayUpperCaseFrequency(int *a) {

    for (int i = 0; i < 26; i++)
        printf("%d. %c : %d\n", i + 1, i + 'A', a[i]);

}

void displayLowerCaseFrequency(int *a) {

    for (int i = 0; i < 26; i++)
        printf("%d. %c : %d\n", i + 1, i + 'a', a[i]);

}

//  <| ================ Check Anagram String ================ |>

int isAnagramStr(char *s1, char *s2) {

    int s1Len = strLength(s1);
    int s2Len = strLength(s2);

    if (s1Len != s2Len)
        return 0;

    int i;
    int *s1Freq = strLowerCaseFrequency(s1);
    int *s2Freq = strLowerCaseFrequency(s2);

    for (i = 0; i < 26; i++)
        if (s1Freq[i] != s2Freq[i])
            return 0;

    return 1;

}

int demoStringAnagram() {

    char str[100];
    char temp[100];

    printf("Enter First String (Max. Length - 100): ");
    scanf("%s", str);
    printf("Enter Second String (Max. Length - 100): ");
    scanf("%s", temp);

    if (isAnagramStr(str, temp))
        printf("%s is an Anagram of %s", temp, str);
    else
        printf("%s is not an Anagram of %s", temp, str);

    return 1;
}

void demoCharacterFrequency() {

    char *a1 = "abccdzzzzf";
    displayLowerCaseFrequency(strLowerCaseFrequency(a1));
    char *a2 = "ABCCDZZZZF";
    displayUpperCaseFrequency(strUpperCaseFrequency(a2));
    char *a3 = "abccdzzzzfABCCDZZZZF";
    displayBothCaseFrequency(strBothCaseFrequency(a3));

}

int main() {

    printf("Begin.\n");

    demoStringAnagram();
//    demoCharacterFrequency();

    printf("\n\nEnd.\n");

    return 1;

}
