#include <stdio.h>
#include <stdlib.h>

void ex2_4(void) 
{
	int score;
	printf("Please input a score:");
	scanf("%d", &score);
	if ((score<0) || (score>100)) /* �Y���Z�W�X0��100���� */
		printf("input error!!\n");
	if((score>=0) && (score<50))
		printf("Fail!!\n");
	if ((score<60) && (score>49)) /* �Y���Z����50��59���� */
		printf("make up exams!!\n");
	if ((score>59) && (score<=100))
		printf("pass!!\n");

	//system("pause");
	//return 0;
}