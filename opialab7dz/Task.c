#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "");
	dz();
}
int dz()
{
	//Контрольный пример
	//1 января - 4 (Среда)
	//Номер дня - 4
	//Вывод: Понедельник
	int k, day, jan;
	puts("Номер дня недели на 1 января и номер дня k");
	scanf("%d %d", &jan, &k);
	day = (jan + k - 1) % 7;
	switch (day)
	{
	case 0:
		puts("Понедельник"); 
		break;
	case 1: 
		puts("Вторник");  
		break;
	case 2: 
		puts("Среда");   
		break;
	case 3: 
		puts("Четверг");
		break;
	case 4: 
		puts("Пятница");
		break;
	case 5: 
		puts("Суббота"); 
		break;
	case 6: 
		puts("Воскресенье");
		break;
	default: 
		puts("?");       
		break;
	}
	return 0;
}
