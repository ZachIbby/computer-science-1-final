#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
printf("Welcome to Zachary Ibbersons final.\n");
srand(time(0));
int run = 1;
int select = 0;
while (run == 1)
{
printf("Please use the labelled numbers to select a program you'd like to view:\n   1. evens\n   2. odds\n   3. minimum\n   4. maximum\n   5. average\n   6. oddCount\n   7. whatMonth\n   8. addArray\n   9. leetspeak (BROKEN/CANT FIGURE OUT)\n   10. secToTime\n   11. fib\n");
scanf("%d", &select);

if (select == 1)
{
	int evens = 2;
	while (evens < 101)
	{
		printf("%d\n", evens);
		evens = evens + 2;
	}

}

else if (select == 11)
{
int fib = 0;
int n1 = 0;
int n2 = 1;
int res = 0;
printf("\nWhat number would you like me to go up to in the Fibonacci Sequence?\n");
scanf("%d", &fib);
	while (res <= fib)
	{
		printf("\n%d", res);
		res = n1 + n2;
		n1 = n2;
		n2 = res;
	}

}


else if (select == 10)
{
	int seconds = 0;
	int days = 0;
	int hours = 0;
	int minutes = 0;
	printf("How many seconds do you want converted?\n");
	scanf("%d", &seconds);
	days = seconds / 86400;
	seconds = seconds - (days * 86400);
	hours = seconds / 3600;
	seconds = seconds - (hours * 3600);
	minutes = seconds / 60;
	seconds = seconds - (minutes * 60);
	printf("\nDays: %d\nHours: %d\nMinutes:%d\nSeconds:%d\n", days, hours, minutes, seconds);




}



else if (select == 2)
{
	int odds = 199;
	while (odds > 100)
	{
		printf("%d\n", odds);
		odds = odds - 2;
	}
}

else if (select == 3)
{
	void small(int *min)
	{
	int a;
	int c, d;
	for (a = 0; a < 100; a++)
	{
		if(min[a] < c)
		{
			c = min[a];
			d = a;
		}
	}
	printf("Lowest number: %d found at index %d\n", c, d);
	}


	int minimum[100] = {0};
	int a, b;
	for (a = 0; a < 100; a++)
	{
		b = rand() % 1000000 + 1;
		minimum[a] = b;
	}
	small(minimum);
}

else if (select == 4)
{
	void large(int *max)
	{
		int e;
		int g, h;
		for (e = 0; e < 100; e++)
		{
			if (max[e] > g)
			{
				g = max[e];
				h = e;
			}
		}
		printf("Largest number: %d found at index %d\n", g, h);
	}

	int maximum[100] = {0};
	int e, f;
	for (e = 0; e < 100; e++)
	{
		f = rand() % 1000000 + 1;
		maximum[e] = f;
	}
	large(maximum);

}

else if (select == 5)
{
void oC(int *count)
{
	int i;
	float avg;
	int sum = 0;
	for (i = 0; i < 100; i++)
	{
		sum = sum + count[i];
	}
	avg = sum / 100;
	printf("Average is: %f\n", avg);
}
	int lulW[100] = {0};
	int i, j;
	for (i = 0; i < 100; i++)
	{
		j = rand() % 1000000 + 1;
		lulW[i] = j;
	}
	oC(lulW);
}

else if (select == 6)
{
void oc(int *od)
{
	int m, counting;
	counting = 0;
	for (m = 0; m < 100; m++)
	{
		if (od[m] % 2 == 0)
		{
		}
		else 
		{
			counting = counting + 1;
		}
	}
	printf("There are %d odd numbers in the array.", counting);
}




	int countOdd[100] = {0};
	int m, n;
	for (m = 0; m < 100; m++)
	{
		n = rand() % 1000000 + 1;
		countOdd[m] = n;
	}
	oc(countOdd);
}
else if (select == 8)
{
int arr1[10] = {0};
int arr2[10] = {0};
int arr3[10] = {0};
int y = 0;
int z = 0;
int x = 0;
for (y = 0; y < 10; y++)
{
	z = rand() % 10 + 1;
	x = rand() % 10 + 1;
	arr1[y] = z;
	arr2[y] = x;
	arr3[y] = z + x;
	printf("Index %d: A[%d]+B[%d]=C[%d]\n", y, arr1[y], arr2[y], arr3[y]);
}
	
}
else if(select == 7)
{
	int day = 0;
	int month = 0;
	int year = 0;
	printf("How many days?\n");
	scanf("%d", &day);
	year = day / 365;
	day = day - (year * 365);
	if (day >= 1 && day <= 31)
		{
			printf("This date is in January");
		}
	else if (day >= 32 && day <= 59)
	{
		printf("This date is in February");
	}
	else if (day >= 60 && day <= 90)
	{
		printf("This date is in March");
	}
	else if (day >= 91 && day <=120)
	{
		printf("This date is in April");
	}
	else if (day >= 121 && day <= 151)
	{
		printf("This date is in May");
	}
	else if (day >= 152 && day <= 181)
	{
		printf("This date is in June");
	}
	else if (day >= 182 && day <= 212)
	{
		printf("This date is in July");
	}
	else if (day >= 213 && day <= 243)
	{
		printf("This date is in August");
	}
	else if (day >= 244 && day <= 273)
	{ 
		printf("This date is in September");
	}
	else if (day >= 274 && day <= 304)
	{
		printf("This date is in October");
	}
	else if (day >= 305 && day <= 334)
	{
		printf("This date is in November");
	}
	else if (day >= 335 && day <= 365)
	{
		printf("This date is in December");
	}
	else
	{
		printf("Sorry, but this isnt a time machine, you can't have negative days.");
	}
}

	else if(select == 9)
{
	int aa = 0;
	char s[100];
	printf("Enter a message to be transformed into 1337 speak. (only uppercase, maximum of 100 characters.)\n");
	fgets(s, 99, stdin);
	while (s[aa]!='\0')
	{
		if(s[aa] == 'A')
		{
			s[aa] == '4';
		}
		else if(s[aa] == 'E')
		{
			s[aa] == '3';
		}
		else if(s[aa] == 'L')
		{
			s[aa] == '1';
		}
		else if(s[aa] == 'Z')
		{
			s[aa] == '2';
		}
		else if(s[aa] == 'O')
		{
			s[aa] == '0';
		}
		else if(s[aa] == 'S')
		{
			s[aa] == '5';
		}
		else if(s[aa] == 'T')
		{
			s[aa] == '7';
		}
	aa++;
	}
	printf("%s", s);
}


else
{
	printf("Selected program number is invalid.\n");
}

int cont = 0;
printf("\nTo exit, enter 0.  To continue, enter any other number.\n");
scanf("%d", &cont);

	if (cont == 0)
	{
		run = 0;
	}
	else 
	{
		run = 1;
	}

}
return 0;
}
