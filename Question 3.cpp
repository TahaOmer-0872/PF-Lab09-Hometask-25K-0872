#include<stdio.h>
#include<string.h>

int anagram_checker(char *a, char *b);
int main () {
	char word1[100];
	char word2[100];
	printf("Enter your first word: ");
	scanf("%s", word1);
	printf("\nEnter your second word: ");
	scanf("%s", word2);
	if (strlen(word1) != strlen(word2)) {
		printf("\nThe words dont have equal character, therefore they are not anagrams.");
		return 0;
	}
    int result = anagram_checker(word1, word2);

    if (result == 0) {
	printf("\nThese two words are not anagrams"); 
	} else {
	printf("\nThese two words are anagrams"); 
	} 
}
int anagram_checker(char *a, char *b) {
    int len = strlen(a);
    int i, j;
    int found;
    char temp[100];
    strcpy(temp, b);

    for (i = 0; i < len; i++) {
        found = 0;
        for (j = 0; j < len; j++) {
            if (a[i] == temp[j]) {
                temp[j] = '0'; 
                found = 1;
                break;
            }
        }
        if (!found) {
            return 0; 
        }
    }
    return 1; 
}

