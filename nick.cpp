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
	puts("Добро пожаловать в книгу зодиаков, давайте приступим к работе!");
	printf("Введите %i записей\n", N);
	setZod(arrayZnak);
again:
	puts("1 - Просмотреть контакты\n2 - Выбрать по знаку зодиаку\n3 - Закончить работу");
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
		printf("Введите имя: ");
		scanf("%s %s %s", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2]);
		printf("Введите зодиак: ");
		scanf("%s", &arrayZnak->zodiak);
		printf("дд.мм.гг: ");
		scanf("%d.%d.%d", &arrayZnak->bday[0], &arrayZnak->bday[1], &arrayZnak->bday[2]);
		printf("\n\n");
		arrayZnak++;
	}
}

void printZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
	{
		printf("Имя: %s %s %s\nЗодиак: %s\nДР : %d.%d.%d\n\n", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2], arrayZnak->zodiak, arrayZnak->bday[0], arrayZnak->bday[1], arrayZnak->bday[2]);
		arrayZnak++;
	}
}