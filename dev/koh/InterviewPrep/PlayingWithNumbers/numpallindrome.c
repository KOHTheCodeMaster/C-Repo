#include <stdio.h>
#include <stdlib.h>

//  <| ================ Number Of Digits ================ |>

int numOfDigits(int n) {

    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;

}

//  <| ================ Max Of 2 ================ |>

int maxOf2(int n1, int n2) {
    return n1 > n2 ? n1 : n2;
}

//  <| ================ Reverse Number ================ |>

int reverseNum(int n) {

    int revNum = 0, lastDigit;
    while (n > 0) {
        lastDigit = n % 10;
        n /= 10;
        revNum = (revNum * 10) + lastDigit;
    }

    return revNum;
}

//  <| ================ Check Palindrome Number ================ |>

int isPalindromeNum(int n) {

    return reverseNum(n) == n ? 1 : 0;

}

//  <| ================ Demo Number Palindrome ================ |>

int demoNumberPalindrome() {

    int n;

    printf("Enter Integer Value : ");
    scanf("%d", &n);

    if (isPalindromeNum(n))
        printf("%d is a Palindrome!", n);
    else
        printf("%d is not a Palindrome!", n);

    return 1;
}

/*
void majorPalindrome() {

    char *strPromptInputType = "Palindrome for :\n"
                               "1. Integers"
                               "2. Strings\nEnter Choice : ";
    printf(strPromptInputType);

    int ch = getchar();
    if (ch == '1')
        demoNumberPalindrome();
    else if (ch == '2')
        demoStringPalindrome();
    else
        printf("Invalid Choice !");
}
*/

void main() {

    printf("Begin.\n");

    demoNumberPalindrome();

    printf("\n\nEnd.\n");

}
