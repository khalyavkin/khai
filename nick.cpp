#include <stdio.h> 
#include <locale.h> 

#define N 8

typedef struct {
	char name[3];
	char zodiak[25];
	int bday[3];
} ZNAK;

void setZod(ZNAK* arrayZnak);
void printZod(ZNAK* arrayZnak);

int main() {
	int key;
	setlocale(LC_CTYPE, "rus");
	ZNAK arrayZnak[N];
	puts("����� ���������� � ����� ��������, ������� ��������� � ������!");
	printf("������� %i �������\n", N);
	setZod(arrayZnak);
again:
	puts("1 - ����������� ��������\n2 - ������� �� ����� �������\n3 - ��������� ������");
	scanf("%i", &key);
	switch (key)
	{
	case 1: printZod(arrayZnak); break;
	case 3: return 0;
	}
	goto again;
	return 0;
}

void setZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++) {
		printf("������� ���: ");
		scanf("%s %s %s", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2]);
		printf("������� ������: ");
		scanf("%s", &arrayZnak->zodiak);
		printf("��.��.��: ");
		scanf("%d.%d.%d", &arrayZnak->bday[0], &arrayZnak->bday[1], &arrayZnak->bday[2]);
		printf("\n\n");
		arrayZnak++;
	}
}

void printZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
	{
		printf("���: %s %s %s\n������: %s\n�� : %d.%d.%d\n\n", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2], arrayZnak->zodiak, arrayZnak->bday[0], arrayZnak->bday[1], arrayZnak->bday[2]);
		arrayZnak++;
	}
}