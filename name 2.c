#include <iostream>
#include <cstdio>
using namespace std;
void line()
{
for(int i=0 ;i<=3 ;i++)
    {
        for(int j=1 ;j<=20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void left_right_vertical_line()
{
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 19; j++)
			{
				printf("*");
				if (j==6 )
				{
					for (int k = 0; k < 7; k++)
					{
						j++;
						printf(" ");
					}
				}
			}
		printf("\n");
	}
}
void left_vertical_line()
{
for(int i=1 ;i<=5;i++)
    {
        for(int j=1 ;j<=5;j++)
        {
            printf("*");
        }
		printf("\n");
    }
}
void left_right_vertical_hollow()
{
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 19; j++)
			{
				printf(" ");
				if (j==6 )
				{
					for (int k = 0; k < 7; k++)
					{
						j++;
						printf("*");
					}
				}
			}
		printf("\n");
	}
}
void blank()
{
	printf("\n");
}
int main()
{
	left_right_vertical_line();
	line();
	left_right_vertical_line();
	blank();
	left_right_vertical_hollow();
	left_right_vertical_line();
	line();
	left_right_vertical_line();
	left_right_vertical_line();
	return 0;
}
