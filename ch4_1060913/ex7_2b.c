#include <stdio.h>
#include <stdlib.h>

void ex7_2b( )
{	
	/* ��X�}�C�C�@��������} */
	int num[10], i;
	for(i = 0; i < 10; i++)   
	{
		printf("&num[%d]=%p, num+%d=%p\n", i, &num[i], i, num+i);
 	}
 	//system("PAUSE");
  	//return 0;
}