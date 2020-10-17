#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char word[80];
	int i;
	system("cls");
	printf("Enter your word : ");
	scanf("%s",&word);
	for (i = 0; i<strlen(word); i++)
	{
		if (word[i] < 65 || (word[i] > 90 && word[i] < 97) || word[i]>122)
		{
			printf("Please enter word that content a-z or A-Z only\n");
			_getch();
			exit(1);
		}
		if (word[i] >= 97 && word[i] <= 122)
			word[i] = word[i] - 32;
	}
	printf("Uppercase word is %s\n", word);
	_getch();
}
