#include<stdio.h>
int main()
{
    char c;
    int small,capital;
    scanf("%c",&c);
    small=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    capital=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(small||capital)
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}