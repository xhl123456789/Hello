#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void Show(char c[])
{
	int length = strlen(c);
	int cLength = length + 2;
	for (int i = 0; i < 5; i++) {
		printf("*");
		for (int j = 0; j < cLength; j++) {
			if (i != 0 && i < 4) {
				if (i == 2)
				{
					printf("%c", c[j]);
				}else
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("*");
		printf("\n");
	}
	return;
}

int main()
{
	char a[50] = "我们大家";
	Show(a);
	system("pause");
}