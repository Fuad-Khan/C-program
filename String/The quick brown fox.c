#include <stdio.h>
int main()
{
	char s[] = "The quick brown fox jumps over the lazy dog";

	int i = 0, vowel = 0, consonants = 0;

	while (s[i] != '\0')
	{

		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
			vowel++;
		else
			consonants++;
		i++;
	}

	printf("Number of vowels in the string: %d\n", vowel);
	printf("Number of consonants in the string: %d\n", consonants);

	return 0;
}
