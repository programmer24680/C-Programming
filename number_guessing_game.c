# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	int actual_num;
	srand(time(0));
	actual_num = rand()%100+1;
	//printf("The num is %d", actual_num);
	for (int i = 1; i; i++)
	{
		int guess;
		printf("Enter your guess: ");
		scanf("%d", &guess);
		if (guess==actual_num)
		{
			printf("You won! You took %d attempts to guess the number\n", i);
			break;
		}
		else if (guess > actual_num)
		{
			printf("Your guess is too high.\n");
		}
		else
		{
			printf("your guess is too low.\n");
		}
	}
	return 0;
}
